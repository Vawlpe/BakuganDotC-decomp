#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a281dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_60 [12];
  int local_54;
  undefined4 local_4c;
  int local_48;
  short local_42;
  undefined4 local_40;
  
  if ((param_1 == 0) || (param_5 == 0)) {
    return 0;
  }
  iVar1 = FUN_08a27f68(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_08a28108(param_2,auStack_60);
  iVar1 = local_54 + -0x36;
  if (local_54 + -0x36 < 0) {
    iVar1 = local_54 + -0x33;
  }
  if (0 < iVar1 >> 2) {
    uVar2 = 0x10;
    if (0x10 < iVar1 >> 2) {
      uVar2 = 0x100;
    }
    if (local_42 < 0x10) {
      FUN_08a129e0(1,param_5);
      FUN_08a11f10(0,3,0,uVar2,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
      uVar2 = FUN_08a27f90((int)local_42,local_40);
      if (local_48 < -local_48) {
        local_48 = -local_48;
      }
      FUN_08a12984(1,param_5);
      FUN_08a11f10(0,uVar2,0,local_4c,local_48,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
      return 1;
    }
  }
  uVar2 = FUN_08a27f90((int)local_42,local_40);
  if (local_48 < -local_48) {
    local_48 = -local_48;
  }
  FUN_08a12984(1,param_5);
  FUN_08a11f10(0,uVar2,0,local_4c,local_48,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
  return 1;
}

