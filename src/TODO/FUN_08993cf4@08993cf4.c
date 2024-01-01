#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08993cf4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 1) {
    if (iVar2 < 0) goto LAB_08993d60;
    iVar2 = FUN_089edb58();
    if (iVar2 == 0) {
      FUN_089eda24(0);
      iVar2 = FUN_089edb80();
      *(undefined4 *)(iVar2 + 0x10) = 0x469c4000;
    }
    iVar2 = FUN_089edb80();
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    iVar2 = FUN_089edb80();
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0x3f800000;
    uVar1 = FUN_089edb80();
    FUN_089edf24(uVar1,8);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    if (1 < iVar2) {
LAB_08993d60:
      *(undefined *)(param_1 + 0x4c) = 1;
      *(undefined *)(param_1 + 0x74) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    uVar1 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
  }
  FUN_08992e2c(param_1);
  return;
}

