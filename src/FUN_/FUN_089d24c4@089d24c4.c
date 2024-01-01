#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d24c4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_089bb728(*param_1);
  FUN_08a31d4c(param_1[2]);
  uVar3 = param_1[2];
  do {
    piVar1 = (int *)FUN_08a31834(uVar3);
    if (piVar1 == (int *)0x0) goto LAB_089d2588;
    uVar3 = param_1[2];
  } while (*piVar1 != param_2);
  FUN_08a31ad0(uVar3,piVar1);
  if (*(int *)(DAT_08ac5968 + 4) == 0) {
    FUN_089d8634();
    FUN_089d7fd8(piVar1,0,0);
    FUN_089d866c();
  }
  else {
    iVar2 = FUN_089d774c(*(int *)(DAT_08ac5968 + 4),piVar1);
    if (iVar2 == 0) {
      FUN_089d8634();
      FUN_089d7fd8(piVar1,0,0);
      FUN_089d866c();
    }
  }
LAB_089d2588:
  FUN_08a31d4c(param_1[2]);
  FUN_089bb790(*param_1);
  return;
}

