#include "../headers/operations.h"

void getMinor(float **src, float **dest, int n, int p, int q)
{
    int row = 0, col = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == p)
            continue;
        col = 0;
        for (int j = 0; j < n; j++)
        {
            if (j == q)
                continue;
            dest[row][col++] = src[i][j];
        }
        row++;
    }
}