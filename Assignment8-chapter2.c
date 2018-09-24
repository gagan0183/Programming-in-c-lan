#include <stdio.h>
int main() {
	int x, y, z;
	x = (y - 5, z = y + 2, y + z);
	x = y = 5;
	z = x = 9;
	printf("x = %d, y = %d, z = %d", x, y, z);
}