#include <stdio.h>

int main ()
{
	int c, p;

	p = 0;
	while ((c = getchar ()) != EOF) {
		if (c == ' ')
			if (p == ' ')
				continue;
		putchar (c);
		p = c;			
	}
}

