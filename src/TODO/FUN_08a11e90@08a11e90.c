#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a11e90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  
  if (-1 < param_6 + -1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      param_2 = (param_2 + 1) / 2;
      param_3 = (param_3 + 1) / 2;
    } while (iVar2 != param_6);
  }
  uVar1 = param_4 * 8 - 1;
  uVar1 = uVar1 + param_1 * param_2 & ~uVar1;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 7;
  }
  return ((int)uVar1 >> 3) * ((param_5 - 1U) + param_3 & ~(param_5 - 1U));
}

