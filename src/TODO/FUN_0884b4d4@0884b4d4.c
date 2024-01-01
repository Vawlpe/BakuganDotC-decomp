#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884b4d4(undefined4 param_1,undefined param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_088660c8();
  if ((piVar1 != (int *)0x0) && (iVar3 = *piVar1, iVar3 != 0)) {
    iVar2 = *(int *)(iVar3 + 0x14);
    while( true ) {
      iVar2 = (**(code **)(iVar2 + 0x74))(iVar3 + *(short *)(iVar2 + 0x70));
      if (iVar2 == 0) {
        if (*(int *)(iVar3 + 0x168) != 0) {
          FUN_0886344c(iVar3,param_2);
        }
        iVar3 = *(int *)(iVar3 + 4);
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x14);
    }
  }
  return;
}

