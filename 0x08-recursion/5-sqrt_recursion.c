#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - finds the natural squareroot of a number
 *
 * @n: the number
 *
 * actual_sqrt_recursion - finds natural square root
 *
 * Return: the squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

 /**
  * actual_sqrt_recursion - recurses to find natural square root
  *
  * @n: the number
  *
  * @i: iterator
  *
  * Return: the squareroot
  */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

