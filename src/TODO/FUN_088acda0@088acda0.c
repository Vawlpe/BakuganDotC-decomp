#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088acda0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x218);
  uVar1 = 0;
  if (iVar2 < 0x6c) {
    if (iVar2 < 0x3c) {
      if (iVar2 < 0x1e) {
        if (0x19 < iVar2) {
          uVar1 = 1;
        }
      }
      else if (0x2c < iVar2) {
                    // WARNING: Could not recover jumptable at 0x088acdf8. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar1 = (**(code **)(&DAT_08a84ad0 + (iVar2 + -0x2d) * 4))();
        return uVar1;
      }
    }
    else if (iVar2 < 0x57) {
      if (0x55 < iVar2) {
        uVar1 = 1;
      }
    }
    else if (iVar2 == 0x5a) {
      uVar1 = 1;
    }
  }
  else {
    if (iVar2 < 0x73) {
      if (0x6d < iVar2) {
        if (iVar2 < 0x72) {
          return 0;
        }
        return 1;
      }
    }
    else if (iVar2 != 0x8b) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

