#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890bb6c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = false;
  if ((1 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 5)) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_08ac0e80[4] != 0) {
      FUN_089f8a64(DAT_08ac0e80 + 5);
    }
    uVar2 = FUN_089f2178(0x44c94000);
    FUN_089f5084(*DAT_08ac0e80,uVar2);
    if ((DAT_08ac0e80[3] != 0) && (iVar3 = FUN_089eb134(), iVar3 != 0)) {
      FUN_089eb294(DAT_08ac0e80[3]);
    }
    iVar3 = FUN_0890b018(param_1);
    if (iVar3 != 0) {
      FUN_0890b040(param_1);
    }
  }
  return;
}

