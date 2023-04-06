#include "main.h"

/**
 * factorial - computes the factorial of a non negative integer n recursively.
 * @n: The integer to compute the factorial of.
 * Return: The factorial of n, or -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
