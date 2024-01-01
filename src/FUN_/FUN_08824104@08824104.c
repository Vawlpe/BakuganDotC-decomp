#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08824104(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
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
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  *(undefined4 *)(iVar5 + 0x60) = *param_3;
  *(undefined4 *)(iVar5 + 100) = uVar3;
  *(undefined4 *)(iVar5 + 0x68) = uVar1;
  *(undefined4 *)(iVar5 + 0x6c) = uVar2;
  *(int *)(iVar5 + 0x1fc) = param_4;
  if (param_4 != 0) {
    *(undefined4 *)(iVar5 + 0x200) = *(undefined4 *)(param_4 + 0xc);
  }
  return;
}

