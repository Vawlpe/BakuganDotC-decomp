#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_0889d4e4(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 << 6;
  if (param_1 == -1) {
    iVar1 = DAT_08abd488 << 6;
    param_1 = DAT_08abd488;
  }
  return &UNK_08a81e60 + iVar1 + param_1 * -4;
}

