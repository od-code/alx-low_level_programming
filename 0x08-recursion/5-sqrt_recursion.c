#include "main.h"

/**
 * _sqrt_recursion - finds the natural squareroot of a number
 *
 *
 * @n: the number
 *
 * Return: the squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
