#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ab99c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af5134;
    FUN_089cec00(DAT_08ac5934);
    FUN_08909df4(param_1,1);
    *(undefined *)(param_1[8] + 0x3c) = *(undefined *)((int)param_1 + 0xb79);
    DAT_08ac0e78 = *param_1;
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

