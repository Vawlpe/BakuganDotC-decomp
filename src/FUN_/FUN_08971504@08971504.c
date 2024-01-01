#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08971504(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)*(char *)(param_1 + 0x74);
  if ((iVar1 < 0) || (3 < iVar1)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + (iVar1 + 0x2c) * 4);
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + (iVar1 + 0x1f) * 4);
  }
  FUN_089a52a0(uVar2);
  return;
}

