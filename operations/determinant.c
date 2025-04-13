#include "../headers/operations.h"

float determinant(float **matrix, int n)
{
    if (n == 1)
        return matrix[0][0];
    if (n == 2)
    {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    float det = 0.0;
    float sign = 1.0;

    float **minor = allocateMatrix(n - 1, n - 1);

    for (int f = 0; f < n; f++)
    {
        getMinor(matrix, minor, n, 0, f);
        det += sign * matrix[0][f] * determinant(minor, n - 1);
        sign = -sign;
    }

    freeMatrix(minor, n - 1);
    return det;
}