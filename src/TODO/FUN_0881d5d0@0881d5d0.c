#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_0881d5d0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x218);
  iVar1 = 0;
  piVar3 = piVar2;
  if (0 < *piVar2) {
    do {
      iVar1 = iVar1 + 1;
      if (param_2 == *(ushort *)((int)piVar3 + 6)) {
        return piVar2 + *(ushort *)(piVar3 + 1);
      }
      piVar3 = piVar3 + 1;
    } while (iVar1 < *piVar2);
  }
  return (int *)0x0;
}

