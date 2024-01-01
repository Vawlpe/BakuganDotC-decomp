#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0896941c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4ecc;
  FUN_08969168(param_1);
  FUN_0896933c(param_1);
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(0x1a4,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  else {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(0x31c,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  FUN_08909df4(param_1,1);
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
  iVar4 = 0;
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x2a84) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 2);
  DAT_08ac0e70 = 1;
  return param_1;
}

