#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d32e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = zz_sceNetAdhocPdpDelete(*(int *)(param_1 + 4),0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = zz_sceNetAdhocPdpDelete(*(int *)(param_1 + 8),0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

