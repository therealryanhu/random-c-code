/* chapter 8 project 9 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_X 10
#define MAX_Y 10

int main(void)
{
	srand((unsigned)time(NULL));

	char c[MAX_X][MAX_Y];
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			c[i][j] = '.';
	c[0][0] = 'A';

	int placed[26][2] = { 0, 0 };
	int n, next_x = 0, next_y = 0, x = 0, y = 0, p = 1;
	bool checked = false;

	int i = 1, tries = 0;
	while (i < 26) {
		checked = false;
		n = rand() % 4;

		if (n == 0 && y < MAX_Y - 1) { // move up
			next_y = y + 1;
			next_x = x;
		} else if (n == 1 && y > 0) { // move down
			next_y = y - 1;
			next_x = x;
		} else if (n == 2 && x > 0) { // move left
			next_x = x - 1;
			next_y = y;
		} else if (n == 3 && x < MAX_X - 1) { // move right
			next_x = x + 1;
			next_y = y;
		}

		for (int j = 0; j < p; j++) {
			if (placed[j][0] == next_x && placed[j][1] == next_y) {
				checked = true;
				break;
			}
		}

		if (checked == false) {
			x = next_x;
			y = next_y;

			placed[p][0] = x;
			placed[p][1] = y;

			p++;

			c[x][y] = 'A' + i;

			i++;
		} else {
			tries++;
		}

		if (tries >= 50) {
			break;
		}
	}

	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++)
			printf("%c ", c[i][j]);
		printf("\n");
	}
}
