#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: first string argument
 *
 * @src: second string argument
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (des[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		des[i] = src[j];
		i++;
		j++;
	}
	des[i] = '\0';
	return (dest);
}
