#include "../headers/operations.h"

int multMatrix(int row, int column, int toBeMultCol, float **mA, float **mB, float **rm)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < toBeMultCol; j++)
        {
            rm[i][j] = 0.0f;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < column; k++)
        {
            float a = mA[i][k];
            for (int j = 0; j < toBeMultCol; j++)
            {
                rm[i][j] += a * mB[k][j];
            }
        }
    } // performs the matrix multiplication.

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < toBeMultCol; j++)
    //     {
    //         printf("%.2f\t", rm[i][j]); // prints element with tab space.
    //     }
    //     printf("\n"); // next line after every row.
    // }
    return 0;
}
