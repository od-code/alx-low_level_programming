#include "main.h"

/**
 * times_table -  funtion prints nine times table
 *
 */

void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 0; a++)
	{
		for (b = 0; y <= 0; b++)
		{
			c = a * b;
			if (c > 0)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		-putchar('\n');
	}
}
