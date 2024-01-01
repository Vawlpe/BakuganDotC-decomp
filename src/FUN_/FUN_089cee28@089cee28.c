#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cee28(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = zz_sceGeEdramGetAddr();
  iVar1 = (param_2 - iVar1) + -0x780;
  iVar1 = iVar1 + ((uint)(iVar1 >> 0xb) >> 0x15);
  uVar2 = iVar1 >> 0xb;
  if ((-1 < (int)uVar2) && ((int)uVar2 < 0x220)) {
    param_1 = param_1 + (iVar1 >> 0x10) * 4;
    uVar3 = *(uint *)(param_1 + 0x4c);
    uVar2 = 1 << (uVar2 & 0x1f);
    if ((uVar3 & uVar2) != 0) {
      *(uint *)(param_1 + 0x4c) = uVar3 & ~uVar2;
    }
  }
  return;
}

