#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 *
 * @a: function parameter
 */

void print_to_98(int a)
{
	int b;

	if (a >= 0 && a <= 98)
	{
		for (b = a; b <= 98; b++)
		{
			printf("%d, ", b);
			if (b != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (a < 0)
	{
		for (b = a; b <= 98; b++)
		{
			printf("%d, ", b);
			if (b != 98)
                                printf(", ");
		}
		printf("\n");
	}
	else if (a > 98)
	{
		for (b = a; b >= 98; b--)
		{
			printf("%d, ", b);
			if (b != 98)
                                printf(", ");
		}
		printf("\n");
	}
	else if (a == 98)
		printf("%d", a);
}
