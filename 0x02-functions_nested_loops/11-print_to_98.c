#include "main.h"
#include <stdio.h>

/**
 * prints_to_98 - this funtion prints all natural numbers from n to 98
 * followed by a new
 * @n: the number to start printing from
 *
 * Return: Anything
 *
 */
void prints_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d ", n);
	}
	}
	}
}
