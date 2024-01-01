#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e9a64(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      uVar2 = 0;
      puVar1 = &DAT_08a98ec0;
      do {
        FUN_08824658(*param_1,*puVar1,param_1[1]);
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar2 < 6);
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

