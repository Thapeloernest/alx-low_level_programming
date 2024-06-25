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
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n <= 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
