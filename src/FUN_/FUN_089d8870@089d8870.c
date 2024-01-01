#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d8870(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[4] != 0) {
    FUN_089d8ab4(param_1);
  }
  piVar1 = (int *)param_1[1];
  if (*param_1 != 0) {
    *(int **)(*param_1 + 4) = piVar1;
    piVar1 = (int *)param_1[1];
  }
  if (piVar1 == (int *)0x0) {
    param_1[1] = 0;
    iVar2 = 0;
  }
  else {
    *piVar1 = *param_1;
    iVar2 = param_1[1];
    param_1[1] = 0;
  }
  *param_1 = 0;
  return iVar2;
}

