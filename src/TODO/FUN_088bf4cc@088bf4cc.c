#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_088bf4cc(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c4);
  param_2 = param_2 & 0xffff;
  if (iVar1 == 0) {
    return (&PTR_DAT_08abe908)[DAT_08b00bd4] + param_2 * 8;
  }
  if (param_2 < *(uint *)(iVar1 + 4)) {
    return (undefined *)(iVar1 + param_2 * 8 + 8);
  }
  return &DAT_08a92c6c;
}

