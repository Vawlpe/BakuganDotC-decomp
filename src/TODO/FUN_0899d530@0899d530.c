#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899d530(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = 0x49;
  piVar1 = (int *)(iVar2 + 0x124);
  param_1 = param_1 + 0x248;
  do {
    iVar4 = iVar3 + -0x49;
    iVar3 = iVar3 + 1;
    iVar4 = iVar2 + (iVar4 / 5 & 0xffU) * 4;
    *(float *)(param_1 + 0x1c44) =
         *(float *)(*(int *)(iVar4 + 200) + 0x60) - *(float *)(*piVar1 + 0x60);
    iVar5 = *piVar1;
    piVar1 = piVar1 + 1;
    *(float *)(param_1 + 0x1c48) = *(float *)(*(int *)(iVar4 + 200) + 100) - *(float *)(iVar5 + 100)
    ;
    param_1 = param_1 + 8;
  } while (iVar3 < 0x58);
  return;
}

