#include <stdio.h>
/**
 * main - print 1 to 100 and fizzbuss
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("FizBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("buzz");
	printf("\n");

	return (0);
}
