#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089604b0(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x5025);
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    cVar2 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if (cVar2 < '\x01') {
    if (-1 < cVar2) {
      iVar1 = (uint)*(ushort *)(param_1 + 0x51be) + (param_2 & 0xff);
      FUN_089a537c(0x41a00000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4),
                   param_1 + iVar1 * 0x28 + 0x78);
    }
  }
  else if (cVar2 < '\x02') {
    iVar1 = (uint)*(ushort *)(param_1 + 0x51a6) + (param_2 & 0xff);
    FUN_089a537c(0x41a00000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4),
                 param_1 + iVar1 * 0x28 + 0x78);
  }
  return;
}

