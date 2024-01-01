#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f58b8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = FUN_089f5378(param_1);
  }
  if (iVar5 == 0) {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar4 != 0) {
      FUN_089f3aa8(iVar4);
      iVar5 = iVar4;
    }
  }
  else {
    FUN_089f3b60(iVar5);
  }
  *(undefined4 *)(iVar5 + 0xd4) = param_2;
  FUN_089f3eb8(iVar5,0);
  *(undefined4 *)(iVar5 + 0xe0) = 0;
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  *(undefined4 *)(iVar5 + 0x60) = *param_3;
  *(undefined4 *)(iVar5 + 100) = uVar3;
  *(undefined4 *)(iVar5 + 0x68) = uVar1;
  *(undefined4 *)(iVar5 + 0x6c) = uVar2;
  FUN_089f5194(param_1,iVar5);
  return;
}

