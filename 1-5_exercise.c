#include <stdio.h>

/*
 * Modify the temperature conversion program to print the table in 
 * reverse order that is from 300 to 0.
 * made by Jesus Ricardo Bernal (deusai) on Tuesday, January 10, 2017.
 */

int main()
{
	int fahr;
	
	printf("Fahrenheit\tCelsius\n");
	for(fahr = 300; fahr >= 0; fahr = fahr - 20){
		printf("  %3d\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}
