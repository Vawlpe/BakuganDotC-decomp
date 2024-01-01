#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e60a8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = param_2 + 0x1b0;
  if (*(int *)(param_2 + 0x3e0) != 0) {
    iVar1 = param_2 + 0x3f0;
  }
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = param_1;
  FUN_08824828(DAT_08ac5c70,param_3,iVar1,&local_20);
  return;
}

