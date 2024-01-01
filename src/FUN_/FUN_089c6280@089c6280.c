#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c6280(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_2 & 0xfffff;
  bVar1 = false;
  uVar3 = param_2 >> 0x1b;
  if (param_2 >> 0x1b == 0) {
    iVar4 = param_1;
    uVar5 = 0;
    do {
      uVar3 = uVar5;
      if (*(int *)(iVar4 + 0x9fc) == (int)(param_2 & 0x7f00000) >> 0x14) break;
      uVar5 = uVar3 + 1;
      iVar4 = iVar4 + 0x430;
      uVar3 = 0xffffffff;
    } while ((int)uVar5 < 0x20);
  }
  if ((((-1 < (int)uVar3) && ((int)uVar3 < 0x20)) &&
      (param_1 = param_1 + uVar3 * 0x430, -1 < *(int *)(param_1 + 0x9e0))) &&
     (((int)*(short *)(param_1 + 0x9f4) <= (int)uVar2 &&
      ((int)uVar2 <= (int)*(short *)(param_1 + 0x9f6))))) {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar3;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar2;
    }
  }
  return;
}

