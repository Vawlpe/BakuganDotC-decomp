#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fa40c(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 10) == '\0') {
    iVar1 = zz_sceIoReadAsync(param_1[5],param_1[9],param_1[10]);
    param_1[8] = iVar1;
    if (iVar1 == 0) {
      *(undefined *)((int)param_1 + 9) = 1;
    }
  }
  else {
    *(undefined *)((int)param_1 + 10) = 0;
    if ((int)param_1[8] < 0) {
      if (param_1[8] == -0x7ffefffb) {
        *(undefined *)((int)param_1 + 0x4a) = 0;
        *(undefined *)((int)param_1 + 0xe2) = 0;
        *(undefined *)(param_1 + 0x3b) = 1;
        *param_1 = 6;
      }
    }
    else {
      zz_sceKernelDcacheWritebackInvalidateRange(param_1[9],param_1[10]);
      *(undefined *)((int)param_1 + 0xe2) = 1;
      *param_1 = 6;
    }
  }
  return;
}

