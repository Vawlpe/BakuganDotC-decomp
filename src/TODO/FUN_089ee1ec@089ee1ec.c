#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ee1ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *ptr;
  int iVar3;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af57ac;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089f4f54(iVar2,0);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  FUN_089f5270(iVar3,0x20);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined **)(param_1 + 0x14) = ptr;
  memset_jak(ptr,0,0x80);
  *(undefined *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x447a0000;
  return param_1;
}

