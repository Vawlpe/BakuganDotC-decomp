#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d2600(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(*param_1);
  FUN_08a31d4c(param_1[2]);
  iVar1 = FUN_08a31f9c(param_1[2]);
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)FUN_08a31834(param_1[2]);
      if (piVar2 == (int *)0x0) goto LAB_089d267c;
    } while (*piVar2 != param_2);
    uVar3 = 1;
  }
LAB_089d267c:
  FUN_089bb790(*param_1);
  return uVar3;
}

