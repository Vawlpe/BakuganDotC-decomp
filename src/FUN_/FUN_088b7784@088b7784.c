#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_088b7784(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_08ac58c4 + 4);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x26 < iVar1) {
    iVar1 = 0x26;
  }
  return &UNK_08a860c4 + (iVar1 * 5 + param_1) * 0xc;
}

