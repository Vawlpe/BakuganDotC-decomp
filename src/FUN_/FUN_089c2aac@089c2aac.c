#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c2aac(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 2)) {
    iVar1 = *(int *)(&DAT_08ac5604 + param_1 * 4);
    if (iVar1 != 0) {
      FUN_089c31c8(iVar1,3);
      *(int *)(&DAT_08ac5604 + param_1 * 4) = 0;
    }
    FUN_089bbd80(param_1 + 9);
  }
  return;
}

