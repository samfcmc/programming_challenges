/*
 * Reverse a string
 * abc = cba
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *string, char *reversed, int len) {
  reversed[len] = '\0';

  for (int i = len - 1; i > -1; i--) {
    char c = string[i];
    int reversed_index = (len - 1) - i;
    reversed[reversed_index] = c;
  }
}

int main(int argc, char const *argv[]) {
  char *line = NULL;
  size_t len = 0;
  size_t read;
  char *reversed;

  while ((read = getline(&line, &len, stdin)) != -1) {
    if(read > 0) {
      // Remove last '\n'
      line[read - 1] = '\0';
      reversed = (char*) malloc(sizeof(char)*(read));
      reverse(line, reversed, read - 1);
      printf("%s\n", reversed);
      free(reversed);
    }
  }
  return 0;
}
