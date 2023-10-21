#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int account;
	float beginBalance, totalCharges, totalCredits, creditLimits;

	while (1)
	{
		printf("Enter account number (1 to 100): ");
		scanf("%d", &account);

		printf("\nEnter beginning balance: ");
		scanf("%f", &beginBalance);

		printf("\nEnter total charges: ");
		scanf("%f", &totalCharges);

		printf("\nEnter total credits: ");
		scanf("%f", &totalCredits);

		printf("\nEnter credit limits: ");
		scanf("%f", &creditLimits);

		printf("\n");

		if ((beginBalance + totalCharges - totalCredits)>creditLimits)
		{
			printf("\nAccount:\t%d", account);
			printf("\nCredit limit:\t%.2f", creditLimits);
			printf("\nBalance:\t%.2f", beginBalance + totalCharges - totalCredits);
			printf("\nCredit Limits Exceeded.\n");
			system("pause");
			printf("\n");
		}
		else
		{
			system("pause");
			printf("\n");
			printf("\n");
			continue;
		}
	}
	return 0;
}