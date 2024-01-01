#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089096b8(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x14) = &DAT_08af478c;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1 + -0x10,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    FUN_08909228(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

