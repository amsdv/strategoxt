/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU General Public License
along with this library; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <srts/stratego.h>

// read the entries from a directory and return a list
// with all the names

ATerm SSL_readdir(ATerm t) 
{
  DIR *dir = NULL;
  ATermList entries = ATempty;
  struct dirent *entry = NULL;

  if(!t_is_string(t))
    _fail(t);

  dir = opendir(ATgetName(ATgetSymbol(t)));

  if(dir == NULL)
    _fail(t);

  while((entry = readdir(dir)) != NULL) 
    {
      entries = ATinsert(entries, ATmakeString(entry->d_name));
    }

  closedir(dir);

  return (ATerm) entries;
}

ATerm SSL_rename(ATerm oldname, ATerm newname)
{
  if(!t_is_string(oldname) || !t_is_string(newname))
    _fail(oldname);

  if(rename(ATgetName(ATgetSymbol(oldname)),ATgetName(ATgetSymbol(newname))) != 0)
    _fail(oldname);
 
  return newname;
}

#define SSL_COPY_BUFSIZE 8192

ATerm SSL_copy(ATerm oldname, ATerm newname)
// copy file oldname to file newname using read and write
{
  int fdin, fdout;
  int n; 
  char buf[SSL_COPY_BUFSIZE];

  if(ATmatch(oldname, "stdin"))
    fdin = STDIN_FILENO;
  else if(!t_is_string(oldname))
    _fail(oldname);
  else if((fdin = open(ATgetName(ATgetSymbol(oldname)), O_RDONLY)) < 0 )
    {
      ATfprintf(stderr, "SSL_copy: cannot open inputfile %t\n", oldname);
      _fail(oldname); 
    }

  if(ATmatch(newname, "stdout"))
    fdout = STDOUT_FILENO;
  else if(ATmatch(newname, "stderr"))
    fdout =  STDERR_FILENO;
  else if(!t_is_string(newname))
    _fail(newname);
  else if((fdout = open(ATgetName(ATgetSymbol(newname)), 
			O_RDWR | O_CREAT | O_TRUNC, 
			S_IRUSR | S_IWUSR)) < 0 )
    {
      ATfprintf(stderr, "SSL_copy: cannot create output file %t\n", newname);
      _fail(newname);
    }

  while( (n = read(fdin, buf, SSL_COPY_BUFSIZE)) > 0 )
    if(write(fdout, buf, n) != n)
      { 
	ATfprintf(stderr, "SSL_copy: write error\n");
	_fail(newname);
      }

  if(n < 0)
    {
      ATfprintf(stderr, "SSL_copy: read error\n");
      _fail(oldname);
    }
      
  return newname;
}

ATerm SSL_fdcopy(ATerm fdinA, ATerm fdoutA)
{
  int fdin, fdout;
  int n; 
  char buf[SSL_COPY_BUFSIZE];

  if(ATgetType(fdinA) != AT_INT || ATgetType(fdinA) != AT_INT)
    _fail(fdinA);

  fdin = ATgetInt((ATermInt)fdinA);
  fdout = ATgetInt((ATermInt)fdoutA);

  while( (n = read(fdin, buf, SSL_COPY_BUFSIZE)) > 0 )
    if(write(fdout, buf, n) != n)
      { 
	ATfprintf(stderr, "SSL_fdcopy: write error\n");
	_fail((ATerm) ATempty);
      }

  if(n < 0)
    {
      ATfprintf(stderr, "SSL_fdcopy: read error\n");
      _fail((ATerm) ATempty);
    }

  return (ATerm) ATempty;
}

