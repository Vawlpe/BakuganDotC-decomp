#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5024(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_089d5404(param_1);
  if (DAT_08ac5990 < 1) {
    return;
  }
  DAT_08ac5990 = DAT_08ac5990 + -1;
  switch(*(undefined4 *)(param_1 + 0x4c)) {
  case 0:
    iVar3 = FUN_089d41d4(param_1);
    uVar2 = iVar3 - 1;
    if (uVar2 < 5) {
      if ((uVar2 == 1) || (uVar2 == 4)) {
        FUN_089d4aa0(param_1,0);
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
    }
    break;
  case 1:
    iVar3 = FUN_089d420c(param_1);
    if (iVar3 < 1) {
      if (iVar3 < 0) {
        FUN_089d4794(param_1,iVar3);
        *(undefined4 *)(param_1 + 0x4c) = 2;
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 3;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    break;
  case 2:
    iVar3 = FUN_089d4330(param_1);
    if (iVar3 < 1) {
      if (iVar3 < 0) {
        FUN_089d4794(param_1,iVar3);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    break;
  case 3:
    iVar3 = FUN_089d41d4(param_1);
    uVar2 = iVar3 - 2;
    if (uVar2 < 5) {
      if ((uVar2 != 1) && (uVar2 != 2)) {
        if (uVar2 == 3) {
          FUN_089d4aa0(param_1,0);
          return;
        }
        if (uVar2 != 4) {
          *(undefined4 *)(param_1 + 0x4c) = 2;
          *(undefined4 *)(param_1 + 0x54) = 0;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x4c) = 4;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    break;
  case 4:
    iVar3 = FUN_089d446c(param_1);
    iVar1 = FUN_089d41d4(param_1);
    if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x4c) = 5;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else if (iVar3 < 1) {
      if (iVar3 < 0) {
        FUN_089d4794(param_1,iVar3);
        *(undefined4 *)(param_1 + 0x4c) = 5;
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
    }
    else {
      iVar3 = FUN_089d41d4(param_1);
      if (iVar3 < 4) {
        if (2 < iVar3) {
          *(undefined4 *)(param_1 + 0x50) = 1;
        }
      }
      else if (iVar3 < 5) {
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
      FUN_089d4aa0(param_1,0);
      FUN_089d4a08(param_1,1);
      *(undefined *)(param_1 + 0x1f) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 6;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    break;
  case 5:
    iVar3 = FUN_089d460c(param_1);
    if (iVar3 < 1) {
      if (-1 < iVar3) {
        return;
      }
      FUN_089d4794(param_1,iVar3);
      return;
    }
    iVar3 = FUN_089d41d4(param_1);
    if (iVar3 < 3) {
LAB_089d52ec:
      FUN_089d4aa0(param_1,0);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 3;
    }
    else {
      if (iVar3 < 6) {
        if (4 < iVar3) goto LAB_089d52ec;
      }
      else if (6 < iVar3) goto LAB_089d52ec;
      *(undefined4 *)(param_1 + 0x4c) = 4;
    }
    FUN_089d4a08(param_1,0);
    *(undefined4 *)(param_1 + 0x54) = 0;
    break;
  case 6:
    iVar1 = FUN_089d41d4(param_1);
    if (iVar1 < 3) {
      if (iVar1 != 0) {
LAB_089d536c:
        iVar3 = -1;
      }
    }
    else if (iVar1 < 4) {
      if (*(int *)(param_1 + 0x50) == 1) {
        FUN_089d4aa0(param_1,0);
      }
      else {
        iVar3 = -1;
      }
    }
    else {
      if (4 < iVar1) goto LAB_089d536c;
      if (*(int *)(param_1 + 0x50) == 2) {
        FUN_089d4aa0(param_1,0);
      }
      else {
        iVar3 = -1;
      }
    }
    if (iVar3 < 0) {
      if (-2 < iVar3) {
        *(undefined4 *)(param_1 + 0x4c) = 5;
      }
    }
    else if (iVar3 < 1) {
      FUN_089d4d54(param_1);
    }
  }
  return;
}

