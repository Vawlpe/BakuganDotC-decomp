#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896c2ac(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x77);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      iVar2 = (uint)*(byte *)(param_1 + 0x2b72) + (int)*(char *)(param_1 + 0x74);
      FUN_089a537c(0x41a00000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4),
                   param_1 + iVar2 * 0x28 + 0x7c);
      return;
    }
  }
  else if (cVar1 < '\x02') {
    FUN_089a537c(0x41a00000,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4),
                 param_1 + (uint)*(byte *)(param_1 + 0x2b90) * 0x28 + 0x7c);
  }
  return;
}

