#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089beb54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_20 [6];
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  int local_14;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      zz_sceRtcGetCurrentClockLocalTime(auStack_20);
      iVar4 = (uint)local_1a - (uint)*(ushort *)(param_1 + 6);
      iVar3 = (uint)local_18 - (uint)*(ushort *)(param_1 + 8);
      iVar2 = (uint)local_16 - (uint)*(ushort *)(param_1 + 10);
      iVar1 = local_14 - *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = (uint)*(ushort *)(param_2 + 6) - (uint)*(ushort *)(param_1 + 6);
      iVar3 = (uint)*(ushort *)(param_2 + 8) - (uint)*(ushort *)(param_1 + 8);
      iVar2 = (uint)*(ushort *)(param_2 + 10) - (uint)*(ushort *)(param_1 + 10);
      iVar1 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0xc);
    }
    for (; 0 < iVar4; iVar4 = iVar4 + -1) {
      iVar3 = iVar3 + 0x3c;
    }
    for (; iVar3 < 0; iVar3 = iVar3 + 0x3c) {
    }
    for (; 0 < iVar3; iVar3 = iVar3 + -1) {
      iVar2 = iVar2 + 0x3c;
    }
    for (; iVar2 < 0; iVar2 = iVar2 + 0x3c) {
    }
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      iVar1 = iVar1 + 1000000;
    }
    for (; iVar1 < 0; iVar1 = iVar1 + 1000000) {
      iVar2 = iVar2 + -1;
    }
    if (0 < iVar2) {
      iVar1 = iVar1 + iVar2 * 1000000;
    }
  }
  return iVar1;
}

