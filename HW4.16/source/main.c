#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//三角形的長寬
	int length = 10;

	//(1)
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	
	//(2)
	for (int i = length; i >=1 ; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	//(3)
	for (int i = length; i >= 1; i--)
	{
		for (int a = 1; a <= length-i; a++)
		{
			printf(" ");
		}
		for (int a = 1; a <= i; a++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	//(4)
	for (int i = 1; i <= length; i++)
	{
		for (int a = 1; a <= length - i; a++)
		{
			printf(" ");
		}
		for (int a = 1; a <= i; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}