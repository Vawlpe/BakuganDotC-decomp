#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ceda8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 0x80) {
    uVar4 = 0x40;
    uVar1 = 2;
    do {
      iVar2 = param_1 + uVar1 * 4;
      uVar1 = *(uint *)(iVar2 + 0x4c);
      uVar3 = 1 << (uVar4 & 0x1f);
      if ((uVar1 & uVar3) == 0) {
        *(uint *)(iVar2 + 0x4c) = uVar1 | uVar3;
        iVar2 = zz_sceGeEdramGetAddr();
        return uVar4 * 0x800 + iVar2 + 0x780;
      }
      uVar4 = uVar4 + 1;
      uVar1 = uVar4 >> 5;
    } while (uVar4 < 0x220);
  }
  return 0;
}

