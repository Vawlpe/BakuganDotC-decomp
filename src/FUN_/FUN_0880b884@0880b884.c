#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880b884(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af161c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = FUN_0880d2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,1,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x20) = 1;
  *(undefined *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar3 = (undefined4 *)FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_089eaf90(puVar3);
    puVar5 = puVar3;
  }
  *(undefined4 **)(param_1 + 0x24) = puVar5;
  *puVar5 = 0x476e4800;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x70,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  if (iVar4 != 0) {
    FUN_089edf88(iVar4);
    iVar1 = iVar4;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  iVar1 = FUN_08816a90();
  if (iVar1 == 0) {
    FUN_08816868();
  }
  iVar1 = FUN_08816aac();
  iVar4 = FUN_089edb80();
  *(float *)(iVar1 + 4) = *(float *)(iVar4 + 0x10) + 1000.0;
  return param_1;
}

