#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d8d28(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[4] == 0) {
    iVar1 = param_1[5];
  }
  else {
    FUN_089d91d4(param_1[4],param_1);
    param_1[4] = 0;
    iVar1 = param_1[5];
  }
  if (iVar1 == 0) {
    iVar1 = *param_1;
  }
  else {
    FUN_089d8e70(param_1);
    iVar1 = *param_1;
  }
  piVar2 = (int *)param_1[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar2;
    piVar2 = (int *)param_1[1];
  }
  if (piVar2 == (int *)0x0) {
    param_1[1] = 0;
    iVar1 = 0;
  }
  else {
    *piVar2 = *param_1;
    iVar1 = param_1[1];
    param_1[1] = 0;
  }
  *param_1 = 0;
  return iVar1;
}

