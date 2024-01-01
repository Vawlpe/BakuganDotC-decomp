#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892bdec(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_50 [64];
  
  iVar2 = (param_2 & 0xff) + 1;
  if ((param_2 & 0xff) == 0xff) {
    FUN_089b4c84(auStack_50,"card_SS_non_card",iVar2);
  }
  else {
    FUN_089b4c84(auStack_50,"card_SS_%03d",iVar2);
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  return;
}

