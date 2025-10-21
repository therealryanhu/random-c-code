/* exercise 5-4 */

#include <stdio.h>

int neostrend(char *s, char *t) {
  char *s_end = s; // copy s
  char *t_end = t; // copy t

  while (*s_end)
    s_end++; // points to null terminator of s
  while (*t_end)
    t_end++; // points to null terminator of t

  s_end -= (t_end - t); // t_end - t == length of t, subtract '\0' by len of t
                        // move s_end backwards by the length of t

  while (*s_end && *t)    // keep looping as long as both are not '\0'
    if (*s_end++ != *t++) // compare chars
      return 1;

  return 0;
}

int main(void) {
  char s[] = "animhasdf";
  char t[] = "asdf";

  int ans = neostrend(s, t);

  printf("%d\n", ans);

  return 0;
}
