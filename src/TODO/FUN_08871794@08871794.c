#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08871794(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar1 = FUN_0886002c();
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x16c) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x16c) & 2) == 0) {
        uVar2 = *(uint *)(param_1 + 0x16c);
      }
      else {
        iVar1 = FUN_088886fc(param_1 + 0x434);
        if (iVar1 != 0) {
          FUN_088706f0(param_1,0xc,0);
          return 1;
        }
        uVar2 = *(uint *)(param_1 + 0x16c);
      }
      if (((uVar2 & 4) == 0) || (iVar1 = FUN_088886fc(param_1 + 0x434), iVar1 == 0)) {
        if ((param_2 == '\0') && (iVar1 = FUN_088602ec(param_1,1), iVar1 != 0)) {
          FUN_088706f0(param_1,0x17,0);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        FUN_088706f0(param_1,2,0);
      }
    }
    else {
      FUN_088706f0(param_1,1,0);
    }
  }
  else {
    FUN_088715b0(param_1,0);
  }
  return uVar3;
}

