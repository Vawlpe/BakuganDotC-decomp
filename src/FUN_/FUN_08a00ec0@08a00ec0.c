#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a00ec0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_089c9da8();
  iVar2 = FUN_089c9da8(param_1);
  uVar3 = FUN_089c9da8(param_1);
  iVar4 = FUN_089c9da8(param_1);
  local_30 = FUN_089c9e3c(param_1);
  local_2c = FUN_089c9e3c(param_1);
  local_28 = FUN_089c9e3c(param_1);
  uVar6 = iVar1 - 1;
  if (uVar6 < 6) {
    if (iVar1 == 1) {
      FUN_089c1f1c(local_30,local_2c,local_28,*(undefined4 *)(param_1 + 0x4c));
      if (iVar2 < 0) {
        FUN_089c1f8c(*(undefined4 *)(param_1 + 0x4c),uVar3,iVar4 != 0,0);
        return 0;
      }
      FUN_089c2114(*(undefined4 *)(param_1 + 0x4c),iVar2,uVar3,iVar4 != 0,1);
      return 0;
    }
    if (uVar6 == 1) {
      iVar1 = FUN_089c59d4();
      if (iVar1 == 0) {
        return 2;
      }
      uVar3 = FUN_089c59f0();
      iVar1 = FUN_089c5e0c(uVar3,iVar2);
      if (iVar1 == 0) {
        return 2;
      }
      return 0;
    }
    if (uVar6 == 2) {
      iVar1 = FUN_089c59d4();
      if (iVar1 == 0) {
        return 2;
      }
      uVar3 = FUN_089c59f0();
      iVar1 = FUN_089c5f18(uVar3,0xffffffff);
      if (iVar1 == 0) {
        return 2;
      }
      return 0;
    }
    if (uVar6 == 3) {
      iVar1 = FUN_089c59d4();
      if (iVar1 == 0) {
        return 2;
      }
      uVar3 = FUN_089c59f0();
      iVar1 = FUN_089c6120(uVar3,iVar2);
      if (iVar1 != 0) {
        return 0;
      }
      uVar3 = FUN_089c59f0();
      FUN_089c69a4(uVar3);
      return 2;
    }
    if (uVar6 == 4) {
      iVar1 = FUN_089bffd4();
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = FUN_089bfff0();
      FUN_089c004c(0,uVar3,&local_30,0);
      return 0;
    }
    if (uVar6 == 5) {
      iVar1 = FUN_089c59d4();
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar2 < 0) {
        uVar5 = FUN_089c59f0();
        iVar1 = FUN_089c6914(uVar5,uVar3);
        if (iVar1 == 0) {
          return 0;
        }
        return 2;
      }
      uVar5 = FUN_089c59f0();
      iVar1 = FUN_089c64c0(uVar5,iVar2,uVar3);
      if (iVar1 == 0) {
        return 0;
      }
      return 2;
    }
  }
  if (iVar2 < 0) {
    FUN_089c207c(*(undefined4 *)(param_1 + 0x4c),uVar3);
  }
  else {
    FUN_089c2234(*(undefined4 *)(param_1 + 0x4c),iVar2,uVar3);
  }
  return 0;
}

