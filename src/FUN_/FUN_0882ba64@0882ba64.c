#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882ba64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_088660e0();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 10) {
    if (iVar1 != 0) {
      return;
    }
    if (DAT_08ab9f70 == '\0') {
      return;
    }
    iVar1 = FUN_088b32d0();
    if (0 < iVar1) {
      uVar2 = FUN_088566a4();
      FUN_08856394(uVar2);
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          FUN_088564ac(iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 10;
  }
  else if (10 < iVar1) {
    iVar3 = iVar1 + 1;
    if (0xb < iVar1) {
      return;
    }
    goto LAB_0882bb48;
  }
  iVar1 = FUN_0884c440();
  if (iVar1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar3 + 1;
  iVar3 = iVar3 + 2;
LAB_0882bb48:
  *(int *)(param_1 + 0x10) = iVar3;
  return;
}

