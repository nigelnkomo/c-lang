/* 
 * Pseudocode
 *
 * read character
 * while (character is not end-of-file indicator)
 * 	output the character just read
 * 	read character
 */

#include <stdio.h>

/* prove c is 0 or 1 */
int main ()
{
	int c;

	c = getchar ();
	if (c == EOF) {
		printf ("%d\n", c);
	} 

	return 0;
}
