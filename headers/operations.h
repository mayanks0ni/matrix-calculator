#ifndef operations
#define operations

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000
//utility functions delcarations
float** allocateMatrix(int n, int m);
void freeMatrix(float** matrix, int n);

int addMatrix(int row, int column, float**m1, float** m2);
int getInputReturnOperation();
int genMatrix(int row, int column, float** m);
void subMatrix(int row, int column, float** m1, float** m2);
int multMatrix(int row, int column, int toBeMultCol, float** mA, float** mB, float** rm);
int trace(int row, int column, float**m);
void transpose(int rows, int column, float**m, float**tm);
void getCofactor(float** matrix, float** cofactor, int n);
float determinant(float** m, int n);
void getMinor(float** src, float** dest, int n, int p, int q);


#endif
