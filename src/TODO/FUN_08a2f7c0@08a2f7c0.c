#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2f7c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    for (piVar1 = (int *)**(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if (piVar1[3] == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return -1;
}

