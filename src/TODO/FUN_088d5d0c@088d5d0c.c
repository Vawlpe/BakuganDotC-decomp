#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d5d0c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2edc;
  *(undefined **)(param_1 + 0x160) = &DAT_08af2f7c;
  FUN_088d5c90(param_1);
  *(uint *)(param_1 + 0x18c) =
       (uint)*(ushort *)
              (&DAT_08a96a68 + ((int)*(char *)(*(int *)(param_1 + 0x170) + 0x23) & 0xfU) * 2);
  iVar5 = *(int *)(param_1 + 0x130);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar5 + 0xb4) = uVar3;
  *(undefined4 *)(iVar5 + 0xb8) = uVar1;
  *(undefined4 *)(iVar5 + 0xbc) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_0881a358(iVar4,2);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x174) = iVar5;
  uVar3 = FUN_089be054(DAT_08ac520c,"Steam_Wall.ctc");
  FUN_0881a484(iVar5,uVar3,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x144) = 0;
  *(int *)(*(int *)(param_1 + 0x174) + 0x138) = param_1;
  iVar5 = *(int *)(param_1 + 0x174);
  *(int *)(iVar5 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
  *(undefined *)(iVar5 + 0x10c) = 1;
  *(uint *)(*(int *)(param_1 + 0x174) + 0x130) = *(uint *)(*(int *)(param_1 + 0x174) + 0x130) | 4;
  *(undefined *)(param_1 + 0x180) = 0;
  return param_1;
}

