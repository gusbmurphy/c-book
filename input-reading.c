#include <stdio.h>

/* Counts the characters in a stream. */
int main()
{
  long nc;

  nc = 0;

  while(getchar() != EOF) ++nc;
  printf("%ld\n", nc);
}
