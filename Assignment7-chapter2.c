#include <stdio.h>
int main() {
	int a, b, c, d;
	a = 4;
	b = ++a;
	c = a--;
	d = --a;
	a += 1 -2 * 2;
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
}