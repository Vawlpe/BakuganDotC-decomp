#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08939524(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  memset_jak((undefined *)(param_1 + 0x630),0,4);
  memset_jak((undefined *)(param_1 + 0x634),0,4);
  if (*(char *)(param_1 + 0x5ee) == '\x02') {
    *(undefined2 *)(param_1 + 0x634) = 500;
    *(undefined *)(param_1 + 0x636) = 4;
    FUN_089a4b5c((undefined *)(param_1 + 0x630),*(undefined2 *)(param_1 + 0x634),4,0xff);
    *(undefined *)(param_1 + 0x637) = 0;
    uVar1 = (uint)*(byte *)(param_1 + 0x637);
    if (*(char *)(param_1 + uVar1 + 0x630) != -1) {
      do {
        uVar2 = uVar1 + 1;
        uVar1 = uVar2 & 0xff;
      } while (*(char *)(param_1 + uVar1 + 0x630) != -1);
      *(char *)(param_1 + 0x637) = (char)uVar2;
    }
  }
  return;
}

