#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854aec(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_08aba7a0 != 0) {
    iVar2 = DAT_08aba7a0;
    piVar1 = (int *)FUN_08a299e8(DAT_08aba7a0);
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[3];
      while( true ) {
        piVar1 = (int *)*piVar1;
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x168) + 0xc))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x168) + 8),2);
          FUN_089d774c(DAT_08aba7a4,iVar2);
        }
        iVar2 = DAT_08aba7a0;
        if (piVar1 == (int *)0x0) break;
        iVar2 = piVar1[3];
      }
    }
    if (iVar2 != 0) {
      FUN_08a29aa8(iVar2,3);
      DAT_08aba7a0 = 0;
    }
    if (DAT_08aba7a4 != 0) {
      FUN_089d75e8(DAT_08aba7a4,3);
      DAT_08aba7a4 = 0;
    }
  }
  return;
}

