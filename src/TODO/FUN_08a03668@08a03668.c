#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03668(uint param_1)

{
  int iVar1;
  undefined auStack_20 [4];
  
  if (DAT_08af11dc == 0) {
    FUN_08a0351c();
  }
  iVar1 = 0;
  if ((param_1 & 0xf) != 0) {
    iVar1 = 0x10 - (param_1 & 0xf);
  }
  iVar1 = param_1 + iVar1;
  if (*(uint *)(DAT_08af11dc + 8) < iVar1 + *(int *)(DAT_08af11dc + 0xc) + 0x40U) {
    FUN_08a035cc(iVar1);
  }
  FUN_08a0356c(iVar1,auStack_20);
  return;
}

