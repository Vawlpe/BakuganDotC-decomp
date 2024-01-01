#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088edc20(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30) + (param_2 & 0xff) * 100;
  if (*(int *)(iVar1 + 0x30) != 0) {
    fVar2 = (float)((param_3 & 0xffff) << 0xc);
    if ((param_3 & 0xffff) == 0) {
      fVar2 = fVar2 - 0.5;
    }
    else {
      fVar2 = fVar2 + 0.5;
    }
    lVar3 = FUN_08a0d1f4(*(int *)(iVar1 + 0x34),*(int *)(iVar1 + 0x34) >> 0x1f,(int)fVar2,
                         (int)fVar2 >> 0x1f);
    *(uint *)(iVar1 + 0x38) =
         (int)((ulonglong)(lVar3 + 0x800) >> 0x20) * 0x100000 | (uint)(lVar3 + 0x800) >> 0xc;
  }
  return;
}

