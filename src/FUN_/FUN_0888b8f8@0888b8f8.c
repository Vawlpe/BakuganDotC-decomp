#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888b8f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((1 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x8c) < 3)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14),
     iVar1 = (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x68)),
     iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