ATerm SSL_copy_mmap(ATerm oldname, ATerm newname)
// copy file oldname to file newname using memory mapped io
{
  int fdin, fdout;
  char *src, *dst;
  struct stat statbuf;

  if(ATmatch(oldname, "stdin"))
    fdin = STDIN_FILENO;
  else if(!t_is_string(oldname))
    _fail(oldname);
  else if((fdin = open(ATgetName(ATgetSymbol(oldname)), O_RDONLY)) < 0 )
    {
      ATfprintf(stderr, "SSL_copy: cannot open inputfile %t\n", oldname);
      _fail(oldname); 
    }

  if(ATmatch(newname, "stdout"))
    fdout = STDOUT_FILENO;
  else if(ATmatch(newname, "stderr"))
    fdout =  STDERR_FILENO;
  else if(!t_is_string(newname))
    _fail(newname);
  else if((fdout = open(ATgetName(ATgetSymbol(newname)), 
			O_RDWR | O_CREAT | O_TRUNC, 
			S_IRUSR | S_IWUSR)) < 0 )
    {
      ATfprintf(stderr, "SSL_copy: cannot create output file %t\n", newname);
      _fail(newname);
    }

  if(fstat(fdin, &statbuf) < 0) /* need size of input file */
    {
      ATfprintf(stderr, "SSL_copy: need size of input file\n", newname);
      _fail(oldname);
    }

  if(lseek(fdout, statbuf.st_size - 1, SEEK_SET) == -1)
    {
      ATfprintf(stderr, "SSL_copy: lseek error\n", newname);
      _fail(oldname);
    }
  if(write(fdout, "", 1) != 1)
    {
      ATfprintf(stderr, "SSL_copy: write error\n", newname);
      _fail(oldname);
    }

  if( (src = mmap(0, statbuf.st_size, PROT_READ, MAP_FILE | MAP_SHARED, fdin, 0))
      == (caddr_t) - 1)
    {
      ATfprintf(stderr, "SSL_copy: mmap error for input\n", newname);
      _fail(oldname);
    }

  if( (dst = mmap(0, statbuf.st_size, PROT_READ | PROT_WRITE, 
		  MAP_FILE | MAP_SHARED, fdout, 0)) == (caddr_t) - 1)
    {
      ATfprintf(stderr, "SSL_copy: mmap error for output\n", newname);
      _fail(oldname);
    }

  memcpy(dst, src, statbuf.st_size); /* copy the file */  

  return newname;
}

ATerm SSL_link(ATerm existingpath, ATerm newpath)
{
  if(!t_is_string(existingpath) || !t_is_string(newpath))
    _fail(existingpath);

  if(link(ATgetName(ATgetSymbol(existingpath)), ATgetName(ATgetSymbol(newpath))) != 0)
    _fail(existingpath);

  return newpath;
}

ATerm SSL_remove(ATerm pathname)
{
  if(!t_is_string(pathname))
    _fail(pathname);

  if(remove(ATgetName(ATgetSymbol(pathname))) != 0)
    _fail(pathname);

  return (ATerm) ATempty;
}

/*
ATerm SSL_stat(ATerm file)
{
  struct stat buf;

  if(!t_is_string(file)) _fail(file);

  int stat(ATgetName(ATgetSymbol(t)), &buf);

  return ATmakeAppl("Stat");
}
*/

ATerm SSL_modification_time(ATerm file)
{
  struct stat buf;

  if(!t_is_string(file)) _fail(file);

  stat(ATgetName(ATgetSymbol(file)), &buf);

  return (ATerm)ATmakeInt(buf.st_mtime);
}

ATerm SSL_getenv(ATerm name)
{
  char *value;

  if(!t_is_string(name)) _fail(name);

  value = getenv(ATgetName(ATgetSymbol(name)));

  if(value == NULL) _fail(name);

  return (ATerm)ATmakeString(value);
}

// Note: this auxiliary function need not be defined if setenv is
// implemented; platform dependent.

static int ssl_aux_setenv( const char* name, const char* value, int overwrite )
{
   char* env_str;
   char* buf;
   int   status;
      
   env_str = getenv( name );
   if( env_str != NULL && overwrite == 0 )
      return 0;
   
   buf = (char*)malloc( strlen( name ) + strlen( value ) + 1 + 1);
   if( buf == NULL )
      return -1;
   
   sprintf( buf, "%s=%s", name, value );
   
   status = putenv( buf );
   
   return status;
}
   
ATerm SSL_setenv(ATerm name, ATerm value, ATerm overwrite)
{
  if(!t_is_string(name)) _fail(name);
  if(!t_is_string(value)) _fail(value);
  if(!ATisInt(overwrite)) _fail(overwrite);

  ssl_aux_setenv(ATgetName(ATgetSymbol(name)), 
		 ATgetName(ATgetSymbol(value)), 
		 ATgetInt((ATermInt)overwrite));

  return (ATerm)ATempty;
}
