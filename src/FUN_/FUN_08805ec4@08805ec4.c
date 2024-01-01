#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08805ec4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xb0) + 1;
  *(int *)(param_1 + 0xb0) = iVar2;
  if (6 < iVar2) {
    iVar2 = FUN_089c59d4();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    else {
      uVar1 = FUN_089c59f0();
      FUN_089c6350(uVar1,0x2c00001,0,0);
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  return;
}

