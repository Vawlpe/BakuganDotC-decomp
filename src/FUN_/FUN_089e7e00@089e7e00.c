#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e7e00(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  param_2[9] = param_3;
  param_2[5] = param_1;
  param_2[3] = param_4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(param_3 * 0x30,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *param_2 = iVar2;
  param_2[1] = iVar2 + param_3 * 0x10;
  param_2[2] = iVar2 + param_3 * 0x20;
  param_2[10] = 1;
  param_2[6] = 0x3dcccccd;
  param_2[7] = 0x3f3ae148;
  param_2[8] = 0x3e99999a;
  *(undefined *)(param_2 + 0xb) = 0;
  *(undefined *)((int)param_2 + 0x2d) = 0;
  *(undefined *)((int)param_2 + 0x2e) = 0;
  if (param_4 == 0) {
    FUN_089e7fdc(param_2,&DAT_08b007d0);
  }
  else {
    FUN_089e7fdc(param_2,param_4);
  }
  *(undefined *)(param_2 + 0xd) = 1;
  return;
}

