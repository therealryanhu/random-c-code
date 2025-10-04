#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/* digital clock from bro code */

int
main ()
{
  time_t rawtime = 0; // unix epoch 1970-01-01
  struct tm *pTime = NULL;
  bool isRunning = true;

  printf ("DIGITAL CLOCK\n");

  while (isRunning)
    {
      time (&rawtime);

      pTime = localtime (&rawtime);

      printf ("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min,
              pTime->tm_sec); // (*pTime).tm_hour, dereference first
      fflush (stdout);

      sleep (1);
    }

  return 0;
}
