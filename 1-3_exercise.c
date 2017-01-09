#include <stdio.h>

/* 
 * Modify the temperature conversion program to print a heading above the table.
 * made by Jesus Ricardo Bernal (deusai) on Sunday, January 8, 2017.
 */

int main()
{
	float fahr, celsius;
	int   lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

	printf("Fahrenheit\tCelsius\n");
	fahr = lower;
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("  %3.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}	
}
