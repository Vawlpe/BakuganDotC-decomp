#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884b444(undefined param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_088660c8();
  uVar1 = DAT_08aba77c;
  DAT_08aba77e = param_1;
  if ((piVar2 != (int *)0x0) && (iVar4 = *piVar2, uVar1 = param_1, iVar4 != 0)) {
    iVar3 = *(int *)(iVar4 + 0x14);
    while( true ) {
      iVar3 = (**(code **)(iVar3 + 0x74))(iVar4 + *(short *)(iVar3 + 0x70));
      if (iVar3 == 0) {
        if (*(int *)(iVar4 + 0x168) != 0) {
          FUN_088633b8(iVar4,param_1);
        }
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
      }
      uVar1 = param_1;
      if (iVar4 == 0) break;
      iVar3 = *(int *)(iVar4 + 0x14);
    }
  }
  DAT_08aba77c = uVar1;
  return;
}

