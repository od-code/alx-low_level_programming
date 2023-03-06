#include "main.h"

/**
 * more_numbers - prints numbers from 0 through 14 10 times
 */

void more_numbers(void)
{
	int x, j;

	for (x = 1; x <= 10; x++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

