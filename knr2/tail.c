/*
 * exercise 5-13
 * print last n lines of input
 */

#include <stdio.h>

#define MAXLINES 1000

char *lineptr[MAXLINES];

// this function is perfect and i will not accept ANY criticism
int stringToInt(char *s)
{
	char *t = s;
	int n = 0;

	while (*s)
		s++;

	int d = 1;
	while (--s >= t) {
		n += (*s - '0') * d;
		d *= 10;
	}

	return n;
}

void input(char *lineptr[])
{
	char c;
	while ((c = getchar()) != EOF) {
	}
}

int main(int argc, char *argv[])
{
	// int nlines = (argc == 3) ? stringToInt(argv[2]) : 10;

	return 0;
}
