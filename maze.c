#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_X 21
#define MAX_Y 21

int main(void)
{
	srand((unsigned)time(NULL));

	char board[MAX_X][MAX_Y];
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			board[i][j] = '.';

	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++)
			printf("%c ", board[i][j]);

		printf("\n");
	}

	return 0;
}
