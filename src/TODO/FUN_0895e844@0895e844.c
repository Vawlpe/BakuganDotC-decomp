#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895e844(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + (uint)*(ushort *)(param_1 + 0x516c) * 0x28 + 0x78;
  if (*(char *)(param_1 + 0x75) == '\0') {
    FUN_089a537c(0x41a00000,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4)
                 ,iVar1);
    return;
  }
  FUN_089a537c(0x41a00000,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4),
               iVar1);
  return;
}

