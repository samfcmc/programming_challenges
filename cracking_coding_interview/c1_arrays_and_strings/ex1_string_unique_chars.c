/*
 * Exercise 1:
 * Determine if a string has all unique characters
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * The latin alphabet has 26 letters but
 * we need to multiply by 2 to have in
 * account that each letter can be
 * upper or lower case
 */
#define LETTERS 'z' - 'A'

#define FIRST_ASCII_CODE 'A'

int has_unique_chars(char *string) {

  int count[LETTERS];

  for (size_t i = 0; i < LETTERS; i++) {
    count[i] = 0;
  }

  char *c = string;

  while(*c) {
    int index = *c - FIRST_ASCII_CODE;
    int value = count[index];
    if(value) {
      return 0;
    }
    else {
      count[index]++;
      c++;
    }
  }

  return !0;

}

int main() {
  char *line = NULL;
  size_t len = 0;
  size_t read;

  while ((read = getline(&line, &len, stdin)) != -1) {
    if(read > 0) {
      // Remove last '\n'
      line[read - 1] = '\0';
      printf("%d\n", has_unique_chars(line));
    }
  }

  return 0;
}
