#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088edf44(int param_1,undefined4 param_2,undefined2 param_3)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 600) + 1;
  *(undefined2 *)(param_1 + (uint)*(ushort *)(param_1 + 600) * 2 + 0x50) = param_3;
  *(short *)(param_1 + 600) = (short)uVar1;
  if (0x7f < (uVar1 & 0xffff)) {
    *(undefined2 *)(param_1 + 600) = 0;
  }
  return;
}

