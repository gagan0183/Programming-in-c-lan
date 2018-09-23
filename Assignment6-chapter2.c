#include <stdio.h>
int main() {
	float a =1, b;
	int m = 3, n =5;
	b = (a?m:n) / 2.0;
	printf("%f", b);
}