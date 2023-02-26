#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets 10 time sin new lines
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
