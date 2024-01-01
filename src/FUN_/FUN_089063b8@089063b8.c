#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089063b8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_2 < 2) {
    iVar1 = *(int *)(&DAT_08ac0e54 + param_2 * 4);
  }
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  return iVar1;
}

