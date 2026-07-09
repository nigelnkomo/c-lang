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
	int c, i, j, pr, max, state, nchar, nword[10];

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
	
	// catch words at EOF
	if (nchar >= 1 && nchar <= 10)
		++nchar;


	/* find the largest word length in array
	 * use it as max value to stop in for loop
	 * define inner loop with max value of array length - 1
	 * print bar character and decrement arr[i]
	 * if arr[i] becomes zero, print empty space.
	 */

	max = nword[0];
	for (i = 1; i < 10; ++i) {
		if (nword[i] > max)
			max = nword[i];
	}

	for (i = 1; i <= max; ++i) {
		for (j = 0; j <= 9; ++j) {
			if (nword[j] > 0) {
				printf ("\u2588");
				--nword[j];
			}
			else if (nword[j] <= 0)
				putchar (' ');
		}
		putchar ('\n');
	}


}
	
