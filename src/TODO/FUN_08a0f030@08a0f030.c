#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0f030(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar4 = uVar1 >> 0x17 & 0xff;
  param_2[1] = uVar1 >> 0x1f;
  uVar5 = uVar1 & 0x7fffff;
  if (uVar4 == 0) {
    uVar2 = 2;
    if (uVar5 != 0) {
      uVar5 = uVar5 << 7;
      iVar3 = -0x7e;
      param_2[2] = 0xffffff82;
      *param_2 = 3;
      if (uVar5 < 0x40000000) {
        do {
          uVar5 = uVar5 << 1;
          iVar3 = iVar3 + -1;
        } while (uVar5 < 0x40000000);
        param_2[2] = iVar3;
      }
LAB_08a0f09c:
      param_2[3] = uVar5;
      return;
    }
  }
  else if (uVar4 == 0xff) {
    if (uVar5 != 0) {
      if ((uVar1 & 0x100000) == 0) {
        *param_2 = 0;
      }
      else {
        *param_2 = 1;
      }
      goto LAB_08a0f09c;
    }
    uVar2 = 4;
  }
  else {
    param_2[3] = uVar5 << 7 | 0x40000000;
    uVar2 = 3;
    param_2[2] = uVar4 - 0x7f;
  }
  *param_2 = uVar2;
  return;
}

