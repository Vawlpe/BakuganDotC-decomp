#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088db000(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af3684;
  *(undefined **)(param_1 + 0x160) = &DAT_08af3724;
  *(undefined **)(param_1 + 0x194) = &DAT_08af55c4;
  *(undefined4 *)(param_1 + 400) = 3;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  iVar5 = *(int *)(param_1 + 0x130);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar5 + 0xb4) = uVar3;
  *(undefined4 *)(iVar5 + 0xb8) = uVar1;
  *(undefined4 *)(iVar5 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_0881a358(iVar4,1);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x174) = iVar5;
  *(undefined4 *)(param_1 + 0x1a0) = in_V72;
  *(undefined4 *)(param_1 + 0x1a4) = in_V76;
  *(undefined4 *)(param_1 + 0x1a8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1ac) = in_V7E;
  *(undefined4 *)(param_1 + 0x1b0) = 0x40400000;
  *(undefined4 *)(param_1 + 0x1ac) = 0x41100000;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x174),param_1 + 400,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x174) + 0xf4);
  iVar4 = *(int *)(param_1 + 0x130);
  uVar3 = *(undefined4 *)(iVar4 + 0xb4);
  uVar1 = *(undefined4 *)(iVar4 + 0xb8);
  uVar2 = *(undefined4 *)(iVar4 + 0xbc);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0xb0);
  *(undefined4 *)(iVar5 + 0x14) = uVar3;
  *(undefined4 *)(iVar5 + 0x18) = uVar1;
  *(undefined4 *)(iVar5 + 0x1c) = uVar2;
  (**(code **)(*(int *)(iVar5 + 4) + 0x4c))(iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x48));
  uVar3 = FUN_08823f5c(DAT_08ac5c70,8,(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x180) = uVar3;
  return param_1;
}

