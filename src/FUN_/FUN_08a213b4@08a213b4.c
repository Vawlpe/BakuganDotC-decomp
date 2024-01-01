#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a213b4(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20 [4];
  
  iVar1 = FUN_08a21550(param_1,local_20);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    if (*(uint *)(local_20[0] + 0x10) <= param_2) {
      iVar1 = local_20[0] + (param_2 - *(uint *)(local_20[0] + 0x10)) * 0x10;
      if (param_2 <= *(uint *)(local_20[0] + 0x14)) {
        iVar3 = *(int *)(iVar1 + 0x20);
        *param_3 = iVar1 + 0x20;
        uVar2 = 0xffffffff;
        if (iVar3 != -1) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

