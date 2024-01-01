#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ee628(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    *(char *)(param_1 + 0x18) = param_3;
    return;
  }
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4), iVar1 != 0)) {
    if (param_3 != '\0') {
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      return;
    }
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  return;
}

