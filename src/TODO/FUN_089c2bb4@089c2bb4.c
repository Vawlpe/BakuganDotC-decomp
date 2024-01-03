#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c2bb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = DONE_NotZero_DAT_08AC61E8();
  if (iVar1 != 0) {
    iVar1 = 0;
    piVar5 = (int *)&DAT_08ac5604;
    piVar4 = &DAT_08aa1218;
    do {
      if (*piVar4 == param_1) {
        piVar5 = &DAT_08aa1218;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < 1);
    uVar2 = FUN_089fce94();
    uVar3 = FUN_089c2b60(param_1);
    uVar2 = FUN_089fd150(uVar2,piVar5,uVar3,0,0,1);
    FUN_089fbac8(uVar2,2);
  }
  return;
}

