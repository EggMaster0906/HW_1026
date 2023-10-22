#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length = 30;

	for (int i = 1; i <= length; i++)
	{

		//Triangle (a)
		for (int a1 = 1; a1 <= i; a1++)
		{
			printf("*");
		}
		for (int a2 = 1; a2 <= length-i; a2++)
		{
			printf(" ");
		}
		printf("\t");

		//Triangle (b)
		for (int b1 = length-i+1; b1 >= 1; b1--)
		{
			printf("*");
		}
		for (int b2 = 1; b2 <= i-1; b2++)
		{
			printf(" ");
		}
		printf("\t");

		//Triangle (C)
		for (int c1 = 1; c1 <= i-1; c1++)
		{
			printf(" ");
		}
		for (int c2 = length-i+1; c2 >= 1; c2--)
		{
			printf("*");
		}
		printf("\t");

		//Triangle (D)
		for (int d1 = 1; d1 <= length-i; d1++)
		{
			printf(" ");
		}
		for (int d2 = 1; d2 <= i; d2++)
		{
			printf("*");
		}

		printf("\n");

	}

	return 0;
}