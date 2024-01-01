#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089986fc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  
  local_18 = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = local_18;
  if (iVar4 != 0) {
    FUN_089de2e4(iVar4,"fz_maruchojet_02.gmo",0);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x226c) = iVar5;
  *(undefined *)(iVar5 + 0xbc) = 1;
  local_30 = 0x3ecccccd;
  local_2c = 0x3ecccccd;
  local_28 = 0x3ecccccd;
  local_24 = 0x3f800000;
  FUN_089e0344(0x41000000,*(undefined4 *)(param_1 + 0x226c),&local_30,0);
  *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x24) = 0xc1a00000;
  iVar5 = *(int *)(param_1 + 0x226c);
  iVar4 = *(int *)(iVar5 + 0x130);
  uVar3 = *(undefined4 *)(iVar5 + 0x24);
  uVar1 = *(undefined4 *)(iVar5 + 0x28);
  uVar2 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x6c) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
  *(undefined4 *)(iVar5 + 0xa8) = 0x3f19999a;
  *(undefined4 *)(iVar5 + 0x94) = 0x3f19999a;
  *(undefined4 *)(iVar5 + 0x80) = 0x3f19999a;
  iVar5 = *(int *)(*(int *)(param_1 + 0x226c) + 0x14);
  (**(code **)(iVar5 + 0x34))(0x3fc00000,*(int *)(param_1 + 0x226c) + (int)*(short *)(iVar5 + 0x30))
  ;
  *(undefined4 *)(param_1 + 0x232c) = 0x3f19999a;
  return;
}

