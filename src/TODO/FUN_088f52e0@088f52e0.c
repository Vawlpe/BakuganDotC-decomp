#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088f53a4)

void FUN_088f52e0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  param_1 = param_1 & 0xffff;
  if (param_1 < 2000) {
    iVar1 = FUN_088f5010(2,param_1);
    if (iVar1 != 0) {
      uVar3 = 99;
      if (DAT_08b00bd8._1_1_ + 1 < 100) {
        uVar3 = (undefined)(DAT_08b00bd8._1_1_ + 1);
      }
      DAT_08b00bd8._1_1_ = uVar3;
      return;
    }
    iVar1 = FUN_088f51cc(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_088f51f4(param_1);
      if (iVar1 != 0) {
        uVar2 = FUN_088f523c(5,param_1);
        FUN_088f5260(uVar2);
        return;
      }
      (&DAT_08b00bdc)[(int)(param_1 & 0xffff) >> 5] =
           (&DAT_08b00bdc)[(int)(param_1 & 0xffff) >> 5] | 1 << (param_1 & 0x1f);
    }
  }
  return;
}

