#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c87e4(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_08ac5880 != 0) && (piVar1 = (int *)FUN_08a2fda4(), piVar1 != (int *)0x0)) {
    iVar2 = piVar1[3];
    while( true ) {
      piVar1 = (int *)*piVar1;
      if (*(int *)(iVar2 + 0x14) == param_1) {
        *(undefined *)(iVar2 + 0x28) = 1;
      }
      if (piVar1 == (int *)0x0) break;
      iVar2 = piVar1[3];
    }
  }
  return;
}

