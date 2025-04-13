#include <stdio.h>
#include <time.h>
#include "./headers/operations.h"
#include "./operations/multMatrix.c"
#include "./util/allocateMatrix.c"

int main()
{

    int n = 500;
    float **toM1 = allocateMatrix(n, n);
    float **toM2 = allocateMatrix(n, n);
    ;
    float **rm = allocateMatrix(n, n);
    ;
    FILE *file1 = fopen("./sample matrix/matrix_500A.txt", "r");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fscanf(file1, "%d", &toM1[i][j]);
    FILE *file2 = fopen("./sample matrix/matrix_500B.txt", "r");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fscanf(file2, "%d", &toM2[i][j]);
    clock_t start = clock();
    multMatrix(n, n, n, toM1, toM2, rm);
    clock_t end = clock();
    double time_taken = ((double)(end - start));
    FILE *toWrite = fopen("timeTakenC.txt", "a");
    fprintf(toWrite, "\nTime taken for 500x500 Matrix in C: %.4f seconds\n", time_taken);
    fclose(file1);
    fclose(file2);
}