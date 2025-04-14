#include <stdio.h>
#include <string.h>
#include <time.h>
// Each function declared in the operations header file.
#include "./headers/operations.h"
// function's definition in the their respective c file
#include "./operations/addMatrix.c"
#include "./operations/subMatrix.c"
#include "./operations/trace.c"
#include "./operations/multMatrix.c"
#include "./operations/transpose.c"
#include "./operations/determinant.c"
#include "./operations/getCofactor.c"
#include "./operations/getMinor.c"
#include "./util/genMatrix.c"
#include "./util/allocateMatrix.c"
#include "./util/freeMatrix.c"
#include "./util/getInputReturnOperation.c"

int main()
{
    char type[10];
    char cont[] = "Yes";
    while (strcmp(strlwr(cont), "yes") == 0)
    {
        printf("Enter the type of matrix you want to input (Square/Rectangle): ");
        scanf("%s", type);
        if (strcmp(strlwr(type), "square") == 0)
        {
            printf("Since you chose Square matrix, you can perform all the operations and they include - \n- Addition\n- Subtraction\n- Trace\n- Multiplication\n- Determinant\n- Transpose\n- Adjoint\n- Cofactor\n- Inverse\n");
            int n;
            printf("Enter the row/column count of the square matrix: ");
            scanf("%i", &n);
            float **matrix = allocateMatrix(n, n);
            ;
            genMatrix(n, n, matrix);                 // generating the matrix using the function defined.
            int opn = getInputReturnOperation(type); // fetching the operation user wants to perform.
            if (opn > 9 || opn < 1)
                return 0;
            switch (opn)
            {
            case 1:
            {
                printf("Enter elements of the 2nd matrix: ");
                float **toAdd = allocateMatrix(n, n);
                ;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        scanf("%f", &toAdd[i][j]);
                    }
                }
                addMatrix(n, n, matrix, toAdd);
                freeMatrix(toAdd, n);
                break;
            }

            case 2:
            {
                printf("Enter elements of the 2nd matrix: ");
                float **toSub = allocateMatrix(n, n);
                ;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        scanf("%i", &toSub[i][j]);
                    }
                }
                subMatrix(n, n, matrix, toSub);
                freeMatrix(toSub, n);
                break;
            }

            case 3:
            {
                int tr = trace(n, n, matrix);
                printf("%i", tr);
                break;
            }

            case 4:
            {
                printf("Enter elements of the 2nd matrix (Remember the order of the 2nd Matrix is %i x %i): ", n, n);
                float **toM = allocateMatrix(n, n);
                ;
                float **rm = allocateMatrix(n, n);
                ;

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        scanf("%f", &toM[i][j]);
                    }
                }
                multMatrix(n, n, n, matrix, toM, rm);
                break;
            }

            case 5:
            {
                float det = determinant(matrix, n);
                printf("%.2f", det);
                break;
            }

            case 6:
            {
                float **t = allocateMatrix(n, n);
                transpose(n, n, matrix, t);
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        printf("%.2f ", t[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 7:
            {
                float **cofactor = allocateMatrix(n, n);
                ;
                getCofactor(matrix, cofactor, n);
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        printf("%.2f\t", cofactor[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 8:
            {
                float **cofactor = allocateMatrix(n, n);
                ;
                getCofactor(matrix, cofactor, n);
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        printf("%.2f\t", cofactor[j][i]);
                    }
                    printf("\n");
                }
                freeMatrix(cofactor, n);
                break;
            }

            case 9:
            {
                float **cofactor = allocateMatrix(n, n);
                ;
                float det = determinant(matrix, n);
                getCofactor(matrix, cofactor, n);
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        printf("%.2f\t", ((cofactor[j][i]) / det));
                    }
                    printf("\n");
                }
                freeMatrix(cofactor, n);
                break;
            }
            }
            printf("Do you want to continue? (Yes/No) ");
            scanf("%s", cont);
        }
        else if (strcmp(strlwr(type), "Rectangle") == 0)
        {
            printf("Since you chose Rectangle matrix, you can perform the following operations - \n- Addition\n- Subtraction\n- Multiplication\n- Transpose\n");
            int n, m;
            printf("Enter the row & column count of the rectangular matrix (in the same order): ");
            scanf("%i %i", &n, &m);
            float **matrix = allocateMatrix(n, m);
            genMatrix(n, m, matrix); // generating the matrix using the function defined.
            int opn = getInputReturnOperation(type);
            if (opn > 9 || opn < 1)
                return 0;
            switch (opn)
            {
            case 1:
            {
                printf("Enter elements of the 2nd matrix: ");
                float **toAdd = allocateMatrix(n, m);
                ;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        scanf("%f", &toAdd[i][j]);
                    }
                }
                addMatrix(n, m, matrix, toAdd);
                freeMatrix(toAdd, n);
                break;
            }

            case 2:
            {
                printf("Enter elements of the 2nd matrix: ");
                float **toSub = allocateMatrix(n, m);
                ;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        scanf("%f", &toSub[i][j]);
                    }
                }
                subMatrix(n, m, matrix, toSub);
                freeMatrix(toSub, n);
                break;
            }

            case 3:
            {
                printf("Enter the order of 2nd Matrix (Remember the order of the 2nd matrix will be %i x your input): ", m);
                int p;
                scanf("%i", &p);
                printf("Enter elements of the 2nd matrix (Remember the order of the 2nd Matrix is %i x %i): ", m, p);
                float **toM = allocateMatrix(m, p);
                float **rm = allocateMatrix(n, p);

                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < p; j++)
                    {
                        scanf("%f", &toM[i][j]);
                    }
                }
                multMatrix(n, m, p, matrix, toM, rm);
                break;
            }

            case 4:
            {
                float **t = allocateMatrix(m, n);
                transpose(n, m, matrix, t);
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        printf("%.2f ", t[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            }
            printf("Do you want to continue? (Yes/No) ");
            scanf("%s", cont);
        }
        else
        {
            printf("Invalid input, program terminated.");
            return 0;
        }
    }
}