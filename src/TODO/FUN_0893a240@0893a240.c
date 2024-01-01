#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893a240(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x5ee) == '\x02') {
      FUN_089f4a90((float)(*(byte *)(param_1 + 0x636) / 5),
                   (float)((uint)*(byte *)(param_1 + 0x636) % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_08939b58(param_1,0,6);
    }
  }
  else if (*(char *)(param_1 + 0x5ee) == '\x02') {
    FUN_08939b58(param_1,param_2,6);
  }
  return;
}

