#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884dcb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined param_6,int param_7,undefined4 param_8)

{
  FUN_0884b444(1);
  FUN_08847e48(param_1,param_2,param_3,param_4 + 0x20,param_5,param_6,param_7,param_8);
  if ((param_7 == 1) && (*(int *)(DAT_08ac58c4 + 4) == 0x12)) {
    *(undefined4 *)(param_4 + 0x414) = DAT_08aba788;
  }
  *(undefined4 *)(param_4 + 0x440) = 6;
  *(undefined4 *)(param_4 + 0x444) = 6;
  DAT_08ac601c = 0;
  return;
}

