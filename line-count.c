#include <stdio.h>

/* count all lines in input before EOF */
int main ()
{
	int c, nl;

	nl = 0;
	while ((c = getchar ()) != EOF)
		if (c == '\n')
			++nl;
	printf ("%d\n", nl);
}
