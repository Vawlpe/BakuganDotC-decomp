#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895e1bc(int param_1,uint param_2,byte param_3)

{
  undefined uVar1;
  
  param_1 = param_1 + (param_2 & 0xff) * 0xc;
  if ((*(byte *)(param_1 + 0x4f36) | param_3) != 0) {
    memset_jak(param_1 + 0x4f34,0,0xc);
    *(byte *)(param_1 + 0x4f36) = param_3;
    *(undefined *)(param_1 + 0x4f34) = 1;
    if (*(char *)(param_1 + 0x4f36) != '\0') {
      uVar1 = FUN_0892bc18(param_3);
      *(undefined *)(param_1 + 0x4f37) = uVar1;
    }
  }
  return;
}

