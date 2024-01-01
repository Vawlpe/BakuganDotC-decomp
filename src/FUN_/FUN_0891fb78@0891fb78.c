#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891fb78(undefined4 param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if (param_3 < 6) {
    if (param_3 < 6) {
      if (param_3 == 1) {
        FUN_089b4c84(auStack_50,"fix_dc_05");
      }
      else if (param_3 == 2) {
        FUN_089b4c84(auStack_50,"fix_dc_02");
      }
      else if (param_3 == 3) {
        FUN_089b4c84(auStack_50,"fix_dc_07");
      }
      else if (param_3 == 4) {
        FUN_089b4c84(auStack_50,"fix_dc_04");
      }
      else if (param_3 == 5) {
        FUN_089b4c84(auStack_50,"fix_dc_06");
      }
      else {
        FUN_089b4c84(auStack_50,"fix_dc_01");
      }
    }
  }
  else {
    FUN_089b4c84(auStack_50,"fix_dc_01");
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

