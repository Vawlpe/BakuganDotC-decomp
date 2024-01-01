#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int _WIP_KernCBReg_ExitGameAndPower(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = zz_sceKernelCreateCallback("MyCB-ExitGame",_DONE_KernCB_ExitGame,0);
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
    iVar1 = zz_sceKernelCreateCallback("MyCB-Power",_WIP_KernCB_Power,0);
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

