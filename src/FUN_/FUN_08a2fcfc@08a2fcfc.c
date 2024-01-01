#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2fcfc(int param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    ppiVar3 = (int **)*piVar2;
    *piVar2 = 0;
    while (ppiVar4 = ppiVar3, ppiVar4 != (int **)0x0) {
      ppiVar3 = (int **)*ppiVar4;
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (iVar1 = FUN_089d774c(*(int *)(param_1 + 0xc),ppiVar4), iVar1 != 0)) {
        ppiVar4 = (int **)0x0;
      }
      if (ppiVar4 != (int **)0x0) {
        FUN_089d8634();
        FUN_089d7fd8(ppiVar4,0,0);
        FUN_089d866c();
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

