#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a8c74(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af2864;
    uVar1 = FUN_08860188(*(undefined4 *)(param_1 + 800));
    *(undefined4 *)(param_1 + 800) = uVar1;
    FUN_088ab4c8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

