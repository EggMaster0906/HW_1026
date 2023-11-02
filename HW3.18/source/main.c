#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales;
	while (1)
	{
		printf("Enter sales in dolars (-1 to end): $");
		scanf("%f", &sales);

		if (sales == -1)
		{
			break;
		}
		else
		{
			printf("Salary is: US$%.2f", sales*0.09 + 200);
			printf("\n\n");
		}
	}
	
	return 0;
}