#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_08a2a2cc(int **param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = *param_1;
  piVar1 = (int *)0xffffffff;
  if ((piVar3 != (int *)0x0) && (*(char *)(param_1 + 3) == '\0')) {
    piVar4 = (int *)0x0;
    param_1[2] = (int *)0x0;
    if (param_1[1] != (int *)0x0) {
      do {
        piVar4 = (int *)((int)piVar4 + 1);
        param_1[2] = (int *)((int)param_1[2] + *piVar3);
        piVar3 = piVar3 + 1;
      } while (piVar4 < param_1[1]);
    }
    *(undefined *)(param_1 + 3) = 1;
  }
  if (param_1[2] != (int *)0x0) {
    iVar2 = FUN_089bed14();
    piVar1 = (int *)0x0;
    iVar5 = 0;
    if (param_1[1] != (int *)0x0) {
      piVar3 = *param_1;
      do {
        iVar5 = iVar5 + *piVar3;
        if (iVar2 < iVar5) {
          return piVar1;
        }
        piVar1 = (int *)((int)piVar1 + 1);
        piVar3 = piVar3 + 1;
      } while (piVar1 < param_1[1]);
    }
  }
  return piVar1;
}

