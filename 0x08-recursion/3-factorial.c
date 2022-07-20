#include "main.h"

/**
 * factorial -> it returns the factorial of a function
 * @n: number
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
