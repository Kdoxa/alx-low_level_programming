#include "main.h"

/**
 * print_alphabet -> prints a-z
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
