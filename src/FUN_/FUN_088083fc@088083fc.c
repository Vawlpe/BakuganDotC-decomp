#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088083fc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af13ec;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x28) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar2 = (undefined4 *)FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_089eaf90(puVar2);
    puVar3 = puVar2;
  }
  *(undefined4 **)(param_1 + 0x2c) = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}

