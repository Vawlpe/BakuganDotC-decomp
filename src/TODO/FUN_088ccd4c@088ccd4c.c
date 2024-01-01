#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ccd4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined auStack_40 [16];
  undefined auStack_30 [16];
  
  iVar1 = FUN_088e1948();
  if (*(int *)(iVar1 + 0x140) == 8) {
    iVar1 = *(int *)(iVar1 + 0x4d0);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    }
  }
  else {
    FUN_088cc858(param_1);
    FUN_088cc978(param_1);
    FUN_088ccb44(param_1);
    FUN_088cccc4(param_1,auStack_40,auStack_30);
    FUN_088ccfc0(0x3f4ccccd,param_1,param_2,param_3,auStack_40,auStack_30);
  }
  return;
}

