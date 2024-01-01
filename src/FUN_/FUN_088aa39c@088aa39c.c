#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088aa39c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x168) != 0) {
    iVar4 = *(int *)(param_1 + 0x168);
    uVar1 = *(undefined4 *)(iVar4 + 0xb4);
    uVar2 = *(undefined4 *)(iVar4 + 0xb8);
    uVar3 = *(undefined4 *)(iVar4 + 0xbc);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(iVar4 + 0xb0);
    *(undefined4 *)(param_1 + 0x1c4) = uVar1;
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    *(undefined4 *)(param_1 + 0x1cc) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x304) = 0;
  return;
}

