#include <iostream>
#include <string.h>

#include <X11/Xutil.h>
#include <X11/XKBlib.h>
#include <X11/Xproto.h>
#include <X11/Xatom.h>

//#include "config/config.h"
#include "types/types.h"

using namespace std;

#define LENGTH(x)		(sizeof(x)/sizeof(*x))
#define CLEAMASK(mask)		(mask & ~(mask & ~(numlockmask | LockMask))
#define BUTTONMASK		ButtonPressMask | ButtonReleaseMask
#define VERSION			"alpha 0.1"
#define ISFFT(c) 		SubstructureRedirectMask | ButtonPressMask | SubstructureNotifyMask | PropertyChangeMask


enum { RESIZE, MOVE };
enum { TILE, MONOCLE, BSTACK, GRID, FLOAT, MODES };
enum { WM_PROTOCOLS, WM_DELETE_WINDOW, WM_COUNT };
enum { NET_SUPPORTED, NET_FULLSCREEN, NET_WM_STATE, NET_ACTIVE, NET_COUNT };

int main(int argc, char *argv[]) {
	if (argc > 1)
	{
		if (!strcmp(argv[1],"-v"))
		{
			cout << "IcyWM by end222" << endl;
			cout << "Version " << VERSION << endl;
		}
		else
		{
			cout << "Usage: man icywm" << endl;
		}
	}
}	
