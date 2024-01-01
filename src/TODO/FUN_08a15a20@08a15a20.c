#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15a20(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x24) = param_1;
    uVar2 = param_3 & 0xffff;
    *(short *)(param_2 + 0x22) = (short)param_3;
    if ((param_3 + 1 & 0xffff0000) == 0) {
      iVar1 = param_3 * 0x30;
      param_3 = 0;
      if (uVar2 <= *(ushort *)(param_2 + 0x20)) {
        param_3 = *(int *)(param_2 + 0x14) + iVar1;
      }
    }
    FUN_08a15c90(0,param_3);
    return;
  }
  return;
}

