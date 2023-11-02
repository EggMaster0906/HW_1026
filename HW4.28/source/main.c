#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int paycode;
	float salary[4], hour, hourSalary, salesAmount, items, itemPay;

	printf("-------------------------\n");
	printf("¡ü Weekly Pay Calculator ¡ü\n");
	printf("-------------------------\n\n");

	while (1)
	{
		printf("\nEnter the paycode of employee: ");
		scanf("%d", &paycode);

		switch (paycode)
		{
		case 1:
			printf("\nEnter weekly work salary of manager: ");
			scanf("%f", &salary[paycode]);
			break;

		case 2:
			printf("Enter working hours per week: ");
			scanf("%f", &hour);
			printf("Enter hourly salary: ");
			scanf("%f", &hourSalary);
			if (hour <= 40.0)
				salary[paycode] = hourSalary * hour;
			else
				salary[paycode] = (hour - 40.0)*(hourSalary*1.5) + 40 * hourSalary;
			break;
		
		case 3:
			printf("Enter weekly sales amount: ");
			scanf("%f", &salesAmount);
			salary[paycode] = 250 + 0.057*salesAmount;
			break;

		case 4:
			printf("Number of items produced per week: ");
			scanf("%f", &items);
			printf("Pay per item: ");
			scanf("%f", &itemPay);
			salary[paycode] = items * itemPay;
			break;

		default:
			printf("Invalid paycode, please enter the other number.\n\n");
			continue;
			break;
		}

		printf("\nSalary of a week is: US$%.0f\n\n", salary[paycode]);
		system("pause");
	}

	return 0;
}