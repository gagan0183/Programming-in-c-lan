#include <stdio.h>
#include <string.h>

void main() {
		char s[]= "999";
		int i = atoi(s);
		printf("%d", sizeof(i));
		
		char p[] = "Get organised! learn c!!";
		printf("\n%s", &p[2]);
		printf("\n%s", p);
		printf("\n%s", &p);
		printf("\nn%c", p[2]);

}