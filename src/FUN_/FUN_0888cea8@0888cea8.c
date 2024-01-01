#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888cea8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0x50);
  do {
    iVar5 = **(int **)(param_1 + 0x4c);
    if (*(char *)((int)piVar3 + 0xd) != '\0') {
      *piVar3 = 0;
      *(undefined *)((int)piVar3 + 0xd) = 0;
    }
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      piVar3[1] = 0;
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    piVar3[2] = 0;
    *(undefined *)(piVar3 + 3) = 0;
    if (iVar5 != 0) {
      piVar3[1] = iVar5;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar5 = FUN_089d7d74(iVar5 << 2,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      uVar6 = 0;
      *piVar3 = iVar5;
      if (piVar3[1] != 0) {
        iVar5 = 0;
        do {
          uVar6 = uVar6 + 1;
          *(undefined4 *)(*piVar3 + iVar5) = 0;
          iVar5 = iVar5 + 4;
        } while (uVar6 < (uint)piVar3[1]);
      }
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 4;
  } while (iVar4 < 10);
  return;
}

