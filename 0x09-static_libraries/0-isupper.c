#include "main.h"

/**
 * _isupper - checks uppercase letters
 *
 * @c: char to be checked
 *
 * Return: 1 if successful otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
