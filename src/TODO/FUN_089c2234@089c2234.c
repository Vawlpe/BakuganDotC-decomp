#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c2234(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = DONE_Get_DAT_08AC5874();
  iVar2 = FUN_089c61b8(uVar1,param_2,1);
  if (-1 < iVar2) {
    uVar3 = FUN_089c207c(param_1,iVar2 << 0x1b | param_3 | param_2 << 0x14);
  }
  return uVar3;
}

