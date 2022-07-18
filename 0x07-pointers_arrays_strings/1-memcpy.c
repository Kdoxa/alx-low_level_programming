#include "main.h"

/**
 * _memcpy -> it copies memory area
 * @dest: destination memory
 * @src: memory source
 * @n: number of byte to be copies
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = o; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
