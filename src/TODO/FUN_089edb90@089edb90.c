#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089edb90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_08ac5da0 != (int *)0x0) {
    if (DAT_08ac5da0[1] != *DAT_08ac5da0) {
      iVar1 = DAT_08ac5da0[1];
    }
    if (param_1 == 0) {
      DAT_08ac5da0[1] = *DAT_08ac5da0;
      return iVar1;
    }
    DAT_08ac5da0[1] = param_1;
  }
  return iVar1;
}

