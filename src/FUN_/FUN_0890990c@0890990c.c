#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0890990c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af47a4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x14) = param_1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_089f4f54(iVar2,0);
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar4;
  *(undefined *)(iVar4 + 4) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_089eaa70();
  puVar3 = (undefined4 *)FUN_089eac30();
  *puVar3 = 0x451c4000;
  iVar4 = DAT_08ac5928;
  *(int *)(param_1 + 0x20) = DAT_08ac5928;
  *(undefined *)(iVar4 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (DAT_08ac0e70 == 0) {
    DAT_08ac0e60 = 0;
    DAT_08b01004 = 0;
    DAT_08b01000 = 0;
    DAT_08b01008 = 0;
    DAT_08ac0e6c = 0;
    DAT_08ac0e64 = 0;
    DAT_08ac0e68 = 0;
    DAT_08ac0e74 = 0;
    memset_jak(&DAT_08b01010,0,0x20);
  }
  else {
    DAT_08ac0e70 = 0;
  }
  return param_1;
}

