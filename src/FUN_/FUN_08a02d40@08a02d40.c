#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a02d40(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  piVar5 = *(int **)(param_1 + 8);
  pcVar4 = (code *)piVar5[6];
  iVar3 = *piVar5;
  iVar2 = piVar5[2];
  uVar1 = piVar5[3];
  if (piVar5[4] == 0) {
    uVar1 = piVar5[1] - uVar1;
  }
  if (pcVar4 != (code *)0x0) {
    uVar7 = 0;
    iVar6 = iVar3 + iVar2 * (uVar1 - 1);
    if (uVar1 != 0) {
      do {
        (*pcVar4)(iVar6,2);
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 - iVar2;
      } while (uVar7 < uVar1);
    }
  }
  if (piVar5[5] != 0) {
    FUN_08a02a4c(iVar3,iVar2 * uVar1,piVar5[6],piVar5[7],piVar5[8],0);
  }
  return;
}

