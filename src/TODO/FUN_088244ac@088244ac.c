#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088244ac(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_V73;
  undefined4 in_V77;
  undefined4 in_V7B;
  undefined4 in_V7F;
  
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x220,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_0881d618(iVar4,param_1,*(undefined4 *)(*(int *)(param_1 + 0x88) + param_2 * 0x20));
    iVar5 = iVar4;
  }
  iVar5 = FUN_089f5194(param_1,iVar5);
  *(undefined4 *)(iVar5 + 0x60) = in_V73;
  *(undefined4 *)(iVar5 + 100) = in_V77;
  *(undefined4 *)(iVar5 + 0x68) = in_V7B;
  *(undefined4 *)(iVar5 + 0x6c) = in_V7F;
  *(undefined4 *)(iVar5 + 0x160) = param_3;
  uVar3 = param_4[1];
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  *(undefined4 *)(iVar5 + 0x90) = *param_4;
  *(undefined4 *)(iVar5 + 0x94) = uVar3;
  *(undefined4 *)(iVar5 + 0x98) = uVar1;
  *(undefined4 *)(iVar5 + 0x9c) = uVar2;
  *(undefined4 *)(iVar5 + 0x180) = in_V73;
  *(undefined4 *)(iVar5 + 0x184) = in_V77;
  *(undefined4 *)(iVar5 + 0x188) = in_V7B;
  *(undefined4 *)(iVar5 + 0x18c) = in_V7F;
  return;
}

