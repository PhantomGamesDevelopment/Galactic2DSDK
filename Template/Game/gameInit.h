/**
* Galactic 2D
* (C) 2014 Phantom Games Development - All Rights Reserved
* gameInit.h
*
* Main file for loading in a DLL into Galactic 2D.
*
* NOTE: In order to write a Game.DLL for Galactic 2D, you need to download the G2D SDK from
* http://www.phantomdev.net/galactic/2d/sdk.php
* You will need to include Galactic2D.lib as well as point your MSVS installation to the header files located in the Galactic2D folder.
**/

//Required file for Galactic 2D Projects.
#define GALACTIC_DLL_COMPILE 1 //When we compile the .dll against the Internal namespace, this will convert our API functions into DLL variants.
#include <Internal/internal.h>

//Include all of your new header files here...

/*All Galactic 2D References are located in the Galactic Namespace, Please refer to the documentation regarding individual classes and elements
 That are readily available to you within the engine's reference files.*/
namespace Galactic {

	/* It is standard to place your game in the Game namespace, however anything is "legal" outside of common namespaces (Internal, Network, etc) */
	namespace Game {

		/* galacticgamemain() is the function the module loader is looking for, as long as this exists, your .DLL will be permitted to load
		   into the engine. A good idea is to initialize all of your static classes here. */
		GALACTIC_API S32 galacticgamemain() {
			return 1;
		}

	};

};