#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "func_prototype.h"

void outArray(int *, int);

void func() {
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    int arraySize = 42, count = 0;
    int *matrix = (int *) malloc(arraySize * sizeof(int));
    for (int i = 0; i < arraySize; ++i) {
        matrix[i] = rand() % 101 - 50;
    }
    puts("Заполнение массива случайными числами:");
    outArray(matrix, arraySize);
    for (int i = 0; i < arraySize; ++i) {
        if (matrix[i] > 0) count += 1;
    }
    puts("\n\nВыполнение условия:");
    //outArray(matrix, arraySize);
	printf("\nОбщее число отрицательных элементов в массиве: %d", count);
    puts("\n");
    system("pause");
}

void outArray(int *ptrArray, int array_size) {
    for (int i = 0; i < array_size; ++i) printf("%d\t", ptrArray[i]);
}
