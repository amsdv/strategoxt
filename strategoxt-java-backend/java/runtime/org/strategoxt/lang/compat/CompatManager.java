package org.strategoxt.lang.compat;

import org.spoofax.interpreter.adapter.aterm.WrappedATermFactory;
import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.strategoxt.lang.Context;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatManager {
	
	public void postInit(Context context, String component) {
		if ("libstratego_lib".equals(component)) {
			context.addOperatorRegistry(new CompatLibrary());
			performance_tweaks.init(context);
		} else if ("libstratego_xtc".equals(component)) {
			xtc_compat.init(context);
		} else if ("libstratego_sglr".equals(component)) {
			context.addOperatorRegistry(new JSGLRLibrary(new WrappedATermFactory()));
			jsglr_parser.init(context);
			jsglr_parser_compat.init(context);
		}
	}
}