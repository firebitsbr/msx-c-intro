#include <stdio.h>
#include <msxalib.h>
#include <msxclib.h>

char Ptn[4+13*19] = { 13, 0, 10, 0,
	0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0,
	0, 0, 4, 4, 4, 4, 4, 4, 4,15, 4, 0, 0,
	0, 0, 4, 4, 4, 4, 4, 4, 4,15, 4, 0, 0,
	0, 0, 4, 4, 4, 4, 4, 4, 4,15, 4, 0, 0,
	0, 0, 4, 4, 4, 4, 4, 4, 4,15, 4, 0, 0,
	0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0,
	0, 0, 4, 4, 4, 4, 4, 4, 4,15, 4, 0, 0,
	0, 0, 0,11,11, 8, 8, 8,11,11, 0, 0, 0,
	0, 4, 4, 4,11,11,11,11,11, 4, 4, 4, 0,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4,11, 4, 4, 4, 4, 4, 4,
   11,11, 4, 4, 4, 4, 4, 4, 4, 4, 4,11,11,
   11,11, 4,11, 4,11,11,11, 4,11, 4,11,11,
    0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0,
    0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0,
    0, 8, 8, 0,11,11, 0,11,11, 0, 8, 8, 0,
    8, 8, 8, 8, 8, 8, 0, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 0, 8, 8, 8, 8, 8, 8
};

VOID main()
{
	int i;

	ginit();
	srnd();
	color(15, 1, 1);
	screen(5);

	while(!kbhit()) {
		cpym2v(Ptn, 0,
			rnd(250), rnd(195), 0, 8);
		for (i = 0; i < 4000; ++i);
	}
	screen(0);
}