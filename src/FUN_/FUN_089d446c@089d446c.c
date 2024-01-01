#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d446c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 0:
    iVar2 = zz_sceNetInit(0x40000,0x1e,0,0x1e,0);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 1:
    iVar2 = zz_sceNetAdhocInit();
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 2:
    iVar2 = zz_sceNetAdhocctlInit(0x4c00,0x1e,DAT_08ac598c + 4);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 3:
    FUN_089d4980(param_1);
    iVar2 = zz_sceNetAdhocctlAddHandler(FUN_089d36e0,0);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_089d4910(param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 4:
    iVar2 = FUN_089d4b08(param_1,param_1 + 0x34);
    if ((-1 < iVar2) && (0 < iVar2)) {
      iVar2 = 0;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 5:
    iVar1 = FUN_089d4bd0(param_1);
    if (iVar1 != 0) {
      FUN_089d4d08(param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  case 6:
    iVar1 = FUN_089d4d24(param_1);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    break;
  default:
    iVar2 = 1;
  }
  return iVar2;
}

