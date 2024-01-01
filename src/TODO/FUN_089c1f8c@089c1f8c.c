#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c1f8c(int param_1,int param_2,undefined param_3,char param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  
  ppiVar3 = *(int ***)(param_1 + 0x28);
  uVar1 = 0;
  bVar2 = false;
  puVar7 = (undefined4 *)0x0;
  if (ppiVar3 != (int **)0x0) {
    iVar4 = 0;
    iVar5 = 0;
    ppiVar6 = ppiVar3;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        if (*ppiVar6 == (int *)0x0) {
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)((int)ppiVar3 + iVar5);
          }
        }
        else if ((param_4 != '\0') && (**ppiVar6 == param_2)) {
          bVar2 = true;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
        ppiVar6 = ppiVar6 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x2c));
    }
    if ((!bVar2) && (puVar7 != (undefined4 *)0x0)) {
      uVar1 = _DONE_Get_DAT_08AC5258();
      uVar1 = FUN_089c02f4(uVar1,param_2,*(undefined4 *)(param_1 + 0x30),param_3,1);
      *puVar7 = uVar1;
      uVar1 = 1;
    }
  }
  return uVar1;
}

