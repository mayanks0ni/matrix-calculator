#include "../headers/matrix.h"

int genMatrix(int row, int column, int (*m)[row][column])
{
    printf("Enter the elements separated by space: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%i", &(*m)[i][j]);
        }
    }
}