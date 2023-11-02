#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float form[6][16];
	float temp;

	for (int i = 1; i <= 5; i++)
		form[i][0] = 5000;

	printf("An investment calculation of $%.0f: \n", form[1][0]);

	printf("\nInterestRate\t");
	printf("%-15s\t", "10.0%");
	printf("%-15s\t", "10.5%");
	printf("%-15s\t", "11.0%");
	printf("%-15s\t", "11.5%");
	printf("%-15s\n\n", "12.0%");

	for (int x = 1; x <= 15; x++)
	{
		if (x == 1)
		{
			printf("%d",x);
			printf("%-8s\t", " year");
		}	
		else
		{
			printf("%d", x);
			printf("%-8s\t", " years");
		}

		int i;
		float j;
		for (i = 1, j = 1.1; i <= 5; i++, j = j + 0.05)
		{
			temp = form[i][x - 1] * j;
			form[i][x] = temp;
			printf("%.2f \t", form[i][x]);
		}
		printf("\n");
	}
	return 0;
}