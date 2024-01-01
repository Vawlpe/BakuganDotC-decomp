#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08886c58(int param_1,int *param_2)

{
  int iVar1;
  
  param_2[0x25] = param_1;
  iVar1 = *param_2;
  param_2[0x26] = param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x554) != 0)) {
    FUN_0888b810(param_2[0x25],*(undefined4 *)(iVar1 + 0x554));
  }
  return;
}

