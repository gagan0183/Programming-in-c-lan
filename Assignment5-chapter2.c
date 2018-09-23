#include <stdio.h>
int main() {
	int a,b,c,d,e;
	a = 5;
	b = 6;
	c = 12;
	d = 11;
	e = (a!=b)?(e <= (!d)?a:b):c;
	printf("e = %d", e);
}