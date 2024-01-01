#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089bc84c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined *)(param_1 + 1) = 1;
  *(undefined *)((int)param_1 + 0x16) = 0;
  *(undefined *)((int)param_1 + 0x17) = 0;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)((int)param_1 + 0x19) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined *)(param_1 + 5) = 0;
  *(undefined *)((int)param_1 + 0x15) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08a2d1f0(iVar2,4);
    iVar3 = iVar2;
  }
  param_1[10] = iVar3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08a2d1f0(iVar2,4);
    iVar3 = iVar2;
  }
  param_1[0xb] = iVar3;
  param_1[9] = 0x78;
  return param_1;
}

