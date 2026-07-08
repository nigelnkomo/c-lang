#include <stdio.h>

/* identify when inside a word
 * maintain character count when inside word
 * identify when outside word
 * store character count of word in array, keeping track of frequency of words with a specific number of characters ranging from words with 1 character to words with 10 characters
 * draw histogram using block character each block representing one character
 */

#define IN 1
#define OUT 0

int main ()
{
	int c, i, j, pr, state, nchar, nword[10];

	state = pr = nchar = 0;
	for (i = 0; i <= 9; ++i)
		nword[i] = 0;

	while ((c = getchar ()) != EOF) {
		if (pr == 0) {
			if (c != ' ' && c != '\t' && c != '\n') {
				state = IN;
				++nchar;
				pr = c;
			}
		}
		else if (c != ' ' && c != '\t' && c != '\n') {
			++nchar;
			pr = c;
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			for (i = 1; i <= 10; ++i) {
				if (nchar == i)
					++nword[i-1];
			}
			state = OUT;
			nchar = 0;
		}
	}

	// draw histogram
	for (i = 0; i <= 9; ++i) {
		for (j = 1; j <= nword[i]; ++j) {
			printf("\u2588");
		}
		putchar ('\n');
		
	}
}
