#include "main.h"

/**
 * _puts_recursion -> it prints a string
 * @s: string paramenter
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_putchar('\n');
}
