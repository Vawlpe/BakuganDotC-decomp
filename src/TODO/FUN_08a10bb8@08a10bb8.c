#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a10bb8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (((iVar2 != 0) &&
        (puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x20) + param_2 * 4), -1 < param_2)) &&
       (param_2 < (int)(uint)*(ushort *)(iVar2 + 0x24))) {
      if (param_3 != 0) {
        uVar1 = (uint)*(ushort *)(iVar2 + 0x26);
        param_3 = param_3 % (int)uVar1;
        if (uVar1 == 0) {
          trap(7);
        }
        if (param_3 < 0) {
          param_3 = param_3 + uVar1;
        }
        puVar3 = puVar3 + param_3 * (uint)*(ushort *)(iVar2 + 0x24);
      }
      return *puVar3;
    }
  }
  return 0;
}

