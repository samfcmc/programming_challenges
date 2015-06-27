/*
 * Remove duplicate characters in a string
 */

#include <stdlib.h>
#include <stdio.h>

void remove_duplicates(char *string) {
  char *c = string;
  while(*c) {
    // For each character
    if(*c != '\n') {
      char *aux = c;
      while(*aux) {
        // Replace all equal characters by '\n'
        if(*aux == *c) {
          *aux = '\n';
        }
        aux++;
      }
    }
    c++;
  }

  // Remove '\n'
  c = string;
  while(*c) {
    if(*c == '\n') {
      
    }
  }
}

int main(int argc, char const *argv[]) {
  char *line = NULL;
  size_t len = 0;
  size_t read;

  while ((read = getline(&line, &len, stdin)) != -1) {
    if(read > 0) {
      // Remove last '\n'
      line[read - 1] = '\0';
      remove_duplicates(line);
      printf("%s\n", line);
    }
  }

  return 0;
}
