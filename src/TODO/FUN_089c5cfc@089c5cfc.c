#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c5cfc(float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)(param_1 * 4096.0);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (0x1000 < iVar2) {
    iVar2 = 0x1000;
  }
  *(int *)(param_2 + 0x10) = iVar2;
  *(float *)(param_2 + 0x8bd8) = param_1;
  iVar2 = FUN_089c4814(0);
  if (iVar2 != 0) {
    uVar1 = FUN_089c487c(0);
    FUN_089c4ce4(param_1,uVar1);
  }
  iVar2 = FUN_089c4814(1);
  if (iVar2 != 0) {
    uVar1 = FUN_089c487c(1);
    FUN_089c4ce4(param_1,uVar1);
  }
  return;
}

