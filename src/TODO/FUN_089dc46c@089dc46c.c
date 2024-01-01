#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dc46c(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (((param_2 & 0x20000) != 0) && ((*(uint *)(param_1[5] + 0x20) & 0x20000) != 0)) {
    iVar1 = (uint)*(ushort *)(param_1[5] + 0x1c) * 0xd + 0x13;
    if (param_1[2] < *param_1 + iVar1 * 4) {
      uVar2 = (uint)(*(int *)(param_1[7] + 0x10) != 0);
      if ((uVar2 == 0) || (param_1[0x12] == 0)) {
        iVar1 = uVar2 + iVar1 + -0x12;
      }
      else {
        iVar1 = 0;
      }
      if (uVar2 != 0) {
        iVar1 = (uint)*(ushort *)(param_1[7] + 0x14) * 3 + iVar1 + 1;
      }
      uVar2 = *param_1 + iVar1 * 4;
      if (param_1[2] < uVar2) {
        *param_1 = uVar2;
        param_1[0x12] = uVar2;
        return;
      }
    }
    FUN_089dc830();
  }
  return;
}

