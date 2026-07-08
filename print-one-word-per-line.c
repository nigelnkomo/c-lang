#include <stdio.h>

int main ()
{
	int c, pr;

	pr = 0;
	while ((c = getchar ()) != EOF) {
		
		if (pr == 0) {
			putchar (c);
			pr = c;
			continue;
		}
		else if (c != ' ' && c != '\t') {
			putchar (c);
			pr = c;
			continue;
		}
		else if (c == ' ' || c == '\t') {
			if (pr == ' ' || pr == '\t') { 
				pr = c;
				continue;
			}
			if (pr != ' ' && pr != '\t') {
				printf ("\n");
				pr = c;
				continue;
			}
		}
	}
}
