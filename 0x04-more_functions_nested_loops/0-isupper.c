#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * @c: The number to be checked
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
