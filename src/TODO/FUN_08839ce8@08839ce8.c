#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08839ce8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(short *)(param_1 + param_3 * 2 + 0xb1e) == -1) && (0x30b < *(int *)(param_2 + 0x534))) {
    iVar2 = 1;
  }
  uVar1 = 0xffffffff;
  if (iVar2 != 0) {
    uVar1 = FUN_08838428(param_1,param_3,0);
  }
  FUN_08837e00(param_1,iVar2,uVar1,param_3);
  return;
}

