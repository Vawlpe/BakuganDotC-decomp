#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899cf90(undefined4 param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if (param_3 == 0) {
    FUN_089b4c84(auStack_50,"hyouka_moji_02_s");
  }
  else if (param_3 < 2) {
    FUN_089b4c84(auStack_50,"hyouka_moji_02_a");
  }
  else if (param_3 < 3) {
    FUN_089b4c84(auStack_50,"hyouka_moji_02_b");
  }
  else {
    FUN_089b4c84(auStack_50,"hyouka_moji_02_c");
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

