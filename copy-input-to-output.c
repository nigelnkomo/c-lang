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

	c = getchar ();

	while (c != EOF) { /* Ctrl + D */
		putchar (c);
		c = getchar();
	}
}
