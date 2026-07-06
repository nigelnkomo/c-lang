#include <stdio.h>

/* count blanks, tabs and newlines before EOF */
int main ()
{
	long bl, tb, nl, c;

	bl = 0;
	tb = 0;
	nl = 0;
	while ((c = getchar ()) != EOF) {
		if (c == ' ')
			++bl;
		if (c == '	')
			++tb;
		if (c == '\n')
			++nl;
	}
	printf ("%ld blanks\n%ld tabs\n%ld newlines\n", bl, tb, nl);
}
