#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c8c90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
LAB_089c8ce8:
      *(undefined *)(param_1 + 0x28) = 1;
      return;
    }
    iVar3 = FUN_089c8844(*(undefined4 *)(param_1 + 0x14));
    if (1 < iVar3) {
      iVar3 = 0;
      iVar4 = *(int *)(DAT_08ac5880 + 4);
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = FUN_08a2fe1c(DAT_08ac5880,iVar3);
          if (iVar1 == param_1) break;
          if (*(int *)(iVar1 + 0x14) == *(int *)(param_1 + 0x14)) {
            *(undefined *)(iVar1 + 0x28) = 1;
            iVar5 = iVar5 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar4);
      }
      if (0 < iVar5) {
        return;
      }
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else if (1 < iVar3) {
    if (iVar3 < 3) {
      iVar3 = FUN_089c2b10(*(undefined4 *)(param_1 + 0x14));
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        return;
      }
      uVar2 = FUN_089c2b48(*(undefined4 *)(param_1 + 0x14));
      iVar3 = FUN_089c3818(uVar2);
      if (iVar3 == 0) {
        return;
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      return;
    }
    goto LAB_089c8ce8;
  }
  iVar3 = FUN_089c2b10(*(undefined4 *)(param_1 + 0x14));
  if (iVar3 == 0) {
    FUN_089c29cc(*(undefined4 *)(param_1 + 0x14));
  }
  else {
    uVar2 = FUN_089c2b48();
    iVar3 = FUN_089c37e8(*(undefined4 *)(param_1 + 0x20),uVar2,0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  return;
}

