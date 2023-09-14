#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to be printed (0 <= n <= 15).
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row, column, product;

		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
					printf("%d", product);
				else
				{
					if (product / 100 == 0)
						printf(",  ");
					else if (product / 10 == 0)
						printf(", %d", product);
					else
						printf(",%d", product);
				}
			}
			printf("\n");
		}
	}
}
