#include "main.h"

/**
 * _strlen_recursion - returns the length of a string recursively.
 * @s: pointer to the string to measure.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
