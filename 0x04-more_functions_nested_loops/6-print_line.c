#include "main.h"

/**
 * print_line - function prints character "_"
 *
 * @n: number of times you want the character to be printed
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar(95);
	}
}
