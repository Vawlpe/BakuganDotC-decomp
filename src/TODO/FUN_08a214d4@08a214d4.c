#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a214d4(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20 [4];
  
  iVar1 = FUN_08a21700();
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    iVar1 = FUN_08a21670(param_1,local_20);
    uVar2 = 0xffffffff;
    if (-1 < iVar1) {
      uVar2 = 0;
      *param_3 = param_1 + *(int *)(param_2 * 4 + local_20[0] + 0x20);
    }
  }
  return uVar2;
}

