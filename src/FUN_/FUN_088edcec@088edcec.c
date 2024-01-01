#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088edcec(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(param_1 + 0x30) + (param_2 & 0xff) * 100;
  param_3 = param_3 & 0xffff;
  if ((*(int *)(iVar3 + 0x30) != 0) && (param_3 != 0)) {
    uVar2 = *(uint *)(iVar3 + 0x38);
    if (param_3 == 0) {
      fVar4 = (float)(param_3 << 0xc) - 0.5;
    }
    else {
      fVar4 = (float)(param_3 << 0xc) + 0.5;
    }
    uVar1 = FUN_08a0d21c(uVar2 << 0xc,uVar2 >> 0x14 | ((int)uVar2 >> 0x1f) << 0xc,(int)fVar4,
                         (int)fVar4 >> 0x1f);
    *(undefined4 *)(iVar3 + 0x38) = uVar1;
  }
  return;
}

