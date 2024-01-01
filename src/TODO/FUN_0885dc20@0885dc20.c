#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885dc20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x20c) + 0x16c);
  iVar3 = 0;
  if (0x19 < iVar4) {
    if (0x1f < iVar4) {
      iVar2 = *(int *)(param_1 + 0x20c);
      goto LAB_0885dc84;
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    if (iVar2 == iVar4 + -0x1a) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x20c);
LAB_0885dc84:
  iVar1 = *(int *)(iVar2 + 0x164);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      iVar3 = *(int *)(iVar2 + 0x160);
    }
  }
  else if (iVar1 < 4) {
    iVar3 = *(int *)(iVar2 + 0x160);
  }
  if (((iVar3 != 0) && (iVar4 = FUN_0885db3c(param_1,iVar4), iVar4 != 0)) &&
     (*(int *)(iVar3 + 0x170) != 0)) {
    FUN_08854e78(*(int *)(iVar3 + 0x170),0x14,1);
  }
  FUN_08868bf4(param_1);
  if ((*(char *)(param_1 + 0x6f5) != '\0') && (*(char *)(param_1 + 0x4c1) != '\0')) {
    FUN_08886fd0(param_1 + 0x434);
    iVar3 = FUN_08887a90(param_1 + 0x434);
    fVar5 = (float)iVar3;
    if (iVar3 < 0) {
      fVar5 = fVar5 + 4.294967e+09;
    }
    FUN_08887ae4(fVar5,param_1 + 0x434);
  }
  return;
}

