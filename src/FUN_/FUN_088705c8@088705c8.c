#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088705c8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = param_1;
  do {
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + 0x14) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 4);
  *(undefined4 *)(param_1 + 0x10) = 1;
  (**(code **)(iVar1 + 0x14))(param_1 + *(short *)(iVar1 + 0x10));
  return;
}

