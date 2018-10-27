/*
 * Threading basics in C
 * 1. What is thread?
 * 2. Howt o implemtn basic threading in C
 *
*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *entry_point(void *value) {
	printf("Hello from the second thread :) \n");
	
	int *num = (int *) value;

	printf("The value of value is: %d\n", *num);

	return NULL;
}

int main(int argc, char **agrv) {

	pthread_t thread;


	printf("Hello from the first thread :D\n");

	int num = 123;

	
	pthread_create(&thread, NULL, entry_point, &num );

	pthread_join(thread, NULL);

	return 0;
}
