#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088249f8(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  while (iVar4 = iVar5, iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 4);
    if (((param_2 == -1) || (*(int *)(iVar4 + 0x16c) == param_2)) &&
       ((param_4 == 0 || (*(int *)(iVar4 + 0x160) == param_4)))) {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *(undefined4 *)(iVar4 + 0x90) = *param_3;
      *(undefined4 *)(iVar4 + 0x94) = uVar1;
      *(undefined4 *)(iVar4 + 0x98) = uVar2;
      *(undefined4 *)(iVar4 + 0x9c) = uVar3;
    }
  }
  return;
}

