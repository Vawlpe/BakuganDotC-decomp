#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f99a4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  FUN_089bb728(param_1[0x11]);
  if ((*(char *)(param_1 + 3) != '\0') && (*(char *)((int)param_1 + 0xb) == '\0')) {
    iVar1 = 1;
    *param_1 = 1;
    param_1[1] = 2;
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)((int)param_1 + 9) = 0;
    *(undefined *)((int)param_1 + 10) = 0;
    *(undefined *)((int)param_1 + 0xb) = 1;
    zz_sceRtcGetCurrentClockLocalTime(&DAT_08ac6188);
    DAT_08ac6198 = DAT_08ac6188;
    DAT_08ac619c = DAT_08ac618c;
    DAT_08ac61a0 = DAT_08ac6190;
    DAT_08ac61a4 = DAT_08ac6194;
    *(undefined *)(param_1 + 3) = 0;
    param_1[4] = param_2;
    param_1[5] = 0xffffffff;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined *)((int)param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x38) = 0;
    *(undefined *)((int)param_1 + 0xe1) = 0;
    FUN_089f9ac8(param_1,0);
    FUN_089f9b6c(param_1,0);
    *(undefined *)(param_1 + 0x3d) = 0;
    param_1[0x3a] = 0;
    *(undefined *)((int)param_1 + 0xe2) = 0;
  }
  FUN_089bb790(param_1[0x11]);
  if (iVar1 != 0) {
    iVar1 = FUN_089bbf78(2);
  }
  return iVar1;
}

