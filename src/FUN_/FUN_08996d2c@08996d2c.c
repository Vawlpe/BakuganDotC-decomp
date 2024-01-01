#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08996d2c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af50c4;
  FUN_089e2910(param_1 + 0x1f10);
  *(undefined *)(param_1 + 0x110c) = *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  FUN_08996774(param_1);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x178,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac0e60 = uVar2;
  memset_jak(uVar2,0,8);
  FUN_08909df4(param_1,0);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar3 = FUN_089edb58();
  if (iVar3 == 0) {
    FUN_089eda24(0);
    iVar3 = FUN_089edb80();
    *(undefined4 *)(iVar3 + 0x10) = 0x469c4000;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *DAT_08ac5934 = 0;
  DAT_08ac5934[1] = 0;
  DAT_08ac5934[2] = 0;
  DAT_08ac5934[3] = 0x3f800000;
  FUN_0880d308();
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_08996bc0(param_1);
  FUN_0890a560(param_1);
  FUN_089a3928();
  return param_1;
}

