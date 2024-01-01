#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896ba10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x2b6e);
  if ((int)uVar3 < (int)(uVar3 + (int)*(char *)(param_1 + 0x2b6f))) {
    iVar2 = uVar3 << 2;
    do {
      FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      if (*(char *)(param_1 + 0x29bd) + -1 < (int)(uVar3 - *(byte *)(param_1 + 0x2b6e))) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      }
      *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
      FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + (uVar3 - *(byte *)(param_1 + 0x2b6e)) + 0x29d1
                                           ),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while ((int)uVar3 <
             (int)((uint)*(byte *)(param_1 + 0x2b6e) + (int)*(char *)(param_1 + 0x2b6f)));
  }
  return;
}

