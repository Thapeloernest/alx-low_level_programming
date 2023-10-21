#include "main.h"

/**
 * print_number - prints the product of two numbers in a specific format
 * @i: first number
 * @j: second number
 *
 * This function calculates the product of two numbers and prints the result.
 * The printed format depends on the value of the product and the 2nd number.
 * If the second number is zero, the function simply prints the product.
 * If the product is less than 10 and the second number is not zero,
 * the function prints a comma, three spaces, and the product.
 * If the product is between 10 and 99,
 * the function prints a comma, two spaces, and the product as 2 digits.
 * If the product is greater than 100,
 * the function prints a comma, a space, and the product as 3 digits.
 */
void print_number(int i, int j)
{
	int k;
	k = j * i;

	if (j == 0)
	{
		_putchar(k + '0');
	}

	else if (k < 10 && j != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}

	else if (k >= 10 && k < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}

	else if (k >= 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((k / 100) + '0');
		_putchar(((k / 10) % 10) + '0');
		_putchar((k % 10) + '0');
	}
}

#include "main.h"

/**
 * print_times_table -prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int i, j;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= 1; i++)
{
for (j = 0; j <= n; j++)
{
print_number(i, j);
}
_putchar('\n');
}
}
}
