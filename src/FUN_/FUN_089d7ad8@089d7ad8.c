#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d7ad8(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)param_2[1];
    if (*param_2 != 0) {
      *(int **)(*param_2 + 4) = piVar2;
      piVar2 = (int *)param_2[1];
    }
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 8);
    }
    else {
      *piVar2 = *param_2;
      piVar2 = *(int **)(param_1 + 8);
    }
    if (piVar2 == param_2) {
      iVar3 = piVar2[1];
      if (iVar3 == 0) {
        iVar3 = *piVar2;
        *(int *)(param_1 + 8) = iVar3;
      }
      else {
        *(int *)(param_1 + 8) = iVar3;
      }
      if (iVar3 == param_1) {
        *(undefined4 *)(param_1 + 8) = 0;
        *param_2 = 0;
      }
      else {
        *param_2 = 0;
      }
    }
    else {
      *param_2 = 0;
    }
    param_2[1] = 0;
    uVar1 = 1;
  }
  return uVar1;
}

