#include "main.h"

/**
 * _memcpy -> it copies memory area
 * @dest: destination memory
 * @src: memory source
 * @n: number of bytes to be copies
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = o; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
