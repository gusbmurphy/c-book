#include <stdio.h>
#include <string.h>

void my_strcat(char *a, char *b);

int main()
{
  char str_a[] = "Hello, ";
  char str_b[] = "world!";

  my_strcat(str_a, str_b);

  puts(strcmp(str_a, "Hello, world!") == 0 ? "PASS" : "FAIL");
}

void my_strcat(char *a, char *b) {
  return;
}
