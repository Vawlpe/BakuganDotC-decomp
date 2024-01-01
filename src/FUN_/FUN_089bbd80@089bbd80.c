#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089bbd80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 1;
  if (param_1 < 0x13) {
    piVar4 = &DAT_08ac4f78 + param_1 * 8;
    iVar2 = *piVar4;
    if (0 < iVar2) {
      iVar1 = zz_sceKernelGetThreadExitStatus();
      if (iVar1 == -0x7ffdfe5c) {
        iVar3 = 0;
        iVar2 = zz_sceKernelTerminateThread();
        if (iVar2 == -0x7ffdfe69) {
          *piVar4 = -1;
          iVar3 = 1;
          zz_sceKernelExitDeleteThread(1);
        }
      }
      else {
        iVar2 = zz_sceKernelDeleteThread(iVar2);
        if (iVar2 == 0) {
          *piVar4 = -1;
        }
        else {
          iVar3 = 0;
        }
      }
    }
  }
  else {
    do {
      iVar3 = 1;
      iVar2 = 0;
      do {
        iVar1 = FUN_089bbd80(iVar2);
        iVar2 = iVar2 + 1;
        if (iVar1 == 0) {
          iVar3 = 0;
          break;
        }
      } while (iVar2 < 0x13);
    } while (iVar3 == 0);
  }
  return iVar3;
}

