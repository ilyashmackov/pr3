#include "loadLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 1;
    puts("�������� ����������:");
    puts("1. ���������� � ��������");
    puts("2. ���������� � ��������");
    puts("3. �����");
    while (b) {
        scanf("%d", &a);
        if (a == 1)
            LoadRun("funcMatrix.dll");
        if (a == 2)
            LoadRun("funcArray.dll");
        if (a == 3)
            b = 0;
        else puts("������� ����� � ��������� �� 1 �� 3.");
    }
    return 0;
}
