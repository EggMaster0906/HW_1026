#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hour, rate, salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%f", &hour);

		if (hour == -1)
		{
			break;
		}
		else
		{
			printf("\nEnter hourly rate of the worker ($00.00): $");
			scanf("%f", &rate);

			if (hour <= 40)
				salary = hour * rate;
			else
				salary = 40 * rate + (hour - 40)*rate;
			printf("\nSalary is $%.2f\n", salary);
			system("pause");
			printf("\n");
		}
	}
	return 0;
}