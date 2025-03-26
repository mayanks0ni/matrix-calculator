#include "subtract.h"

void subMatrix(int size, int (*m1)[size][size], int (*m2)[size][size])
{
    int resMatrix[size][size];
    int (*resMatrixE)[size][size] = &resMatrix;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            (*resMatrixE)[i][j] = (*m1)[i][j] - (*m2)[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%i ", (*resMatrixE)[i][j]);
        }
        printf("\n");
    }
}