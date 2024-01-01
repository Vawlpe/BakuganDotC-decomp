#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a22f9c(char *param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  uVar2 = 0;
  if (((DAT_08af13b0 != -1) && (param_1 != (char *)0x0)) &&
     (uVar3 = 0, uVar2 = 0, DAT_08afdee4 != 0)) {
    puVar1 = &DAT_08afdef8;
    do {
      uVar3 = uVar3 + 1;
      if (((puVar1[1] == '\x03' || puVar1[1] == '\a') && (puVar1[0x5c] == *param_1)) &&
         ((puVar1[0x5d] == param_1[1] && (*(int *)(puVar1 + 0x10) == param_2)))) {
        uVar2 = uVar2 | uVar4;
      }
      uVar4 = uVar4 << 1;
      puVar1 = puVar1 + 0x68;
    } while (uVar3 < DAT_08afdee4);
  }
  return uVar2;
}

