#include <stdio.h>
#include <stdlib.h>

/* example of malloc function
 * - dynamically allocates memory
 * - can be used to create arrays of size unknown at compile time
 * - make sure to dereference pointer at end
 */

int
main ()
{
  int number = 0;
  printf ("Enter the number of values: ");
  scanf ("%d", &number);

  char *grades = malloc (number * sizeof (char));

  if (grades == NULL)
    {
      printf ("Memory allocation failed\n");
      return 1;
    }

  for (int i = 0; i < number; i++)
    {
      printf ("Enter grade #%d ", i + 1);
      scanf (" %c", &grades[i]);
    }

  for (int i = 0; i < number; i++)
    {
      printf ("%c ", grades[i]);
    }

  free (grades);
  grades = NULL;
}
