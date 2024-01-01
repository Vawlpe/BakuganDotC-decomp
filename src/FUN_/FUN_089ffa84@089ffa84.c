#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089ffa84(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 + 0x10;
  param_1[6] = (int)&DAT_08af59cc;
  if ((uVar4 & 0xf) != 0) {
    uVar4 = (uVar4 - (uVar4 & 0xf)) + 0x10;
  }
  iVar5 = param_3 * uVar4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(param_3 << 2,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[4] = iVar2;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(iVar5,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[3] = iVar2;
  memset_jak(iVar2,0,iVar5);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar2 = 0;
  if (iVar3 != 0) {
    FUN_08a015e0(iVar3,param_1[3],iVar5,0x10);
    iVar2 = iVar3;
  }
  param_1[5] = iVar2;
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

