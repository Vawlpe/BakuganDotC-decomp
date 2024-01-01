#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d26d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = FUN_089cc058();
  if (iVar1 != 0) {
    uVar2 = FUN_089cc080();
    iVar5 = FUN_089cc630(uVar2,0);
  }
  if (iVar5 == 0) {
    iVar1 = FUN_08a31f9c(param_1[2]);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 3) != '\0') {
        FUN_089bb728(*param_1);
        *(undefined *)(param_1 + 3) = 0;
        FUN_089bb790(*param_1);
      }
    }
    else {
      uVar2 = FUN_089cc080();
      FUN_089cc460(uVar2,0);
      uVar2 = FUN_089cc080();
      iVar1 = FUN_089cc630(uVar2,0);
      FUN_089bb728(*param_1);
      FUN_08a31d4c(param_1[2]);
      puVar4 = (undefined4 *)FUN_08a31834(param_1[2]);
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x14))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x10),*puVar4);
      FUN_08a31d4c(param_1[2]);
      FUN_089bb790(*param_1);
    }
  }
  else {
    iVar1 = FUN_08a01364(iVar5);
    if (iVar1 != 0) {
      iVar1 = FUN_08a01330(iVar5);
      uVar2 = FUN_089cc080();
      FUN_089cc5a8(uVar2,0);
      FUN_089bb728(*param_1);
      FUN_08a31d4c(param_1[2]);
      uVar2 = param_1[2];
      do {
        piVar3 = (int *)FUN_08a31834(uVar2);
        if (piVar3 == (int *)0x0) goto LAB_089d27ec;
        uVar2 = param_1[2];
      } while (*piVar3 != iVar1);
      FUN_08a31ad0(uVar2,piVar3);
      if (*(int *)(DAT_08ac5968 + 4) == 0) {
        FUN_089d8634();
        FUN_089d7fd8(piVar3,0,0);
        FUN_089d866c();
      }
      else {
        iVar1 = FUN_089d774c(*(int *)(DAT_08ac5968 + 4),piVar3);
        if (iVar1 == 0) {
          FUN_089d8634();
          FUN_089d7fd8(piVar3,0,0);
          FUN_089d866c();
        }
      }
LAB_089d27ec:
      FUN_08a31d4c(param_1[2]);
      iVar1 = FUN_08a31f9c(param_1[2]);
      if (iVar1 == 0) {
        *(undefined *)(param_1 + 3) = 0;
      }
      FUN_089bb790(*param_1);
    }
  }
  return;
}

