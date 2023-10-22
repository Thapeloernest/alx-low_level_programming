#include "main.h"

/**
 * print_numbers - function prints for numbers from 0 to 9
 * return: Always 0.
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
