#include "../headers/operations.h"

int genMatrix(int row, int column, float** m)
{
    printf("Enter the elements separated by space: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
}