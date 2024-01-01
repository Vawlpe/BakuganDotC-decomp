#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895eec4(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined *)(param_1 + 0x4fb1) = 1;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x517e) + iVar1) * 4);
    iVar1 = iVar1 + 1;
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  } while (iVar1 < 4);
  return;
}

