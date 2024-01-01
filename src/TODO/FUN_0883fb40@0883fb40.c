#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0883fb40(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (param_2 < 2) {
    if (-1 < param_2) {
      if (param_2 < 1) {
        iVar2 = FUN_0883f6e4(param_1,0x13);
        uVar1 = 3;
        if (((299 < iVar2) && (uVar1 = 2, 799 < iVar2)) && (uVar1 = 0, iVar2 < 1000)) {
          uVar1 = 1;
        }
      }
      else {
        iVar2 = FUN_0883f6e4(param_1,0x16);
        uVar1 = 3;
        if (((499 < iVar2) && (uVar1 = 2, 999 < iVar2)) && (uVar1 = 0, iVar2 < 0x5dc)) {
          uVar1 = 1;
        }
      }
    }
  }
  else if (param_2 < 3) {
    iVar2 = FUN_0883f6e4(param_1,0x1c);
    uVar1 = 0;
    if (((199 < iVar2) && (uVar1 = 1, 399 < iVar2)) && (uVar1 = 3, iVar2 < 700)) {
      uVar1 = 2;
    }
  }
  else if (param_2 < 4) {
    iVar2 = FUN_0883f6e4(param_1,0x1c);
    iVar3 = FUN_0883f6e4(param_1,0x13);
    iVar4 = FUN_0883f6e4(param_1,0x16);
    iVar2 = (iVar3 + iVar4) - iVar2;
    uVar1 = 3;
    if (((499 < iVar2) && (uVar1 = 2, 0x577 < iVar2)) && (uVar1 = 0, iVar2 < 0x8fc)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

