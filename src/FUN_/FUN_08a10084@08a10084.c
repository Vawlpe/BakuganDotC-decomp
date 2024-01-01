#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a10084(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_3 == (int *)0x0) {
    param_3 = (int *)(param_1 + 0xc + param_2 * 0x10);
  }
  if (*param_3 == 0) {
    iVar3 = param_3[2];
    if (param_3[1] == 0) {
      uVar5 = 0x10;
      if (iVar3 == 0) {
        uVar5 = 4;
      }
      iVar3 = iVar3 + param_3[3];
      goto joined_r0x08a10110;
    }
    uVar5 = 0x40;
  }
  else {
    iVar3 = param_3[2];
    uVar5 = 0x80;
  }
  iVar3 = *param_3 + param_3[1] + iVar3 + param_3[3];
joined_r0x08a10110:
  uVar2 = 1;
  if (iVar3 != 0) {
    piVar1 = (int *)FUN_08a0fd1c(param_2,uVar5);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      *(int **)(param_2 * 4 + param_1) = piVar1;
      iVar3 = *piVar1 + (uint)*(byte *)((int)piVar1 + 0xd);
      iVar4 = iVar3 + *param_3;
      iVar6 = iVar4 + param_3[1];
      piVar1 = (int *)(param_1 + 0x3c + param_2 * 0x10);
      piVar1[3] = iVar6 + param_3[2];
      *piVar1 = iVar3;
      piVar1[1] = iVar4;
      piVar1[2] = iVar6;
      return 1;
    }
  }
  return uVar2;
}

