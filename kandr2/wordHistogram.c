#include <stdio.h>

/* shitty program that creates a histogram of characters a-z and A-Z */

int main() {
  int nCharsUpper[26];
  int nCharsLower[26];

  int i;
  for (i = 0; i < 26; i++) {
    nCharsUpper[i] = 0;
    nCharsLower[i] = 0;
  }

  int c;
  while ((c = getchar()) != EOF) {
    if (c >= 65 && c <= 90)
      nCharsUpper[c - 65]++;
    else if (c >= 97 && c <= 122)
      nCharsLower[c - 97]++;
  }

  int j;
  for (i = 0; i < 26; i++) {
    if (nCharsUpper[i] > 0) {
      printf("%c ", i + 65);
      for (j = 0; j < nCharsUpper[i]; j++) {
        printf("x ");
      }
      printf("\n");
    }
  }

  for (i = 0; i < 26; i++) {
    if (nCharsLower[i] > 0) {
      printf("%c ", i + 97);
      for (j = 0; j < nCharsLower[i]; j++) {
        printf("x ");
      }
      printf("\n");
    }
  }

  return 0;
}
