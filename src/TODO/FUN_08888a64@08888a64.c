#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08888a64(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (9 < param_2) {
    param_2 = 9;
  }
  param_1[0x2b] = param_2;
  iVar2 = FUN_08886d68(param_1);
  param_1[0x25] = iVar2;
  iVar1 = *param_1;
  param_1[0x26] = iVar2;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x554) != 0)) {
    FUN_0888b810(param_1[0x25],*(undefined4 *)(iVar1 + 0x554));
  }
  return;
}

