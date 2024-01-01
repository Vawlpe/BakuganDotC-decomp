#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d4b08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  undefined auStack_1c [12];
  
  iVar2 = 0;
  local_20 = 0;
  iVar1 = zz_sceNetAdhocctlGetState(&local_20);
  if ((iVar1 == 0) && (local_20 == 0)) {
    iVar2 = zz_sceNetAdhocctlConnect(param_2);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else if (iVar2 == -0x7fbef4f0) {
      iVar2 = 0;
    }
    else {
      FUN_089d4794(param_1,iVar2);
    }
  }
  if (0 < iVar2) {
    memset_jak(auStack_1c,0,9);
    memcpy_jak(auStack_1c,param_2,8);
    FUN_089d3740();
  }
  return iVar2;
}

