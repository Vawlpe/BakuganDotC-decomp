#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d4ca8(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  uVar2 = 0;
  local_10 = 0;
  iVar1 = zz_sceNetAdhocctlGetState(&local_10);
  if (iVar1 == 0) {
    if (local_10 == 0) {
      uVar2 = 1;
    }
  }
  else if (iVar1 == -0x7fbef4f8) {
    uVar2 = 1;
  }
  return uVar2;
}

