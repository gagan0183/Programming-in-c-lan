#include <stdio.h>
void main() {
	int positiveNums = 0, negativeNums = 0, zeroNums = 0;
	for(int i = 0; i < 5; i++) {
		int num;
		scanf("%d", &num);
		if(num > 0) {
			positiveNums++;
		}
		else if(num < 0) {
			negativeNums++;
		}
		else {
			zeroNums++;
		}
	}
	printf("Postive numbers: %d \n", positiveNums);
	printf("Negative numbers: %d \n", negativeNums);
	printf("Zero numbers: %d ", zeroNums);
}