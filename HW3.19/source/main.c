#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float loanPrincipal, interestRate, termOfLoanInDays;

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &loanPrincipal);

		if (loanPrincipal != -1)
		{
			printf("\nEnter interest rate: ");
			scanf("%f", &interestRate);

			printf("\nEnter term of the loan in day: ");
			scanf("%f", &termOfLoanInDays);

			printf("\nThe interest charge is $%.2f", loanPrincipal * interestRate * termOfLoanInDays / 365);

			printf("\n");
			system("pause");
			printf("\n");
		}
		else
		{
			break;
		}
	}
	return 0;
}