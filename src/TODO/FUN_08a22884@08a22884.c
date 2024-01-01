#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a22884(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar4 = -0x7fbaffff;
  if (DAT_08af13b0 != -1) {
    iVar4 = 0;
    uVar2 = FUN_08a29204();
    uVar6 = 1;
    if (0 < DAT_08afdee4) {
      puVar7 = &DAT_08afdef8;
      pcVar3 = &DAT_08afdef9;
      do {
        cVar1 = *pcVar3;
        uVar5 = uVar2 & ~DAT_08afebf8 & uVar6;
        pcVar3 = pcVar3 + 0x68;
        uVar6 = uVar6 << 1;
        if ((cVar1 != '\0') && (uVar5 != 0)) {
          FUN_08a23550(puVar7);
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 0x68;
      } while (iVar4 < DAT_08afdee4);
    }
    if ((((DAT_08afdef0 == 0) ||
         (iVar4 = FUN_08a23a78(&DAT_08afed1c,DAT_08afdef0,param_1), iVar4 == -1)) &&
        ((DAT_08afdef4 == 0 ||
         (iVar4 = FUN_08a23a78(&DAT_08afed9c,DAT_08afdef4,param_1), iVar4 == -1)))) &&
       ((DAT_08afdeec == 0 ||
        (iVar4 = FUN_08a23a78(&DAT_08afec9c,DAT_08afdeec,param_1), iVar4 == -1)))) {
      iVar4 = -0x7fbafff0;
    }
  }
  return iVar4;
}

