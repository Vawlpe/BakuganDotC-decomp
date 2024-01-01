#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_0881aeb0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"CONetPlay",2);
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  param_1[1] = 0;
  *(undefined *)((int)param_1 + 0xd) = 0;
  *(undefined *)((int)param_1 + 0xe) = 0;
  param_1[5] = 0;
  *(undefined *)((int)param_1 + 0xb3) = 0;
  memset_jak(param_1 + 6,0,0x7c);
  *(undefined *)(param_1 + 0x2e) = 0;
  *(undefined *)((int)param_1 + 0xb9) = 0;
  param_1[0x2f] = 0;
  param_1[4] = -1;
  param_1[0x30] = 0;
  *(undefined *)((int)param_1 + 0xdd) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x50,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089cdf1c(iVar2);
    iVar3 = iVar2;
  }
  param_1[0x39] = iVar3;
  FUN_089cdfe8(iVar3,0);
  *(undefined *)(param_1[0x39] + 0x39) = 0;
  param_1[0x3a] = -1;
  *(undefined *)((int)param_1 + 0xde) = 0;
  param_1[0x38] = 0;
  FUN_0880d360(0xffffffff);
  param_1[0x3b] = 0;
  return param_1;
}

