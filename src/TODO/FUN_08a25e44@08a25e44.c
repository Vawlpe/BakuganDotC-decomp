#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a25e44(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (((param_1 != 0) &&
      (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 4), -1 < param_2)) &&
     (param_2 < (int)(uint)*(ushort *)(param_1 + 0x24))) {
    if (param_3 != 0) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x26);
      param_3 = param_3 % (int)uVar1;
      if (uVar1 == 0) {
        trap(7);
      }
      if (param_3 < 0) {
        param_3 = param_3 + uVar1;
      }
      return puVar2[param_3 * (uint)*(ushort *)(param_1 + 0x24)];
    }
    return *puVar2;
  }
  return 0;
}

