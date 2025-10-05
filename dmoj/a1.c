#include <stdio.h>

/*
 * https://dmoj.ca/problem/a1
 */

int
main()
{
	int	n;
	int	m;
	char	word[80];

	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		scanf("%d %s", &m, &word);	
		printf("%s\n", word);
	}
}
