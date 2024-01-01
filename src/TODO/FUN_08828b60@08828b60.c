#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08828b60(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x1d0,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    FUN_088289e0(iVar4,param_1);
    iVar5 = iVar4;
  }
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *(undefined4 *)(iVar5 + 0x60) = *param_2;
  *(undefined4 *)(iVar5 + 100) = uVar3;
  *(undefined4 *)(iVar5 + 0x68) = uVar1;
  *(undefined4 *)(iVar5 + 0x6c) = uVar2;
  FUN_089f5194(DAT_08b00830,iVar5);
  *(undefined4 *)(iVar5 + 0x188) = DAT_08b00830;
  (**(code **)(*(int *)(iVar5 + 0x14) + 0x14))(iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x10));
  return iVar5;
}

