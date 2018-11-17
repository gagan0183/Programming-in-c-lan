#include <stdio.h>

void main() {
	int a = 10, *ptr;
	ptr = &a;
	printf("The value pointed is %d ", *ptr);
	printf("Address is %d ", ptr);
}