#include <stdio.h>
#include <threads.h>

enum Day
{
  SUNDAY,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

/*
typedef enum{
...
...
...
}day
*/

typedef enum
{
  SUCCESS,
  FAILIURE,
  PENDING
} Status;

void connectStatus (Status status);

int
main ()
{
  enum Day today = TUESDAY;

  printf ("%d", today); // tuesday = 2;

  if (today == SUNDAY || today == SATURDAY)
    {
      printf ("weekend");
    }
  else
    {
      printf ("weekday");
    }

  /* */

  Status status = SUCCESS;

  connectStatus (status);

  return 0;
}

void
connectStatus (Status status)
{
  switch (status)
    {
    case SUCCESS:
      printf ("connection successfull\n");
      break;
    case FAILIURE:
      printf ("Could not connect\n");
      break;
    case PENDING:
      printf ("Connecting...\n");
      break;
    }
}
