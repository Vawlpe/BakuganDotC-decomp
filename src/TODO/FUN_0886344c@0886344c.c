#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886344c(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 300);
  if (iVar1 != 0) {
    if (param_2 != '\0') {
      FUN_089c207c(iVar1,0xffffffff);
      return;
    }
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffefffff;
    FUN_089c207c(iVar1,0x2001f5);
    FUN_089c207c(*(undefined4 *)(param_1 + 300),0x2001f7);
  }
  return;
}

