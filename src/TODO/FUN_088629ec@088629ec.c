#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08862a40)

void FUN_088629ec(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50));
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x16c) & 0x80) == 0) {
      if ((*(uint *)(param_1 + 0x16c) & 0x100) != 0) {
        *(undefined4 *)(param_1 + 0x558) = 1;
        *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x50c);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x558) = 0;
      *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x508);
    }
  }
  return;
}

