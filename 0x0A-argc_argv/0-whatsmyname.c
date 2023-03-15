#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argv: array of arguments
 *
 * @argc: number of arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
