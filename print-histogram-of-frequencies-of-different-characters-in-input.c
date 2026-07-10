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

	// find max value
	for (i = 0; i <= 127; ++i)
		if (freq[i] > max)
			max = freq[i];

	// print histogram
	for (i = 0; i <= 127; ++i) {
		for (j = 0; j <= freq[i]; ++j)
			printf ("\u2588");
		putchar ('\n');
	}

	// print vertical histogram
	putchar ('\n');
	printf ("Vertical Histogram\n");
	for (i = 1; i <= max; ++i) {
		for (j = 0; j <= 127; ++j)
			if (freq[j] > 0) {
				printf ("\u2588");
				--freq[j];
			}
			else if (freq [i] <= 0)
				putchar (' ');
		putchar ('\n');
	}

	return 0;
}
