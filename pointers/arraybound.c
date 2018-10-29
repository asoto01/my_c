#include <stdio.h>

int main() {
	double arr[10];
	
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 11; i++) {
		printf("%f\n", arr[i]);	
	}
}
