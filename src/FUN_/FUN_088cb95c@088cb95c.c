#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cb95c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xf0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08817708(iVar2,0,param_2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  return;
}

