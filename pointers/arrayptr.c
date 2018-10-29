#include <stdio.h>

int main() {
	int size = 5;
	int my_array[] = {1, 2, 3, 4, 5};
	int *v, *last;
	last = &my_array[size-1];
	v = my_array;
	while (v <= last){
         printf("Value at %p is %d\n", v, *v);
         v++;     // this line!
	}
return 0;
}
