#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_089c2848(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_50 [64];
  
  if ((param_1 < 0x2a3f) || (0x2a7a < param_1)) {
    FUN_089b4c84(auStack_50,"VO_%d.at3",param_1);
  }
  else {
    iVar3 = 1;
    iVar1 = FUN_0880d2e0();
    if (iVar1 != 0) {
      uVar2 = FUN_0880cc48();
      iVar3 = FUN_0880dba8(uVar2);
    }
    FUN_089b4c84(auStack_50,"voice/%s/VO_%d.at3",(&PTR_DAT_08ac5838)[iVar3],param_1);
  }
  strcpy(&DAT_08ac5324,auStack_50);
  return &DAT_08ac5324;
}

