#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a21434(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [4];
  
  iVar1 = FUN_08a215e0(param_1,local_20);
  uVar3 = 0xffffffff;
  if ((-1 < iVar1) && (*(uint *)(local_20[0] + 0x10) <= param_2)) {
    iVar1 = local_20[0] + (param_2 - *(uint *)(local_20[0] + 0x10)) * 0x60;
    if (param_2 <= *(uint *)(local_20[0] + 0x14)) {
      iVar2 = *(int *)(iVar1 + 0x20);
      uVar3 = 0xffffffff;
      *param_3 = iVar1 + 0x20;
      if (iVar2 == -1) {
        if (*(int *)(iVar1 + 0x2c) != -1) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

