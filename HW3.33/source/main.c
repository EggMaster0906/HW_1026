#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, breadth;

	while (1)
	{
		printf("Enter length (-1 to end): ");
		scanf("%d", &length);

		if (length == -1)
		{
			break;
		}
		else
		{
			printf("Enter breadth: ");
			scanf("%d", &breadth);

			for (int i = 1; i <= length; i++)
			{
				for (int j = 1; j <= breadth; j++)
				{
					if (i == 1 || i == length)
						printf("+");
					else
					{
						if (j == 1 || j == breadth)
							printf("+");
						else
							printf(" ");
					}
				}
				printf("\n");
			}
		}
		printf("\n");
		system("pause");
		printf("\n");
	}
	return 0;
}