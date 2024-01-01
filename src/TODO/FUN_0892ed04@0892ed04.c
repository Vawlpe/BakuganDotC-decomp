#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892ed04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x56;
  iVar1 = 0x158;
  do {
    FUN_089f4a90(0,(float)(*(ushort *)(param_1 + *(char *)(param_1 + 0x75) * 0xc + 0x1bac) + 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x57);
  iVar2 = 0x58;
  iVar1 = 0x160;
  do {
    FUN_089f4a90(0,(float)(*(ushort *)(param_1 + *(char *)(param_1 + 0x75) * 0xc + 0x1bac) + 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x59);
  return;
}

