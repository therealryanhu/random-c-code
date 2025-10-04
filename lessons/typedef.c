#include <stdio.h>

typedef int Number;
typedef char String[50];
// or typedef char* String;
typedef char Initials[3]; // initials are 2, but 3rd for null terminator

int
main ()
{
  String name = "yeah";
  printf ("%s", name);

  return 0;
}
