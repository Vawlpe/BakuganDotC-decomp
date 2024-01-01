#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d73e8(int param_1)

{
  int iVar1;
  
  FUN_088d935c();
  iVar1 = FUN_088e1948();
  if (*(int *)(iVar1 + 0x140) == 10) {
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  }
  if (0.0 < *(float *)(param_1 + 0x6c)) {
    if ((-1 < (int)*(uint *)(param_1 + 0x16c)) && (*(uint *)(param_1 + 0x16c) < 3)) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    }
    FUN_089dfc04(param_1);
    FUN_089dfdb0(param_1);
    FUN_088d7344(param_1);
    if (DAT_08abf070 == 0) {
      if (DAT_08abf064 != 0) {
        FUN_089dfc04();
        FUN_089dfdb0(DAT_08abf064);
      }
      if (DAT_08abf068 != 0) {
        FUN_089dfc04();
        FUN_089dfdb0(DAT_08abf068);
      }
      DAT_08abf070 = DAT_08abf070 + 1;
    }
  }
  return;
}

