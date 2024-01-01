#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892c180(char *param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*param_1 != '\0') {
    bVar1 = param_1[1];
    if (*(int *)(DAT_08ac5934 + 0x1c) == 0) {
      fVar2 = 16.0;
    }
    else {
      fVar2 = 8.0;
    }
    if (*(float *)(param_1 + 4) == fVar2) {
      *(undefined4 *)(param_1 + 4) = 0;
      param_1[1] = bVar1 ^ 1;
      bVar1 = param_1[1];
    }
    else {
      *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + 1.0;
    }
    if (bVar1 == 0) {
      local_30 = 0;
      local_2c = 0;
      local_28 = 0x43800000;
      local_24 = 0x41800000;
      FUN_089f4060(*(undefined4 *)(param_1 + 8),&local_30);
      return;
    }
    local_1c = 0;
    local_20 = 0x43000000;
    local_18 = 0x43800000;
    local_14 = 0x41800000;
    FUN_089f4060(*(undefined4 *)(param_1 + 8),&local_20);
  }
  return;
}

