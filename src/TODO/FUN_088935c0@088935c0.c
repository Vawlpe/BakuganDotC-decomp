#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088935c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar3 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x14);
    iVar2 = (**(code **)(iVar2 + 0x6c))(*(int *)(param_1 + 0x1a0) + (int)*(short *)(iVar2 + 0x68));
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x1a0);
    }
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(iVar3 + 0x670) == 0) {
      iVar2 = *(int *)(param_1 + 0x98);
    }
    else {
      *(int *)(param_1 + 0x9c) = *(int *)(iVar3 + 0x670);
      iVar2 = *(int *)(param_1 + 0x98);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x98);
  }
  uVar1 = (**(code **)(iVar2 + 0x14))(param_1 + 0x50 + (int)*(short *)(iVar2 + 0x10));
  return uVar1;
}

