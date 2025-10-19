/* classifies a poker hand */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/* main: calls read_cards, analyze_hand and print_result repeatedly */
int main(void)
{
	for (;;) {
		read_cards();
		analyze_hand();
		print_result();
	}
}

/* read_cards: reads the cards into the external variables num_in_rank and
 *             num_in_suit; checks for bad cards and duplicate cards. 
 */
