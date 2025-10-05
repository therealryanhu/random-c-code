#include <stdio.h>

#define MAX 255

/* 
 * Ava McKinney COMP1405 assignment 2:
 * take input 1 char at a time
 * compress it with the number of times the char appears in a row
 * assume input will have at least 1 char
 * don't put number if there is only 2 char
 */

int main()
{
	int c;
	char line[MAX];

	int l = 0;
	while ((c = getchar()) != 'q') {
		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
		    (c >= 'a' && c <= 'z')) {
			line[l] = c;
			l++;
		}
	}

	if (l == 1)
		printf("%c\n", line[0]);

	char output[l];
	char compare = line[MAX];
	int num = 0;
	int o;
	int i;
	for (i = 0, o = 0; i < (l - 1); i++) {
		if (compare == line[i + 1])
			num++;
		else {
			num++;
			if (num > 2)
				output[o] = num + '0';

			output[o + 1] = compare;

			compare = line[i + 1];

			o += 2;
			num = 0;
		}
	}
	if (num > 2)
		output[o] = (num + 1) + '0';
	output[o + 1] = compare;
	compare = line[i + 1];
	o += 2;

	for (int i = 0; i < o; i++) {
		printf("%c", output[i]);
	}
	printf("\n");

	return 0;
}
