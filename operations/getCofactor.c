#include "../headers/operations.h"

void getCofactor(float **matrix, float **cofactor, int n)
{
    float **minor = allocateMatrix(n - 1, n - 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            getMinor(matrix, minor, n, i, j);
            float sign = ((i + j) % 2 == 0) ? 1.0 : -1.0;
            cofactor[i][j] = sign * determinant(minor, n - 1);
        }
    }

    freeMatrix(minor, n - 1);
}