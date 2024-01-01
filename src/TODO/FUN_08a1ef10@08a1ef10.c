#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1ef10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0;
    uVar1 = 0;
  }
  else {
    iVar2 = DAT_08afcf68 + DAT_08afcf84;
    uVar1 = DAT_08afcf7c;
  }
  zz_sceDisplaySetFrameBuf(iVar2,uVar1,DAT_08afcf78,1);
  uVar1 = DAT_08afcf5c;
  DAT_08afcf5c = param_1;
  return uVar1;
}

