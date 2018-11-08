#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_anagram(char *s1, char *s2, int length1, int length2); 

int main() {
	char *input1 = (char *) malloc(sizeof(char));
	char *input2 = (char *) malloc(sizeof(char));
	
	printf("Input string: ");
	scanf("%s", input1);
	printf("Input string: ");
	scanf("%s", input2);

	int length1 = strlen(input1);
	int length2 = strlen(input2);

	bool boolResult = is_anagram(input1,input2, length1, length2);

	printf(boolResult ? "Is an anagram.\n" : "Is not an anagram.\n");


	return 0;
}

bool is_anagram(char *s1, char *s2, int length1, int length2) {	
	if (length1 != length2) 
		return false;
	char temp[length1];
	int count = 0;
	for (int i = 0; i < length1; i++) {
		temp[i] = s1[i];	
	}
	
	for (int i = 0; i < length1; i++) {
		for (int j = 0; j < length1; j++) {
			if (s2[j] == temp[i]) 
				count++;
		}
	}
	
	if (count == length1)
		return true;
	else 
		return false;
}
