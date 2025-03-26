#include "../headers/input.h"

int getInputReturnOperation()
{
    int opn;
    printf("Enter the number of the operation you want to perform: \n1) Addition\n2) Subtraction\n3) Multiplication\n4) Transpose\n5) Adjoint\n6) Cofactor\n7) Inverse\n");
    scanf("%i", &opn);
    return opn;
}