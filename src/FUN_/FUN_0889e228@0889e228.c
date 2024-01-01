#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889e228(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = &DAT_08abd4ac;
  puVar2 = &DAT_08abd4b0;
  do {
    bVar1 = puVar3[iVar4];
    if (bVar1 < 5) {
      if (bVar1 == 1) {
        FUN_0889d1a8(*puVar2);
        iVar4 = iVar4 + 1;
      }
      else if (bVar1 == 2) {
        FUN_0889d230(*puVar2);
        iVar4 = iVar4 + 1;
      }
      else if (bVar1 == 3) {
        FUN_0889d290(*puVar2);
        iVar4 = iVar4 + 1;
      }
      else if (bVar1 == 4) {
        FUN_0889d230(*puVar2);
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    else {
      iVar4 = iVar4 + 1;
    }
    puVar2 = puVar2 + 1;
  } while (iVar4 < 4);
  return;
}

