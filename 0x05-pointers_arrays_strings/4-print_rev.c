#include "main.h"

/**
 * print_rev -  print string in reverse
 *
 * @str: string to be reversed
 */

void print_rev(char *str)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0;  a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
