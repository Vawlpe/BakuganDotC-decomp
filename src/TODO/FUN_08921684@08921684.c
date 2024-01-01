#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08921684(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      FUN_0891ba00(param_1);
      FUN_0891f2a8(param_1,*(undefined *)(param_1 + 0x2176));
    }
  }
  else if (cVar1 < '\x03') {
    iVar2 = FUN_0891bbc4(param_1);
    if (iVar2 == 1) {
      FUN_0891f2a8(param_1,0);
    }
    else {
      FUN_0891f2a8(param_1,1);
    }
  }
  return;
}

