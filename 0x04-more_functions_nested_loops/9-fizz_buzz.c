#include <stdio.h>

/**
 * main - prints the number from 1 to 100
 * folloed by a new line
 * but for multiples of 3, prints Fizz instead of the number
 * and for the multiples of 5 prints Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("FizBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
