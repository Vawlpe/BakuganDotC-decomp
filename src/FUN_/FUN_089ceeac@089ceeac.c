#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ceeac(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = zz_sceGeEdramGetAddr();
  if (uVar1 < param_2) {
    iVar2 = zz_sceGeEdramGetAddr();
    if ((param_2 < iVar2 + 0x110000U) &&
       (iVar2 = zz_sceGeEdramGetAddr(), ((param_2 - iVar2) - 0x780 & 0x7ff) == 0)) {
      return 1;
    }
  }
  return 0;
}

