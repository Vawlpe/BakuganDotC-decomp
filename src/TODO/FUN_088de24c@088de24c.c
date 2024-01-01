#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088de24c(int param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x33c) < 1) {
    *(float *)(param_1 + 0x250) =
         *(float *)(param_1 + 0x250) + (2.3 - *(float *)(param_1 + 0x250)) * 0.2;
  }
  else {
    *(int *)(param_1 + 0x33c) = *(int *)(param_1 + 0x33c) + -1;
    *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) * 0.8;
  }
  if ((*(uint *)(param_1 + 0x144) & 2) == 0) {
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x250);
    local_20 = *(undefined4 *)(param_1 + 0x80);
    uStack_1c = *(undefined4 *)(param_1 + 0x84);
    uStack_18 = *(undefined4 *)(param_1 + 0x88);
    uStack_14 = *(undefined4 *)(param_1 + 0x8c);
    FUN_088de210(param_1,&local_20);
    if ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else {
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
    }
  }
  return;
}

