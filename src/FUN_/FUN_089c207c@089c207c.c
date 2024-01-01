#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c207c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x28) + iVar4);
      if (piVar2 == (int *)0x0) {
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      else {
        if (param_2 == -1) {
          piVar2[0xd] = 0;
        }
        else {
          if (*piVar2 != param_2) {
            iVar3 = *(int *)(param_1 + 0x2c);
            goto LAB_089c20fc;
          }
          piVar2[0xd] = 0;
        }
        *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + iVar4) + 0x32) = 1;
        uVar1 = 1;
        *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + iVar4) + 0x31) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x2c);
      }
LAB_089c20fc:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < iVar3);
  }
  return uVar1;
}

