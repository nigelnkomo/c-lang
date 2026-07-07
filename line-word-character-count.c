#include <stdio.h>

#define IN 1	/* inside word */
#define OUT 0	/* outside word */	

int main ()
{
	int c, nl, nc, nw, state, pr;

	state = OUT;
	nl = nc = nw = pr = 0;
	while ((c = getchar ()) != EOF) {
		++nc;

		if (c == '\n')
			++nl;
		else if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		if (c != ' ' && c != '\t' && c != '\n') {
			state = IN;
			if (pr == ' ' || pr == '\t' || pr == '\n' || pr == 0 )
				++nw;
		}
		pr = c;
	}

	printf ("%d lines, %d words, %d characters\n", nl, nw, nc);

	return 0;
}
