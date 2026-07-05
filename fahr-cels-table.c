#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main ()
{
	float lower, upper, step;
	float fahr, cels;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;

	while (fahr <= upper) {
		cels = (5.0/9.0) * (fahr-32.0);
		printf ("%.0f\t%.1f\n", fahr, cels);
		fahr = fahr + step;
	}
}
