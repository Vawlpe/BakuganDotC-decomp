#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887065c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_08aba910) {
    piVar2 = &DAT_08b00900;
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
        *piVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < DAT_08aba910);
  }
  DAT_08aba910 = 0;
  return;
}

