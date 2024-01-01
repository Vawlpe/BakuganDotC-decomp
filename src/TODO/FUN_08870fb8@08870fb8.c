#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08870fb8(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  
  bVar1 = false;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    uVar3 = _DONE_Get_DAT_08AAC9E0();
    cVar2 = FUN_0880d0ac(uVar3,7);
    if (cVar2 == '\x01' || cVar2 == '\x02') {
      bVar1 = true;
    }
  }
  if ((bVar1) && (*(char *)(param_1 + 0x574) != '\0')) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) & 0xfff81247;
    if (*(byte *)(param_1 + 0x575) == 0) {
      bVar4 = *(char *)(param_1 + 0x576) + 1;
      *(byte *)(param_1 + 0x576) = bVar4;
      if (7 < bVar4) {
        *(undefined *)(param_1 + 0x576) = 0;
        FUN_088243d8(DAT_08ac5c70,0x37,param_1 + 0x250);
        *(char *)(param_1 + 0x575) = *(char *)(param_1 + 0x575) + '\x01';
      }
    }
    else if ((*(byte *)(param_1 + 0x575) < 2) &&
            (bVar4 = *(char *)(param_1 + 0x576) + 1, *(byte *)(param_1 + 0x576) = bVar4,
            0x3b < bVar4)) {
      *(undefined *)(param_1 + 0x576) = 0;
      FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x250);
      *(undefined *)(param_1 + 0x574) = 0;
      *(char *)(param_1 + 0x575) = *(char *)(param_1 + 0x575) + '\x01';
    }
  }
  return;
}

