#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d4c04(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  uVar2 = 0;
  local_10 = 0;
  iVar1 = zz_sceNetAdhocctlGetState(&local_10);
  if (iVar1 == 0) {
    if (local_10 < 2) {
      if (local_10 < 1) {
        return 0;
      }
    }
    else if (local_10 != 3) {
      return 0;
    }
    FUN_089d4980(param_1);
    iVar1 = zz_sceNetAdhocctlDisconnect();
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else if (iVar1 != -0x7fbef4f0) {
      FUN_089d4794(param_1,iVar1);
    }
  }
  return uVar2;
}

