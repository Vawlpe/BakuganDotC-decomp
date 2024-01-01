#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892f900(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_0892bc18(*(undefined *)(param_1 + *(char *)(param_1 + 0x75) * 0xc + 0x1ba4));
  uVar2 = FUN_0892c394(uVar1);
  uVar3 = uVar2 >> 8 & 0xff;
  iVar5 = 0x82;
  uVar2 = uVar2 >> 0x10 & 0xff;
  iVar4 = 0x208;
  do {
    if (iVar5 < 0x83) {
      if (0x81 < iVar5) {
        FUN_089f4a90((float)(uVar3 / 3),(float)(uVar3 % 3),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      }
    }
    else if (iVar5 < 0x84) {
      FUN_089f4a90((float)(uVar2 / 3),(float)(uVar2 % 3),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x84);
  return;
}

