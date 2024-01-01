#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1ee68(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_08afcf24;
  uVar1 = param_2;
  if ((param_1 != 1) && (uVar2 = 0, uVar1 = DAT_08afcf24, param_1 == 4)) {
    uVar2 = DAT_08afcf28;
    DAT_08afcf28 = param_2;
  }
  DAT_08afcf24 = uVar1;
  return uVar2;
}

