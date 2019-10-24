#include<stdio.h>
#include<stdlib.h>

int main() {
	int p = 0, f = 0, g = 0, d = 0;

	for (int i = 0; i <= 4; i++) {
		for (int j = 3; j >= i; j--) {
			printf(" ");
		}
		for (int k = 0; k <= p; k++) {
			printf("*");
		}
		p += 2;
		printf("\n");
	}

	for (int i = 4; i > 0; i--) {
		for (int j = 0; j <= g; j++) {
			printf(" ");
		}
		for (int k = 7; k > d; k--) {
			printf("*");
		}
		d += 2;
		g++;
		printf("\n");
	}

	system("pause");
	return 0;
}