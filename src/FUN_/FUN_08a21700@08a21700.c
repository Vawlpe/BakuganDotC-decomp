#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a21700(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_20 [4];
  
  uVar2 = 0xffffffff;
  local_20[0] = 0;
  if (param_2 < 0x80) {
    iVar1 = FUN_08a21670(param_1,local_20);
    uVar2 = 0xffffffff;
    if ((-1 < iVar1) && (*(int *)(param_2 * 4 + local_20[0] + 0x20) != -1)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

