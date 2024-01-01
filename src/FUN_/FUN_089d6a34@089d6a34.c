#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d6a34(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  ushort local_10;
  
  iVar2 = FUN_089d6848();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_089d5814();
  if (iVar2 == 0) {
    return;
  }
  if (DAT_08ac5b9c < 2) {
    if (DAT_08ac5b9c < 0) {
      return;
    }
    if (DAT_08ac5b9c < 1) {
      return;
    }
    uVar3 = FUN_089d5830();
    iVar2 = FUN_089d5fa4(uVar3,DAT_08ac5b94);
    if (iVar2 != 0) {
      DAT_08ac5b9c = 2;
    }
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    return;
  }
  if (DAT_08ac5b9c < 3) {
    uVar3 = FUN_089d5830();
    iVar2 = FUN_089d6008(uVar3);
    if (iVar2 == 0) {
      return;
    }
    DAT_08ac5b98 = 0;
    DAT_08ac5b9c = 3;
    return;
  }
  if (3 < DAT_08ac5b9c) {
    return;
  }
  if (DAT_08ac5b94 < 0) {
    return;
  }
  uVar3 = FUN_089d5830();
  iVar2 = FUN_089d5ab0(uVar3);
  if (iVar2 == 0) {
    DAT_08ac5b94 = 0xffffffff;
    return;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = FUN_089bbe6c(0xe);
    if (iVar2 != 0) {
      return;
    }
    local_10 = 0;
    if (DAT_08ac5928 != 0) {
      local_10 = *(ushort *)(DAT_08ac5928 + 4);
    }
    if (((local_10 & 8) == 0) && ((local_10 & 0x4000) == 0)) {
      return;
    }
    iVar2 = FUN_089d5830();
    if ((*(int *)(iVar2 + 0x54) * 0x1e) / 90000 < 0x3c) {
      return;
    }
    piVar5 = &DAT_08aa2d48;
    bVar1 = false;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (*piVar5 == DAT_08ac5b94) {
        bVar1 = true;
        break;
      }
      piVar5 = piVar5 + 1;
    } while (uVar4 < 0x18);
    if (bVar1) {
      return;
    }
    *(undefined *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 < 0) {
    iVar2 = FUN_089bbe6c(0xe);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      goto LAB_089d6b70;
    }
    uVar3 = FUN_089d5830();
    FUN_089d61bc(uVar3);
  }
  iVar2 = *(int *)(param_1 + 0x14);
LAB_089d6b70:
  *(float *)(param_1 + 0x18) = (float)iVar2 / 15.0;
  return;
}

