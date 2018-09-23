#include <stdio.h>
int main() {
	int p,q,r;
	p = 7, q = 3;
	r = (p > q) && (q < p);
	printf("%d", r);
}