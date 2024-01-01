#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ad2d4(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x74);
  iVar2 = 0x1f;
  if ((uint)(int)cVar1 < 7) {
    iVar2 = cVar1 * 4 >> 2;
    switch(cVar1) {
    default:
      iVar2 = iVar2 + 0x1f;
      break;
    case '\x04':
    case '\x05':
    case '\x06':
      iVar2 = iVar2 + 0x2e;
    }
  }
  FUN_089a52a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4));
  return;
}

