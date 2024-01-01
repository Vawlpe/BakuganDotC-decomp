#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0884693c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_088660c8();
  if ((piVar1 != (int *)0x0) && (iVar3 = *piVar1, iVar3 != 0)) {
    iVar2 = *(int *)(iVar3 + 0x14);
    while( true ) {
      iVar2 = (**(code **)(iVar2 + 0x94))(iVar3 + *(short *)(iVar2 + 0x90));
      if (iVar2 == 0) {
        iVar3 = *(int *)(iVar3 + 4);
      }
      else {
        if (*(int *)(iVar3 + 8) == param_2) {
          return iVar3;
        }
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x14);
    }
  }
  return 0;
}

