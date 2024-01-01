#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089beaa8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined auStack_20 [8];
  ushort local_18;
  ushort local_16;
  int local_14;
  
  if (param_1 < DAT_08ac5210) {
    zz_sceRtcGetCurrentClockLocalTime(auStack_20);
    iVar1 = DAT_08ac5214 + param_1 * 0x10;
    iVar2 = (uint)local_16 - (uint)*(ushort *)(iVar1 + 10);
    local_14 = local_14 - *(int *)(iVar1 + 0xc);
    for (iVar1 = (uint)local_18 - (uint)*(ushort *)(iVar1 + 8); iVar1 < 0; iVar1 = iVar1 + 0x3c) {
    }
    for (; iVar2 < 0; iVar2 = iVar2 + 0x3c) {
    }
    for (; local_14 < 0; local_14 = local_14 + 1000000) {
    }
  }
  return;
}

