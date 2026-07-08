#include <stdio.h>

/* count digits, whitespace, others */
int main ()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i <= 9; ++i) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') 
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else
			++nother;
	}

	printf ("ndigits = ");
	for (i = 0; i <= 9; ++i)
		printf ("%d ", ndigit[i]);
	printf ("nwhite = %d, nother = %d\n", nwhite, nother);

	return 0;
}
