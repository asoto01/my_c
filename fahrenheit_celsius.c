#include <stdio.h>

#define LOWER 0 // lower limit of table
#define UPPER 300 // upper limit
#define STEP 20 // step size

/* print Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

int main() {
	float fahr, celsius;

	// dashed line for top of header
	for (int i = 0; i < 24; i++) {
		printf("-");
	}

	// header
	printf("\n| Fahrenheit | Celsius |\n");

	// dashed line for bottom of header
	for (int i = 0; i < 24; i++) {
		printf("-");
	}

	// print fahrenheit and celsius to fit table structre
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("\n|        %3.0f |  %6.1f |", fahr, (5.0/9.0) * (fahr - 32.0));

	printf("\n"); // skip a line

	// dashed line for bottom of table
	for (int i = 0; i < 24; i++) {
		printf("-");
	}
	printf("\n"); // skip a line
}
