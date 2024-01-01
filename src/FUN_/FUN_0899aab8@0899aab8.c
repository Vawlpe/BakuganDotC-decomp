#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899aab8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      DAT_08ac0e70 = 1;
      FUN_089bf6e8(0x130,100);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      goto LAB_0899ab94;
    }
  }
  else if (iVar1 < 2) {
    iVar1 = FUN_089bf93c(0x130,1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    goto LAB_0899ab94;
  }
  FUN_08998fdc(param_1);
  FUN_08999400(param_1,1);
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined4 *)(param_1 + 0x2c) = 3;
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 4;
    iVar1 = *(int *)(param_1 + 0x2370);
    uVar2 = 0x1d;
    if (iVar1 == 0) {
      uVar2 = 3;
    }
    iVar3 = param_1 + iVar1 * 0x10;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(short *)(iVar3 + 0x2332) = (short)uVar2;
    iVar1 = param_1 + (1 - iVar1) * 0x10;
    *(undefined2 *)(iVar1 + 0x2332) = 0;
    *(undefined2 *)(iVar3 + 0x233e) = 0xffff;
    *(undefined2 *)(iVar1 + 0x233e) = 0xffff;
  }
LAB_0899ab94:
  FUN_08999e9c(param_1);
  FUN_0899a560(param_1);
  FUN_0899a7a8(param_1);
  return;
}

