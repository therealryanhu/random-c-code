/* exercise 5-3 */

#include <stdio.h>

// copy string t to the end of s
void neostrcat(char *s, char *t)
{
	/*
         * find end of array s
         * copy each value of array t over to s
         */

	// *s, *t point to start of array
	while (*s)
		s++; // find end of array, '\0' returns false

	while ((*s++ = *t++))
		;
}

int main(void)
{
	char hello[64] = "Hello, ";
	char world[] = "World!";
	neostrcat(hello, world);
	printf("%s\n", hello);

	return 0;
}
