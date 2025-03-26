#include <stdio.h>
#include <string.h>
// Each function will be called from it's respective file header file.
#include "./util/genMatrix.c"
#include "./util/getInputReturnOperation.c"
#include "./operations/addMatrix.c"
#include "./operations/subMatrix.c"

int main()
{
    char type[10];
    printf("Enter the type of matrix you want to input (Square/Rectangle): ");
    scanf("%s", type);
    if (strcmp(type, "Square") == 0)
    {
        printf("Since you chose Square matrix, you can perform all the operations and they include - \n- Addition\n- Subtraction\n- Multiplication\n- Transpose\n- Adjoint\n- Cofactor\n- Inverse\n");
        int n;
        printf("Enter the row/column count of the square matrix: ");
        scanf("%i", &n);
        int matrix[n][n];
        int (*element)[n][n] = &matrix; // pointer defined for iterating in the matrix.
        genMatrix(n, n, element); // generating the matrix using the function defined.
        int opn = getInputReturnOperation(); //fetching the operation user wants to perform.
        if (opn > 7 || opn < 1)
            return 0;
        switch (opn)
        {
        case 1:
        {
            printf("Enter elements of the 2nd matrix: ");
            int toAdd[n][n];
            int (*toAddE)[n][n] = &toAdd;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%i", &(*toAddE)[i][j]);
                }
            }
            addMatrix(n, n, element, toAddE);
            break;
        }

        case 2:
        {
            printf("Enter elements of the 2nd matrix: ");
            int toSub[n][n];
            int (*toSubE)[n][n] = &toSub;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%i", &(*toSubE)[i][j]);
                }
            }
            subMatrix(n, n, element, toSubE);
            break;
        }
        }
    }
    else if (strcmp(type, "Rectangle") == 0)
    {
        printf("Since you chose Rectangle matrix, you can perform the following operations - \n- Addition\n- Subtraction\n- Multiplication\n- Transpose\n");
        int n, m;
        printf("Enter the row & column count of the rectangular matrix (in the same order): ");
        scanf("%i %i", &n, &m);
    }
    else
    {
        printf("Invalid input, program terminated.");
        return 0;
    }
}