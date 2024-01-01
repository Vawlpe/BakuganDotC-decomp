#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a231c8(uint param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 1;
  uVar7 = 0;
  if ((DAT_08af13b0 != -1) && (param_1 < 0x10)) {
    uVar3 = FUN_08a29204();
    uVar5 = 0;
    uVar7 = 0;
    if (DAT_08afdee4 != 0) {
      puVar4 = &DAT_08afdef8;
      do {
        cVar1 = puVar4[1];
        if (cVar1 == '\x03' || cVar1 == '\a') {
          bVar2 = puVar4[0x5c];
LAB_08a232a8:
          if ((bVar2 == param_1) && (*(int *)(puVar4 + 0x10) == param_2)) {
            if ((uVar6 & DAT_08afebf8) == 0) {
              uVar7 = uVar7 | uVar6 & ~uVar3;
            }
            else {
              uVar7 = uVar7 | uVar6;
            }
          }
        }
        else if (cVar1 == '\x05') {
          bVar2 = puVar4[0x5c];
          goto LAB_08a232a8;
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 << 1;
        puVar4 = puVar4 + 0x68;
      } while (uVar5 < DAT_08afdee4);
    }
  }
  return uVar7;
}

