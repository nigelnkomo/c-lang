#include <stdio.h>

int main ()
{
	int freq[128], i, j, max, c;

	// initialise
	max = freq[0];
	for (i = 0; i <= 127; ++i)
		freq[i] = 0;

	// capture frequencies
	while ((c = getchar()) != EOF) {
		++freq[c];
	}

	// print histogram
	for (i = 0; i <= 127; ++i) {
		for (j = 0; j <= freq[i]; ++j)
			printf ("\u2588");
		putchar ('\n');
	}

	return 0;
}
