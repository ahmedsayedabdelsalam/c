#include <stdio.h>
/*
 * draw the following shape
 *        +
 *       +
 *      +
 * +   +
 *  + +
 *   +
 */
int main(void)
{
	int rows = 6;
	for (int i = 0; i < rows; i++)
	{
		int columns = ((2 * rows) - i - 1);
		for (int j = 3; j < columns; j++)
		{
			if (j == (columns - 1) || j == i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}

	return 0;
}
