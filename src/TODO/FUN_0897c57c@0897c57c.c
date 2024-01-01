#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0897c57c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  if ((-1 < *(char *)(param_1 + 0xee5)) && (*(char *)(param_1 + 0xee5) < '\x02')) {
    uVar3 = 2;
    if (*(char *)((int)*(char *)(param_1 + 0xee0) + *(char *)(param_1 + 0xee1) * 6 + param_1 +
                 0x1250) != '\0') {
      uVar3 = 1;
    }
    return uVar3;
  }
  bVar2 = FUN_0897a03c(param_1,*(char *)(param_1 + 0xee1));
  if (bVar2 == 0xff) {
    cVar1 = *(char *)(param_1 + 0xee1);
  }
  else {
    if (bVar2 != 0) {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          return 0;
        }
        uVar3 = 2;
        if (*(char *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1284) != '\0') {
          uVar3 = 1;
        }
        return uVar3;
      }
      if (2 < bVar2) {
        return 0;
      }
      uVar3 = 2;
      if (*(char *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1280) != '\0') {
        uVar3 = 1;
      }
      return uVar3;
    }
    cVar1 = *(char *)(param_1 + 0xee1);
  }
  uVar3 = 2;
  if (*(char *)((int)*(char *)(param_1 + 0xee0) + ((int)cVar1 / 3) * 6 + param_1 + 0x1250) != '\0')
  {
    uVar3 = 1;
  }
  return uVar3;
}

