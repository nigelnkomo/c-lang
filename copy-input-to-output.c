/* 
 * Pseudocode
 *
 * read character
 * while (character is not end-of-file indicator)
 * 	output the character just read
 * 	read character
 */

#include <stdio.h>

/* copy input to output */
int main ()
{
	int c;

	while ((c = getchar ()) != EOF) { /* Ctrl + D */
		putchar (c);
	}
}
