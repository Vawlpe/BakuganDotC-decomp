#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890e108(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af4814;
    FUN_089cec00(DAT_08ac5934);
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

