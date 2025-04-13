#include "../headers/operations.h"

void transpose(int rows, int column, float**m, float**tm)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            tm[i][j] = m[j][i];
        }
    }
}