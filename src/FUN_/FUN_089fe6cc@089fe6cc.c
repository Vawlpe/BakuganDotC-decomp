#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fe6cc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x74) = &DAT_08af5954;
    *(undefined **)(param_1 + 0x94) = &DAT_08af59bc;
    FUN_089f51b8(param_1);
    FUN_089d87bc(param_1 + 0x80,0);
    FUN_089f4fe0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

