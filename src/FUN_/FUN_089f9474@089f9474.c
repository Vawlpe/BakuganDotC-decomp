#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089f9474(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  param_1[0x40] = &DAT_08af5894;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 9) = 0;
  *(undefined *)((int)param_1 + 10) = 0;
  *(undefined *)((int)param_1 + 0xb) = 0;
  *(undefined *)(param_1 + 3) = 1;
  *(undefined *)((int)param_1 + 0xd) = 1;
  *(undefined *)((int)param_1 + 0xe) = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"Mutex_CODiscSimple",2);
    iVar5 = iVar2;
  }
  param_1[0x11] = iVar5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar5 = 0;
  puVar4 = param_1;
  do {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x34,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar3 != 0) {
      FUN_089d8b38(iVar3,0);
      *(undefined **)(iVar3 + 0x20) = &DAT_08af7048;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      uVar1 = FUN_089d79a4(0x30000,1);
      *(undefined4 *)(iVar3 + 0x24) = uVar1;
      iVar2 = iVar3;
    }
    puVar4[0xe] = iVar2;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 < 2);
  param_1[0x39] = 1;
  param_1[0x3a] = 0;
  FUN_089fa1ac(param_1,0);
  *(undefined *)((int)param_1 + 0xed) = 0;
  *(undefined *)(param_1 + 0x38) = 0;
  *(undefined *)((int)param_1 + 0xe1) = 0;
  param_1[0x3c] = 0;
  *(undefined *)(param_1 + 0x3d) = 0;
  *(undefined *)((int)param_1 + 0xe2) = 0;
  return param_1;
}

