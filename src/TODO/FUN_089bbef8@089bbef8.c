#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bbef8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = zz_sceKernelGetThreadId();
  piVar4 = (int *)0x0;
  if (-1 < iVar1) {
    iVar3 = 0;
    piVar2 = &DAT_08ac4f78;
    do {
      iVar3 = iVar3 + 1;
      if (*piVar2 == iVar1) {
        *(undefined *)(piVar2 + 7) = 1;
        piVar4 = piVar2;
        break;
      }
      piVar2 = piVar2 + 8;
    } while (iVar3 < 0x13);
  }
  iVar1 = zz_sceKernelSleepThreadCB();
  if ((iVar1 != 0) && (piVar4 != (int *)0x0)) {
    *(undefined *)(piVar4 + 7) = 0;
  }
  return;
}

