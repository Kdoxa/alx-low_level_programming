#include "main.h"

/**
 * _strncpy -> it copies a string
 * @dest: destinaton
 * @scr: source
 * @n: number of bytes from source
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
