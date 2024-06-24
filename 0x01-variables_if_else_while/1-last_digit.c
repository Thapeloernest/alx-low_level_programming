#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (success)
*/
int main(void)
{
		int n;

		int m;

		srand(time(0));
		n = rand() % 2001 - 1000;
		m = abs(n) % 10;

		printf("Generated number: %d\n", n);
		printf("Last digit of %d is %d ", n, m);

		if (m > 5)
			printf("and is greater than 5\n");
		else if (m == 0)
			printf("and is 0 and is 0\n");
		else
			printf("and is less than 6 and not 0\n");
		return (0);
}
