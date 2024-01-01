#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_088d4090(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 << 6;
  if (param_1 == -1) {
    iVar1 = DAT_08abef9c << 6;
    param_1 = DAT_08abef9c;
  }
  return &UNK_08a95a20 + iVar1 + param_1 * -4;
}

