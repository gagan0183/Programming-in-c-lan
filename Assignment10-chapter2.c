#include <stdio.h>
int main() {
	int i = -3, j = 2, k = 0, m;
	m = ++j && ++i || ++k;
	printf("\n %d, %d, %d, %d", i, j, k, m);
}