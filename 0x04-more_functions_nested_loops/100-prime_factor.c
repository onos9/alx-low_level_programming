#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long i;

	/* divide by 2 repeatedly */
	while (n % 2 == 0)
	{
		n /= 2;
	}

	/* check odd numbers */
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	/* n is now the largest prime factor */
	return n;
}

int main(void)
{
	long n = 612852475143;
	long largest = largest_prime_factor(n);

	printf("%ld\n", largest);

	return 0;
}
