#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: the buffer to copy to
 * @src: the string to copy
 * @n: the maximum number of bytes to copy from src
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
