#include <stdio.h>

#define IN 1	/* inside word */
#define OUT 0	/* outside word */	

int main ()
{
	int c, nl, nc, nw, state;

	state = OUT;
	nl = nc = nw = 0;
	while ((c = getchar ()) != EOF) {
		++nc;

		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf ("%d lines, %d words, %d characters\n", nl, nw, nc);

	return 0;
}
