#include <stdio.h>

/*
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 * made by Jesus Ricardo Bernal (deusai) on Monday, January 9, 2017.
 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step  = 20;

	printf("Celsius\t\tFahrenheit\n");
	fahr = lower;
	while(celsius <= upper) {
		fahr = (celsius) * (9.0 / 5.0) + 32 ;
		printf("  %3.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
