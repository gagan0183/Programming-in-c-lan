#include <stdio.h>
int main() {
	int i = -3, j = 2, k = 0, m;
	m = ++i && ++k && ++k;
	printf("x = %d, y = %d, z = %d", i, j, k);
}