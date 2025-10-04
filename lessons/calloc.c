#include <stdio.h>
#include <stdlib.h>

/*
  calloc() = contiguous allocation
  allocates memory dynamically and sets all allocated bytes to 0
  malloc is faster, but calloc is safer
  malloc (bytes)
  calloc (#, size)
*/
int
main ()
{
  // game, but we dont' know how many players

  int number = 0;
  printf ("Enter the number of players: ");
  scanf ("%d", &number);

  int *scores = calloc (number, sizeof (int));

  if (scores == NULL) // to avoid segfault
    {
      printf ("Memory allocation failed");
      return 1; // exit program with error
    }

  for (int i = 0; i < number; i++)
    {
      printf ("Enter score #%d: ", i + 1);
      scanf ("%d", &scores[i]);
    }

  for (int i = 0; i < number; i++)
    {
      printf ("%d ", scores[i]);
    }

  // MUST DO THIS AT END
  free (scores);
  scores = NULL;
}
