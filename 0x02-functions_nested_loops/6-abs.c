#include "main.h"

/**
 * _abs - gets the absolute value of a number
 *
 * @c: the argument
 *
 * Return: Always 0
 */

int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c > 0)
		c = c;
	return (c);
}
