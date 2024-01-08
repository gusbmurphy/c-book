#include <stdio.h>
#include <string.h>

void my_strcat(char *a, char *b);

int main()
{
  char str_a[] = "Hello, ";
  char str_b[] = "world!";

  my_strcat(str_a, str_b);

  puts(str_a);
  putchar('\n');

  puts(str_b);
  putchar('\n');

  puts(strcmp(str_a, "Hello, world!") == 0 ? "PASS" : "FAIL");
}

void my_strcat(char *a, char *b) {
  int i = 0;

  // Find the end of "a"...
  while (a[i] != '\0') {
    i++;
  }

  // ...then start adding "b" from there.
  for (int j = 0; b[j] != '\0'; i++, j++) {
    a[i] = b[j];
  }

  a[i] = '\0';
}
