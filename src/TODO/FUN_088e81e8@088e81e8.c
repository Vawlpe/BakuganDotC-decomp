#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e81e8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af3d04;
    FUN_08824658(DAT_08ac5c70,0x4a,param_1 + 0x440);
    FUN_08824658(DAT_08ac5c70,0x4a,param_1 + 0x450);
    *(undefined **)(param_1 + 0x14) = &DAT_08af3e94;
    FUN_088e5c90(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

