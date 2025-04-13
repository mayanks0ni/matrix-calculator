#include "../headers/operations.h"

float** allocateMatrix(int n, int m) {
    float** matrix = malloc(n * sizeof(float*));
    for (int i = 0; i < n; i++)
        matrix[i] = malloc(m * sizeof(float));
    return matrix;
}