#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08971bb0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x02') {
    if (-1 < cVar1) {
      if ('\0' < cVar1) {
        FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0xbaa),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x94));
        return;
      }
      FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0xba9),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90));
      return;
    }
  }
  else {
    if (cVar1 < '\x03') {
      FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0xbab),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
      return;
    }
    if (cVar1 < '\x04') {
      FUN_08970eac(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c),
                   (int)*(char *)(param_1 + 0xbac));
    }
  }
  return;
}

