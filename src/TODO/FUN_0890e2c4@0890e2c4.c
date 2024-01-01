#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890e2c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4884;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x40,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined *)(param_1 + 0x90) = *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined *)(param_1 + 0x91) = 1;
  *(undefined *)(param_1 + 0x92) = 1;
  iVar3 = FUN_089edb80();
  *(undefined4 *)(iVar3 + 0x10) = 0x459c4000;
  iVar3 = FUN_08818afc(0);
  *(int *)(param_1 + 0x74) = iVar3;
  *(undefined4 *)(iVar3 + 0xe0) = 0x43880000;
  strcpy(&DAT_08ac0e88,&DAT_08a9b550);
  DAT_08ac1088 = 0;
  if (DAT_08ac0e78 == 0x12e) {
    DAT_08ac0e70 = 1;
  }
  DAT_08ac108c = param_1;
  *(undefined4 *)(param_1 + 0x70) = 1;
  return;
}

