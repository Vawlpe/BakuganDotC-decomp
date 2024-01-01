#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a230c8(uint param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 1;
  uVar5 = 0;
  if ((DAT_08af13b0 != -1) && (param_1 < 0x10)) {
    uVar1 = FUN_08a29204();
    uVar3 = 0;
    uVar5 = 0;
    if (DAT_08afdee4 != 0) {
      puVar2 = &DAT_08afdef8;
      do {
        if (((puVar2[1] == '\x03' || puVar2[1] == '\a') && ((byte)puVar2[0x5c] == param_1)) &&
           (*(int *)(puVar2 + 0x10) == param_2)) {
          if ((uVar4 & DAT_08afebf8) == 0) {
            uVar5 = uVar5 | uVar4 & ~uVar1;
          }
          else {
            uVar5 = uVar5 | uVar4;
          }
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 << 1;
        puVar2 = puVar2 + 0x68;
      } while (uVar3 < DAT_08afdee4);
    }
  }
  return uVar5;
}

