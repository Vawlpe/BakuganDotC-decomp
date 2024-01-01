#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08862780(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08860344();
  if (((iVar1 != 0) && (*(char *)(param_1 + 0x194) == '\0')) &&
     ((param_2 == 0 || (param_2 == iVar1)))) {
    uVar2 = atan2f(*(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28),
                   *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20));
    FUN_08862608(uVar2,0x3e99999a,0,param_1);
    return 1;
  }
  return 0;
}

