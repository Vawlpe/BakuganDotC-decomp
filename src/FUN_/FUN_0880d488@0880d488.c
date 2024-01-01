#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880d488(int **param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = *param_1;
  uVar3 = 0;
  if (((piVar2 != (int *)0x0) && (*piVar2 == 1)) &&
     (iVar4 = piVar2[1], iVar1 = FUN_0880c840(), iVar4 == iVar1 + 2)) {
    uVar3 = 1;
  }
  return uVar3;
}

