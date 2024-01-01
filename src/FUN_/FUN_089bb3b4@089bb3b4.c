#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089bb3b4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = zz_sceKernelCreateCallback("MyCB-ExitGame",FUN_089bb360,0);
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = zz_sceKernelRegisterExitCallback();
    if (iVar1 != 0) {
      iVar2 = 0;
    }
  }
  if (iVar2 != 0) {
    iVar1 = zz_sceKernelCreateCallback("MyCB-Power",FUN_089bb38c,0);
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar1 = zz_scePowerRegisterCallback(0xffffffff,iVar1);
      if (iVar1 != 0) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

