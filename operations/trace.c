#include "../headers/operations.h"

int trace(int row, int column, float**m)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += m[i][i];
    }
    return sum;
}