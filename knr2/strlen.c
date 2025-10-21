#include <stdio.h>

// int strlen2(char *s)
// {
// 	int n;
//
// 	for (n = 0; *s != '\0'; s++) {
// 		printf("%c ", *s);
// 		n++;
// 	}
// 	printf("\n");
//
// 	return n;
// }

int strlen2(char *s)
{
	char *p = s;
	while (*p != '\0') {
		printf("%c ", *p);
		p++;
	}
	return p - s;
}

int main(void)
{
	int a[6] = { 0, 1, 2, 3, 4, 5 };

	int *pa = &a[0];

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		//printf("%d ", *(pa + i));
		printf("%d ", *(a + i));
	}
	printf("\n");

	printf("%d\n", strlen2("hello world!"));

	return 0;
}
