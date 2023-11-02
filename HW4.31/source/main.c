#include <stdio.h>
#include <stdlib.h>
#include "..\include\User_defined.h"

int main(void)
{
	int hight = 7;
	
	for (int i = 1; i <= hight; i++)
	{
		print_pyramid(hight, i);
	}
	for (int q = hight - 1; q >= 1; q--)
	{
		print_pyramid(hight, q);
	}

	return 0;
}