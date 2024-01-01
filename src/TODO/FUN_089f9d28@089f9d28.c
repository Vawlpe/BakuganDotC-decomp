#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089f9d28(int param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x44));
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0xb) != '\0') {
      *(undefined *)(param_1 + 0xb) = 0;
      uVar1 = 1;
    }
  }
  else if (*(char *)(param_1 + 0xb) == '\0') {
    *(undefined *)(param_1 + 0xb) = 1;
    zz_sceRtcGetCurrentClockLocalTime(&DAT_08ac6188);
    DAT_08ac6198 = DAT_08ac6188;
    DAT_08ac619c = DAT_08ac618c;
    DAT_08ac61a0 = DAT_08ac6190;
    DAT_08ac61a4 = DAT_08ac6194;
    uVar1 = 1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x44));
  return uVar1;
}

