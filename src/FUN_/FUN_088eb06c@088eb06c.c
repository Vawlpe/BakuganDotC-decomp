#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eb06c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x51);
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1 & 0xff;
    piVar1 = *(int **)(param_1 + uVar3 * 4 + 0x10);
    iVar2 = *piVar1;
    iVar2 = (**(code **)(iVar2 + 0x2c))((int)piVar1 + (int)*(short *)(iVar2 + 0x28));
    if (iVar2 == param_2) {
      FUN_088eac94(param_1,uVar3);
    }
  }
  return;
}

