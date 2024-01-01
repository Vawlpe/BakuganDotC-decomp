#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08866190(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_90 [32];
  
  piVar2 = local_90;
  iVar1 = 0;
  if (DAT_08aba808 != (int *)0x0) {
    iVar1 = *DAT_08aba808;
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x150);
    while( true ) {
      if (iVar4 < 5) {
        if (param_1 == iVar1) {
          iVar1 = *(int *)(iVar1 + 4);
        }
        else {
          *piVar2 = iVar1;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
          iVar1 = *(int *)(iVar1 + 4);
        }
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
      if (iVar1 == 0) break;
      iVar4 = *(int *)(iVar1 + 0x150);
    }
  }
  if (0 < iVar3) {
    iVar1 = FUN_089bed14(iVar3);
    return local_90[iVar1];
  }
  return 0;
}

