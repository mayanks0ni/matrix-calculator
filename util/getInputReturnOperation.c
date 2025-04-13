#include "../headers/operations.h"
#include <string.h>

int getInputReturnOperation(char type[])
{
    if (strcmp(type, "Square") == 0)
    {
        int opn;
        printf("Enter the number of the operation you want to perform: \n1) Addition\n2) Subtraction\n3) Trace\n4) Multiplication\n5) Determinant\n6) Transpose\n7) Cofactor\n8) Adjoint\n9) Inverse\n");
        scanf("%i", &opn);
        return opn;
    }
    else
    {
        int opn;
        printf("Enter the number of the operation you want to perform: \n1) Addition\n2) Subtraction\n3) Multiplication\n4) Transpose\n");
        scanf("%i", &opn);
        return opn;
    }
}