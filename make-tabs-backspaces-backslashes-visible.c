#include <stdio.h>

/* replace backspaces with \b, tabs with \t and \ with \\ */
int main ()
{
	int c;

	while ((c = getchar ()) != EOF) {
		if (c == '\b') {
			printf ("\\b");
		}

		else if (c == '\t') {
			printf ("\\t");
		}

		else if (c == '\\') {
			printf ("\\\\");
		}

		else {
			putchar (c);
		}
	}

	return 0;
}
