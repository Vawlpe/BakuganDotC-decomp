#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df158(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_110 [256];
  
  iVar2 = *(int *)(param_1 + 0x350);
  if (((iVar2 != 0) && (*(int *)(param_1 + 0x35c) == 0)) && (*(char *)(iVar2 + 0x39) == '\x01')) {
    FUN_089b4c84(auStack_110,"f%01d_%02d_%03d.nmt",DAT_08b00bd4,DAT_08b00bd6,
                 *(undefined *)(iVar2 + 0x3b));
    uVar1 = FUN_089be054(DAT_08ac520c,auStack_110);
    *(undefined4 *)(param_1 + 0x35c) = uVar1;
  }
  return;
}

