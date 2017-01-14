#include <stdio.h>

/*
 * Write a program to print the value of EOF.
 * made by Jesus Ricardo Bernal (deusai) on Thursday, January 13, 2017.
 */

main()
{
	int c, bl, nl, tbs;
	bl = nl = tbs = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ') {
			bl++;
		}
		if(c == '\n') {
			nl++;
		}
		if(c == '\t') {
			tbs++;
		}
		printf("Blanks: %d\nNew Lines: %d\nTabs: %d\n", bl, nl, tbs);
	}
}
