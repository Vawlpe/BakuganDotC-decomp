#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d0964(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  if ((*(uint *)(DAT_08ac5940 + 4) & param_2) == 0) {
    if ((*(uint *)(DAT_08ac5940 + 0x2c) & param_2) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return uVar1;
}

