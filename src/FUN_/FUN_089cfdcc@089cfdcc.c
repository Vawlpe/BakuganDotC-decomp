#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cfdcc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5938 == 0) {
    return;
  }
  iVar3 = 0;
  iVar1 = FUN_089d3ab4();
  if (iVar1 != 0) {
    iVar1 = FUN_089d3adc();
    iVar3 = *(int *)(iVar1 + 0x24);
  }
  if (param_2 < 1) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  FUN_089bb728(*(undefined4 *)(DAT_08ac5938 + 4));
  iVar4 = param_1 + 0x2c;
  iVar1 = FUN_089cf9a4(iVar4);
  if (iVar3 < 2) {
    if (iVar3 < 0) goto LAB_089cff6c;
    if (iVar1 == 0) {
      iVar1 = FUN_089cfa8c(iVar4,"c:/bullets/bkn2pspsys/src/pspsys/sys/Net/CONetChara.cpp",0x1af);
    }
  }
  else if (2 < iVar3) goto LAB_089cff6c;
  if (iVar1 == 0) {
    iVar1 = FUN_089cfa8c(iVar4,"c:/bullets/bkn2pspsys/src/pspsys/sys/Net/CONetChara.cpp",0x1c9);
    zz_sceRtcGetCurrentClockLocalTime(iVar1 + 0x100);
    uVar2 = FUN_089d2e88();
    FUN_089d2fec(uVar2);
  }
  else {
    FUN_089bb728(*(undefined4 *)(iVar1 + 8));
    zz_sceRtcGetCurrentClockLocalTime(iVar1 + 0x100);
    if (iVar3 == 2) {
      FUN_089bb790(*(undefined4 *)(iVar1 + 8));
      iVar1 = FUN_089cf8ec(0);
      FUN_089bb728(*(undefined4 *)(iVar1 + 8));
    }
    memcpy_jak(iVar1 + 0x40,param_1,0x34);
    iVar4 = param_1 + 0x34;
    if ((*(ushort *)(iVar1 + 0x72) & 0x800) == 0) {
      memcpy_jak(iVar1 + 0x74,iVar4,0x7c);
      iVar4 = param_1 + 0xb0;
    }
    *(uint *)(iVar1 + 0xfc) = (int)*(short *)(iVar1 + 0x72) & 0x7ff;
    memcpy_jak(*(undefined4 *)(iVar1 + 0xf8),iVar4);
    if (iVar3 == 2) {
      FUN_089d0850(iVar1);
    }
    FUN_089bb790(*(undefined4 *)(iVar1 + 8));
  }
LAB_089cff6c:
  FUN_089bb790(*(undefined4 *)(DAT_08ac5938 + 4));
  return;
}

