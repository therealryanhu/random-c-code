#include <stdio.h>

/* 
 * find and print gcd of two numbers
 */

int gcd(int a, int b);

int main()
{
	printf("%d\n", gcd(17, 5));

	return 0;
}

int gcd(int a, int b)
{
	int divisor = 2;
	int greatest = 1;

	while (divisor <= a && divisor <= b) {
		if (a % divisor == 0 && b % divisor == 0) {
			a /= divisor;
			b /= divisor;
			greatest *= divisor;
		} else
			divisor += 1;
	}

	return greatest;
}
