#include <stdio.h>
#include <stdbool.h>

/* Counts lines, words, and charaters in input. */
int main()
{
  int character = 0, line_count = 0, word_count = 0, character_count = 0;
  bool inside_word = false;

  while ((character = getchar()) != EOF) {
    ++character_count;

    if (character == '\n')
      ++line_count;

    if (character == ' ' || character == '\n' || character == '\t')
      inside_word = false;
    else if (inside_word == false) {
      inside_word = true;
      ++word_count;
    }
  }

  printf("%d lines, %d words, %d characters", line_count, word_count, character_count);
}
