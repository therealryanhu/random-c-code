/* exercise 6-4 */

#include <stdio.h>

#define MAXLEN 100
#define MAXWORD 100

int main(void)
{
	char word[MAXWORD];
	int c;

	for (int i = 0; (c = getchar()) != EOF; i++) {
		word[i] = c;
	}

	for (int i = 0; word[i] != '\0'; i++) {
		printf("%c", word[i]);
	}

	return 0;
}
