#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0897c824(int param_1)

{
  byte bVar1;
  undefined4 auStack_90 [33];
  
  memcpy_jak(auStack_90,&DAT_08ac362c,0x84);
  if ((-1 < *(char *)(param_1 + 0xee5)) && (*(char *)(param_1 + 0xee5) < '\x02')) {
    return auStack_90
           [*(byte *)((int)*(char *)(param_1 + 0xee0) + *(char *)(param_1 + 0xee1) * 6 + param_1 +
                     0x1250)];
  }
  bVar1 = FUN_0897a03c(param_1,*(char *)(param_1 + 0xee1));
  if ((bVar1 != 0xff) && (bVar1 != 0)) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return auStack_90[*(byte *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1284)];
      }
    }
    else if (bVar1 < 3) {
      return auStack_90[*(byte *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1280)];
    }
    return 0;
  }
  return 0;
}

