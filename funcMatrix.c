#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "func_prototype.h"

void outMatrix(int **, int, int);

void func() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int matrixRow = 6, matrixColumn = 9, count = 0;
	int **ptrMatrix = (int **) malloc(matrixRow * sizeof(int *));
	for (int i = 0; i < matrixRow; ++i) {
		ptrMatrix[i] = (int *) malloc(matrixColumn * sizeof(int));
	}
	for (int i = 0; i < matrixRow; ++i) {
		for (int j = 0; j < matrixColumn; ++j) {
			ptrMatrix[i][j] = rand() % 101 - 50;
		}
	}
	puts("\nЗаполнение матрицы случайными числами:\n");
	outMatrix(ptrMatrix, matrixRow, matrixColumn);
    for (int i = 0; i < matrixRow; ++i) {
        for (int j = 0; j < matrixColumn; ++j) {
            if (ptrMatrix[i][j] > 0) count += 1;
        }
    }
    puts("\nВыполнение условия:\n");
    //outMatrix(ptrMatrix, matrixRow, matrixColumn);
	printf("\nОбщее число отрицательных элементов в матрице: %d", count);
    puts("\n");
    system("pause");
}

void outMatrix(int **matrix, int matrix_row, int matrix_column) {
    for (int i = 0; i < matrix_row; ++i) {
        for (int j = 0; j < matrix_column; ++j) {
            printf("%d\t", matrix[i][j]);
            if (j == 5) puts("\n");
        }
    }
}
