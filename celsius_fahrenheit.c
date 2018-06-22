#include <stdio.h>

// convert celsius to fahrenheit

int main() {
	float fahr, cels; // declare float type for fahr and cels
	int lower, upper, step; // declare lower, upper, and step

	lower = 0; // lower limit of temperature table
	upper = 100; // upper limit of temperature table
	step = 5; // step size

	cels = lower;
	for (int i = 0; i < 23; i++) {
		printf("-");
	}
	printf("\n| Celsius | Farenheit |\n");
	for (int i = 0; i < 23; i++) {
		printf("-");
	}
	printf("\n");
	while (cels <= upper) {
		fahr = (9.0 /5.0) * cels + 32.0;
		printf("|     %3.0f |    %6.1f |\n", cels, fahr);
		cels = cels + step;
	}
	for (int i = 0; i < 23; i++) {
		printf("-");
	}
	printf("\n");
}
