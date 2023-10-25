#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hight = 5;
	
	for (int i = 1; i <= hight; i++)
	{
		for (int b = 1; b <= hight-i; b++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int q = hight - 1; q >= 1; q--)
	{
		for (int b = 1; b <= hight - q; b++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * q - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}