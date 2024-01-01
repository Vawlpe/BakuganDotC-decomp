#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088633b8(int param_1,char param_2)

{
  int iVar1;
  
  *(char *)(*(int *)(param_1 + 0x168) + 0xc) = param_2;
  if (param_2 == '\0') {
    if ((*(char *)(param_1 + 0x158) == '\0') && (iVar1 = *(int *)(param_1 + 0x20c), iVar1 != 0)) {
      *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) & 0xfffffffe;
      *(undefined4 *)(iVar1 + 0x148) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_08863390(param_1);
    *(undefined4 *)(param_1 + 0x16c) = 0;
    iVar1 = *(int *)(param_1 + 0x20c);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
      *(undefined4 *)(iVar1 + 0x148) = 0;
      return;
    }
  }
  return;
}

