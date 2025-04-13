#include "../headers/operations.h"

void subMatrix(int row, int column, float** m1, float** m2)
{
    float** resMatrix = allocateMatrix(row, column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            resMatrix[i][j] = m1[i][j] - m2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%.2f ", resMatrix[i][j]);
        }
        printf("\n");
    }
}