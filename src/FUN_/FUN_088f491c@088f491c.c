#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f491c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(*(int *)(param_1 + iVar1) + 0x14);
    (**(code **)(iVar2 + 0x84))(*(int *)(param_1 + iVar1) + (int)*(short *)(iVar2 + 0x80));
    uVar3 = uVar3 + 1 & 0xff;
    iVar1 = uVar3 << 2;
  } while (uVar3 < *(byte *)(param_1 + 0xc9));
  return;
}

