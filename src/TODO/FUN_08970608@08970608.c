#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08970608(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 0xb9c) + 0.0625;
  uVar1 = 0;
  fVar6 = *(float *)(param_1 + 0xba4);
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0xba8) == '\0') {
      *(float *)(param_1 + 0xb9c) = fVar7;
      *(float *)(param_1 + 0xba0) = fVar6 - (1.0 - (fVar7 - 1.0) * (fVar7 - 1.0)) * 288.0;
      if (1.0 <= fVar7) {
        *(undefined4 *)(param_1 + 0xb9c) = 0;
        *(undefined4 *)(param_1 + 0xba0) = 0xc1800000;
        *(undefined4 *)(param_1 + 0xba4) = 0xc1800000;
        FUN_089582c4(2);
        *(char *)(param_1 + 0xba8) = *(char *)(param_1 + 0xba8) + '\x01';
      }
    }
    else {
      *(float *)(param_1 + 0xb9c) = fVar7;
      *(float *)(param_1 + 0xba0) = fVar6 + fVar7 * fVar7 * 16.0;
      if (1.0 <= fVar7) {
        uVar1 = 1;
        *(undefined4 *)(param_1 + 0xba0) = 0;
        *(undefined4 *)(param_1 + 0xba4) = 0;
      }
    }
  }
  else {
    *(float *)(param_1 + 0xb9c) = fVar7;
    *(float *)(param_1 + 0xba0) = fVar6 + fVar7 * fVar7 * 272.0;
    if (1.0 <= fVar7) {
      *(undefined4 *)(param_1 + 0xba0) = 0x43880000;
      uVar1 = 1;
    }
  }
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    iVar4 = iVar4 + 1;
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
    iVar3 = iVar3 + 4;
    *(float *)(*piVar5 + 100) = *(float *)(iVar2 + 0xa9c) + *(float *)(param_1 + 0xba0);
    iVar2 = iVar2 + 4;
  } while (iVar4 < 0x3a);
  return uVar1;
}

