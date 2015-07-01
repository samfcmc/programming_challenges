/*
 * In a MxN matrix, if an element is 0,
 * the entire line and column is set to 0
 */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

typedef int** Matrix;

void read_dimensions(int *lines, int *columns) {
  scanf("%d %d\n", lines, columns);
}

void read_matrix(int lines, int columns, Matrix matrix) {
  int value;
  for (size_t l = 0; l < lines; l++) {
    for (size_t c = 0;c < columns; c++) {
      scanf("%d", &value);
      matrix[l][c] = value;
    }
  }
}
Matrix new_matrix(int lines, int columns) {
  return (Matrix) malloc(sizeof(int)*lines*columns);
}

void destroy_matrix(Matrix matrix) {
  free(matrix);
}

void line_to_zero(int line, int columns, Matrix matrix) {
  bzero(matrix[line], sizeof(int)*columns);
}

void column_to_zero(int column, int lines, Matrix matrix) {
  for (size_t l = 0; l < lines; l++) {
    matrix[l][column] = 0;
  }
}

void process_matrix(int lines, int columns, Matrix matrix) {
  for (size_t l = 0; l < lines; l++) {
    for (size_t c = 0; c < columns; c++) {
      int value = matrix[l][c];
      if(!value){
        line_to_zero(l, columns, matrix);
        column_to_zero(c, lines, matrix);
      }
    }
  }
}

void print_matrix(int lines, int columns, Matrix matrix){
  for (size_t l = 0; l < lines; l++) {
    for (size_t c = 0; c < columns; c++) {
      printf("%d ", matrix[l][c]);
    }
    printf("\n");
  }
}

int main(int argc, char const *argv[]) {
  int lines;
  int columns;
  Matrix matrix;

  read_dimensions(&lines, &columns);
  matrix = new_matrix(lines, columns);
  read_matrix(lines, columns, matrix);
  process_matrix(lines, columns, matrix);
  print_matrix(lines, columns, matrix);

  return 0;
}
