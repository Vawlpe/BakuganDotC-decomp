#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5a40(undefined4 *param_1)

{
  int iVar1;
  
  *(undefined *)((int)param_1 + 0x42) = 0;
  iVar1 = FUN_089d6150();
  if ((iVar1 != 0) && (iVar1 = FUN_089d61b4(param_1), iVar1 == 0)) {
    iVar1 = zz_scePsmfPlayerGetCurrentStatus(*param_1);
    if ((iVar1 == 4) && (iVar1 = zz_scePsmfPlayerUpdate(*param_1), iVar1 == 0)) {
      *(undefined *)((int)param_1 + 0x42) = 1;
    }
    zz_sceKernelPowerTick(0);
  }
  return;
}

