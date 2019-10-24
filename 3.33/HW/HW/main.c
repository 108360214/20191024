#include<stdio.h>
#include<stdlib.h>

int main() {

	int high = 0, wide = 0, space_wide = 0, real_high = 0;

	printf("Enter the high and wide : ");
	scanf_s("%d%d", &high, &wide);

	space_wide = wide - 2;
	real_high = high - 2;

	//¥¿¤è§Î³»³¡
	for (int i = 0; i < wide; i++) {
		printf("*");

	}printf("\n");
	//¥¿¤è§Î¤º³¡
	for (int k = 0; k < real_high; k++) {
		printf("*");
		for (int j = 0; j < space_wide; j++) {
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	//¥¿¤è§Î©³³¡
	for (int i = 0; i < wide; i++) {
		printf("*");

	}printf("\n");



	system("PAUSE");
	return 0;
}