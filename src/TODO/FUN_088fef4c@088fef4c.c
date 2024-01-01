#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fef4c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08905508(*(undefined4 *)(param_1 + 0x654));
  if (iVar1 == 0) {
    iVar1 = FUN_089054c0(*(undefined4 *)(param_1 + 0x654));
    if (iVar1 == 0) {
      FUN_088feecc(param_1,0x124);
    }
    else {
      FUN_088feecc(param_1,0x125);
      FUN_088feecc(param_1,0x126);
    }
  }
  else {
    FUN_088feecc(param_1,0x127);
  }
  return;
}

