#include <stdio.h>
#include <stdlib.h>
#include "..\include\User_defined.h"

int print_pyramid(int hight,int count)
{
	for (int b = 1; b <= hight - count; b++)
	{
		printf(" ");
	}
	for (int j = 1; j <= 2 * count - 1; j++)
	{
		printf("*");
	}
	printf("\n");

	return 0;
}
