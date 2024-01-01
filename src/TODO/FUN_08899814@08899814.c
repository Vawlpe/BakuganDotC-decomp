#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08899814(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  param_1[0x61] = 0;
  *param_1 = iVar1;
  iVar1 = 0;
  piVar2 = param_1;
  do {
    piVar2[1] = 0;
    piVar2[6] = 0;
    iVar4 = 0;
    piVar3 = piVar2;
    do {
      *(undefined2 *)(piVar3 + 2) = 0;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)((int)piVar3 + 2);
    } while (iVar4 < 8);
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
  } while (iVar1 < 0x10);
  if (*param_1 < 0x15) {
    FUN_088996ac(param_1,param_2);
  }
  return;
}

