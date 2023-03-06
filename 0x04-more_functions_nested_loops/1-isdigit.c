#include "main.h"

/**
 * _isdigit - Checks if input is a digit
 *
 * @c: input to be checked
 *
 * Return: 1 if input is a digit and o if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
