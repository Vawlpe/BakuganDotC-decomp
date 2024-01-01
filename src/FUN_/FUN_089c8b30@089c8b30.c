#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c8b30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      iVar3 = FUN_089c8844(*(undefined4 *)(param_1 + 0x14));
      if (iVar3 < 2) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        return;
      }
      iVar3 = 0;
      iVar4 = *(int *)(DAT_08ac5880 + 4);
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = FUN_08a2fe1c(DAT_08ac5880,iVar3);
          iVar3 = iVar3 + 1;
          if (iVar1 == param_1) break;
          iVar5 = iVar5 + 1;
        } while (iVar3 < iVar4);
      }
      if (iVar5 != 0) {
        return;
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      return;
    }
  }
  else if (iVar3 < 2) {
    iVar3 = FUN_089c2b10(*(undefined4 *)(param_1 + 0x14));
    if (iVar3 == 0) {
      FUN_089c29cc(*(undefined4 *)(param_1 + 0x14));
      return;
    }
    uVar2 = FUN_089c2b48();
    iVar3 = FUN_089c32e0(uVar2);
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      return;
    }
    uVar2 = FUN_089c2b48(*(undefined4 *)(param_1 + 0x14));
    iVar3 = FUN_089c357c(uVar2,*(undefined4 *)(param_1 + 0x18),*(undefined *)(param_1 + 0x1c),
                         *(undefined *)(param_1 + 0x29));
    if (iVar3 == 0) {
      return;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    return;
  }
  *(undefined *)(param_1 + 0x28) = 1;
  return;
}

