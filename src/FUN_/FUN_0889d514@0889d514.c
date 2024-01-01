#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889d514(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0889d4e4(0xffffffff);
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  uVar3 = *(undefined4 *)(iVar1 + 0x34);
  uVar2 = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  return;
}

