#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a23044(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 1;
  uVar2 = 0;
  if ((DAT_08af13b0 != -1) && (uVar4 = 0, uVar2 = 0, DAT_08afdee4 != 0)) {
    puVar1 = &DAT_08afdef8;
    do {
      uVar4 = uVar4 + 1;
      uVar3 = uVar2 | uVar5;
      uVar5 = uVar5 << 1;
      if ((puVar1[1] == '\x03' || puVar1[1] == '\a') && (*(int *)(puVar1 + 0x10) == param_1)) {
        uVar2 = uVar3;
      }
      puVar1 = puVar1 + 0x68;
    } while (uVar4 < DAT_08afdee4);
  }
  return uVar2;
}

