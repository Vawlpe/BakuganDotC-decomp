#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c5b6c(float param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_1 * 127.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0x7f < iVar1) {
    iVar1 = 0x7f;
  }
  if (DAT_08ac5870 != 0) {
    FUN_089bb728(*(undefined4 *)(param_2 + 0x8bd4));
    *(char *)(DAT_08ac5870 + 4) = (char)iVar1;
    *(char *)(DAT_08ac5870 + 6) = (char)iVar1;
    FUN_089bb790(*(undefined4 *)(param_2 + 0x8bd4));
  }
  *(float *)(param_2 + 0x8be0) = param_1;
  return;
}

