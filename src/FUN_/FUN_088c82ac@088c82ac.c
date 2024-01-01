#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c82ac(int param_1)

{
  int iVar1;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 < 2) {
    if ((-1 < iVar1) && (0 < iVar1)) {
      iVar1 = *(int *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
      *(float *)(param_1 + 100) =
           (*(float *)(iVar1 + 0x138) + *(float *)(iVar1 + 0x54) * (float)*(int *)(iVar1 + 0x13c)) -
           6.0;
      local_1c = 0;
      local_18 = 0x42000000;
      local_20 = (float)(((byte)(&DAT_08a93259)[*(int *)(param_1 + 0x170)] & 3) << 5);
      local_14 = 0x42000000;
      FUN_089f4060(param_1,&local_20);
      if (*(int *)(param_1 + 0x170) < 7) {
        *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x174);
        *(int *)(param_1 + 0x174) = iVar1 + 1;
        if (0x14 < iVar1) {
          *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
        }
      }
    }
  }
  else if (((2 < iVar1) && (iVar1 < 4)) && (0.0 < *(float *)(param_1 + 0xbc))) {
    *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) - 0.3;
  }
  return 0;
}

