#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns i if the integer is a prime number
 *
 * @n: input
 *
 * Return: 1 if prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime number
 *
 * @n: number to evaluate
 *
 * @i: iterator
 *
 * Return: 1 if n prime number otherwise 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
