#include <stdio.h>

/*
 * https://dmoj.ca/problem/16bitswonly
 */

int main()
{
	int n;
	long long a;
	long long b;
	long long p;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld %lld %lld", &a, &b, &p);

		if (a * b == p)
			printf("POSSIBLE DOUBLE SIGMA\n");
		else
			printf("16 BIT S/W ONLY\n");
	}
}
