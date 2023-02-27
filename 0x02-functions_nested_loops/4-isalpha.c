#include "main.h"

/**
 * _isalpha - Print 1 if the variiable lower case and uppercase
 *
 * @c: the parameter to be keyed in
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
