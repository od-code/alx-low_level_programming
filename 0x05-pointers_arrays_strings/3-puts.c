#include "main.h"

/**
 * _puts -  function prints a string to the stdout
 *
 * @str: the string
 *
 * Return: the length of the string
 *
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
