#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fe888(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x130,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  uVar3 = param_4;
  if (iVar4 != 0) {
    FUN_089fe604(iVar4);
    *(undefined4 *)(iVar4 + 0xa0) = param_4;
    iVar5 = iVar4;
    uVar3 = uRam000000a0;
  }
  uRam000000a0 = uVar3;
  *(undefined4 *)(iVar5 + 0xf0) = param_1;
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  *(undefined4 *)(iVar5 + 0xb0) = *param_3;
  *(undefined4 *)(iVar5 + 0xb4) = uVar3;
  *(undefined4 *)(iVar5 + 0xb8) = uVar1;
  *(undefined4 *)(iVar5 + 0xbc) = uVar2;
  FUN_089fef04(iVar5,param_2);
  (**(code **)(*(int *)(iVar5 + 0x74) + 0x3c))(iVar5 + *(short *)(*(int *)(iVar5 + 0x74) + 0x38));
  return iVar5;
}

