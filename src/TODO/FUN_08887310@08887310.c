#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08887310(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (9 < iVar1) {
    iVar1 = 9;
  }
  return (&DAT_08a6f6ec)[iVar1];
}

