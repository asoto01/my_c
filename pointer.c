#include <stdio.h>
#include <stdlib.h>

int *getx() {
	int *x = (int *) malloc(sizeof(int));
	*x = 42;
	return x;
}

int main() {
	int *p = getx();
	printf("%d\n", *p);
	return 0;
}
