#include <stdio.h>
#include <string.h>
// Each function will be called from it's respective file header file.
#include "./operations/add.h"
#include "./operations/subtract.h"

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
        printf("Enter the elements separated by space: ");
        int matrix[n][n];
        int (*element)[n][n] = &matrix;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%i", &(*element)[i][j]);
            }
        }

        int opn;
        printf("Enter the number of the operation you want to perform: \n1) Addition\n2) Subtraction\n3) Multiplication\n4) Transpose\n5) Adjoint\n6) Cofactor\n7) Inverse\n");
        scanf("%i", &opn);
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
            addMatrix(n, element, toAddE);
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
            subMatrix(n, element, toSubE);
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