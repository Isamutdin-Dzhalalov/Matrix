#include "s21_matrix.h"

int s21_transpose(matrix_t *a, matrix_t *c) {
  if (point_is_null(a) || point_is_null(c)) {
    return ERRR;
  }

  int res = s21_create_matrix(a->columns, a->rows, c);

  if (res == SUCCESS) {
    for (int i = 0; i < c->rows; i++) {
      for (int j = 0; j < c->columns; j++) {
        c->matrix[i][j] = a->matrix[j][i];
      }
    }
  }

  return res;
}
