#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0dfc(int param_1,char param_2,undefined2 param_3)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x284);
  *(undefined *)(param_1 + 0x274) = 1;
  iVar1 = (uint)*(byte *)(param_1 + 0x2d3) * 0x4c;
  *(undefined2 *)(param_1 + 0x280) = *(undefined2 *)(*(int *)(iVar5 + iVar1 + 0x48) + 0xe);
  piVar4 = (int *)(iVar5 + (uint)*(byte *)(param_1 + 0x2d2) * 0x4c);
  piVar3 = (int *)(iVar5 + iVar1);
  sVar2 = FUN_088ea914(piVar4[2] - piVar3[2],-(*piVar4 - *piVar3));
  if (param_2 != '\x01') {
    *(short *)(*(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + 0x2d3) * 0x4c + 0x38) =
         sVar2 + -0x4000;
    FUN_088f031c(param_1,param_3,1,*(undefined *)(param_1 + 0x2d3));
  }
  if (param_2 != '\x02') {
    *(short *)(*(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + 0x2d2) * 0x4c + 0x38) =
         sVar2 + 0x4000;
    FUN_088f031c(param_1,param_3,1,*(undefined *)(param_1 + 0x2d2));
  }
  return;
}

