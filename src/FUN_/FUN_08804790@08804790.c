#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08804790(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af13b4;
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
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar1 = FUN_089e37a4(0);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 200) = 0xffffffff;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0xc);
  FUN_08909df4(param_1,1);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  FUN_089e29e4(*(undefined4 *)(param_1 + 0x9c));
  iVar2 = *(int *)(param_1 + 0x9c);
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0x430c0000;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  iVar2 = *(int *)(param_1 + 0x9c);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0x430c0000;
  *(undefined4 *)(iVar2 + 0x58) = 0x438c0000;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  FUN_089e3008(0xc3340000,0xc2b40000,*(undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x40) = 0x42b40000;
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x44) = 0x43af0000;
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x158) = 0x420c0000;
  FUN_089e2b14(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  return param_1;
}

