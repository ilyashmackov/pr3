#include "loadLib.h"
#include "func_prototype.h"
#include <stdio.h>
#include <windows.h>

void LoadRun(const char *fileName) {
    void *pLibrary;
    void (*pFunction)();
    pLibrary = LoadLibrary(fileName); //�������� ���������� � ������;
    if (!pLibrary) {
        printf("can not open library '%fileName'\n", fileName);
        return;
    }
    pFunction = (void (*)()) GetProcAddress((HINSTANCE) pLibrary, "func"); //��������� ��������� �� ������� �� ����������;
    if (pFunction == NULL) {
        printf("can not load function func\n");
    } else {
        pFunction();
    }
    FreeLibrary((HINSTANCE) pLibrary); //�������� ����������;
}
