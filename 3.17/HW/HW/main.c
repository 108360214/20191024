#include<stdio.h>
#include<stdlib.h>

int main() {

	int accont_number = 0, beginning_balance = 0, total_charges = 0, total_credits = 0, credits_limit = 0;
	float new_balance = 0;

	while (1) {
		printf("Enter account number (-1 to end) : ");
		scanf_s("%d", &accont_number);
		if (accont_number == -1) break;
		printf("Enter beginning balance : ");
		scanf_s("%d", &beginning_balance);
		printf("Enter total charges : ");
		scanf_s("%d", &total_charges);
		printf("Enter total credits : ");
		scanf_s("%d", &total_credits);
		printf("Enter credits limit : ");
		scanf_s("%d", &credits_limit);

		new_balance = beginning_balance + total_charges - total_credits;

		printf("Account : %d\n", accont_number);
		printf("Credits limit : %d\n", credits_limit);
		printf("Balance : %f\n", new_balance);
		if (new_balance > credits_limit) {
			printf("Credits limit : Exceeded\n");
		}

	}




	system("PAUSE");
	return 0;
}