#include "../headers/operations.h"

void freeMatrix(float** matrix, int n) {
    for (int i = 0; i < n; i++)
        free(matrix[i]);
    free(matrix);
}