#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c661c(float param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  FUN_089bb728(*(undefined4 *)(param_2 + 0x8bd4));
  if (*(int *)(param_2 + 8) == 5) {
    iVar3 = FUN_089c7250(param_2);
  }
  if (iVar3 < 0) goto LAB_089c66e0;
  iVar4 = param_2 + iVar3 * 4;
  *(undefined4 *)(iVar4 + 0x20) = 0xfffffffc;
  iVar3 = FUN_089c5c1c(param_2);
  iVar3 = (int)((float)iVar3 * param_1);
  if (iVar3 < 0) {
    uVar2 = 0;
LAB_089c66d8:
    *(undefined4 *)(iVar4 + 0x120) = uVar2;
  }
  else {
    iVar1 = FUN_089c5c1c(param_2);
    if (iVar1 < iVar3) {
      uVar2 = FUN_089c5c1c(param_2);
      goto LAB_089c66d8;
    }
    *(int *)(iVar4 + 0x120) = iVar3;
  }
  *(undefined4 *)(iVar4 + 0xa0) = param_3;
LAB_089c66e0:
  FUN_089bb790(*(undefined4 *)(param_2 + 0x8bd4));
  return;
}

