#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0f3cc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar4 = uVar1 >> 0x14 & 0x7ff;
  uVar5 = *param_1;
  uVar6 = uVar1 & 0xfffff;
  param_2[1] = uVar1 >> 0x1f;
  if (uVar4 == 0) {
    if ((uVar5 | uVar6) != 0) {
      uVar6 = uVar6 << 8 | uVar5 >> 0x18;
      uVar5 = uVar5 << 8;
      param_2[2] = 0xfffffc02;
      *param_2 = 3;
      if (uVar6 < 0x10000000) {
        iVar3 = -0x3fe;
        do {
          uVar6 = uVar6 << 1 | uVar5 >> 0x1f;
          uVar5 = uVar5 << 1;
          iVar3 = iVar3 + -1;
        } while (uVar6 < 0x10000000);
        param_2[2] = iVar3;
      }
LAB_08a0f468:
      param_2[4] = uVar5;
      param_2[5] = uVar6;
      return;
    }
    uVar2 = 2;
  }
  else if (uVar4 == 0x7ff) {
    uVar2 = 4;
    if ((uVar5 | uVar6) != 0) {
      if ((uVar1 & 0x80000) == 0) {
        *param_2 = 0;
      }
      else {
        *param_2 = 1;
      }
      goto LAB_08a0f468;
    }
  }
  else {
    param_2[4] = uVar5 << 8;
    param_2[5] = uVar6 << 8 | uVar5 >> 0x18 | 0x10000000;
    uVar2 = 3;
    param_2[2] = uVar4 - 0x3ff;
  }
  *param_2 = uVar2;
  return;
}

