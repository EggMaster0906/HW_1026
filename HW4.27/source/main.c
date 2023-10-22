#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	printf("All Pythagorean triangles with sides less than 500: \n\n");
	printf("\na\t b\t c\n\n");

	int a, b;
	double c, temp;
	
	for (a = 1.0; a <= 500.0; a = a + 1.0)
	{
		for (b = a; b <= 500; b = b + 1.0)
		{
			c = sqrt(a * a + b * b);
			temp = modf(c, &temp);
			if (temp == 0.0 && c<=500.0)
			{
				printf("%d\t %d \t %.0f\n", a, b, c);
			}
			
		}
	}
	return 0;
}