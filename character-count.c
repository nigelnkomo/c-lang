#include <stdio.h>

/* count all characters in input before EOF */
int main ()
{
	long nc;

	for (nc = 0; getchar () != EOF; ++nc)
		;
	printf ("%ld\n", nc);
}
