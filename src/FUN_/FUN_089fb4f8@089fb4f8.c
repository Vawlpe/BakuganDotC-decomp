#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fb4f8(void)

{
  int iVar1;
  
  DAT_08ac61d0 = zz_sceKernelCreateCallback(&DAT_08aa3da0,&LAB_089fb46c,0);
  zz_sceUmdRegisterUMDCallBack(DAT_08ac61d0);
  iVar1 = zz_sceUmdCheckMedium();
  if (iVar1 == 0) {
    zz_sceUmdWaitDriveStat(2);
  }
  zz_sceUmdActivate(1,"disc0:");
  zz_sceUmdWaitDriveStat(0x20);
  zz_sceUmdReplaceProhibit();
  FUN_089fb608();
  return;
}

