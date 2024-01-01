#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089923f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af5054;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined *)(param_1 + 0x88) = 0;
  *(undefined *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_08909df4(param_1,1);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  uVar1 = FUN_08992278(param_1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  uVar1 = FUN_089923b0(param_1);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  iVar2 = FUN_089923e0(param_1);
  iVar3 = 0;
  *(int *)(param_1 + 0x104) = iVar2;
  iVar4 = param_1;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(iVar4 + 0xb4) = 0xffffffff;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < iVar2);
  }
  return param_1;
}

