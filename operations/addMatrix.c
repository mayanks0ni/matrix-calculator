#include "../headers/add.h"

int addMatrix(int row, int column, int (*m1)[row][column], int (*m2)[row][column])
{
    int resMatrix[row][column];
    int(*resMatrixE)[row][column] = &resMatrix;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            (*resMatrixE)[i][j] = (*m1)[i][j] + (*m2)[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%i ", (*resMatrixE)[i][j]);
        }
        printf("\n");
    }
}