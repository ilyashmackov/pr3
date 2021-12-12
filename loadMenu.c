#include "loadLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 1;
    puts("Выберите библиотеку:");
    puts("1. Библиотека с матрицей");
    puts("2. Библиотека с массивом");
    puts("3. Выход");
    while (b) {
        scanf("%d", &a);
        if (a == 1)
            LoadRun("funcMatrix.dll");
        if (a == 2)
            LoadRun("funcArray.dll");
        if (a == 3)
            b = 0;
        else puts("Введите число в диапазоне от 1 до 3.");
    }
    return 0;
}
