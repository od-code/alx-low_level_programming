#include "main.h"

int actual_sqrt_recursion(int n, int i);

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
	return (actual_sqrt_recursion(n, 0));
}
