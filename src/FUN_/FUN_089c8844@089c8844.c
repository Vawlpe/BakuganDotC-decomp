#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c8844(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((DAT_08ac5880 != 0) && (piVar1 = (int *)FUN_08a2fda4(), piVar1 != (int *)0x0)) {
    iVar2 = piVar1[3];
    while( true ) {
      if (*(int *)(iVar2 + 0x14) == param_1) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) break;
      iVar2 = piVar1[3];
    }
  }
  return iVar3;
}

