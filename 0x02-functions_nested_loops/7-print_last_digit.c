#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @i: the argument to be checked
 *
 * Return: Last digit of a number
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
