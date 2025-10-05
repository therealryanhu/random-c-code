#include <stdio.h>

#define LEN sizeof(message) / sizeof(message[0]) - 1

int main(void)
{
	char message[] = "Hey dude, C is rilly cool";

	for (int i = 0; i < LEN; i++) {
		char c = message[i];
		char b;

		if (c >= 'a' && c <= 'z')
			b = (c -= 32);

		switch (c) {
		case 'A':
			b = '4';
			break;
		case 'B':
			b = '8';
			break;
		case 'E':
			b = '3';
			break;
		case 'I':
			b = '1';
			break;
		case 'O':
			b = '0';
			break;
		case 'S':
			b = '5';
			break;
		default:
			b = c;
			break;
		}

		printf("%c", b);
	}
	printf("!!!!!!!!!!\n");

	return 0;
}
