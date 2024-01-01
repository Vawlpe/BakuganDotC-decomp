#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b8868(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_089d9680();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8) + -0x58;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0x13 < iVar1) {
      iVar1 = 0x13;
    }
    piVar4 = (int *)(&PTR_DAT_08abd748)[iVar1];
    iVar1 = 0;
    do {
      if (4 < *piVar4) {
        return;
      }
      uVar2 = FUN_089d9674();
      iVar3 = FUN_089d9c84(uVar2,piVar4[1]);
      if (iVar3 != -1) {
        uVar2 = FUN_089d9674();
        FUN_089d988c(uVar2,piVar4[1]);
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar1 < 5);
  }
  return;
}

