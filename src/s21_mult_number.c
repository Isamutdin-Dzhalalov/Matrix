#include "s21_matrix.h"

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  if (point_is_null(A) || point_is_null(result)) {
    return FAILURE;
  } else if (isinf(number) || isnan(number) || inf_or_nan(A)) {
    return ERRR;
  }

  s21_create_matrix(A->rows, A->columns, result);

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] * number;
    }
  }

  return SUCCESS;
}
