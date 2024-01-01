#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eba64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089ebcf0();
  if (iVar1 != 0) {
    uVar2 = FUN_089ebd18();
    FUN_089ec01c(uVar2);
  }
  iVar1 = FUN_08816a90();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar2 = FUN_08816aac();
    FUN_08816ab8(uVar2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (iVar1 < 1) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar2 = FUN_089eac30();
    FUN_089eb294(uVar2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (iVar1 < 2) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = FUN_089ebcf0();
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    else {
      uVar2 = FUN_089ebd18();
      iVar1 = FUN_089ec3fc(uVar2);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x10);
      }
      else {
        iVar1 = FUN_089ebd18();
        FUN_089eb294(*(undefined4 *)(iVar1 + 0x74));
        iVar1 = *(int *)(param_1 + 0x10);
      }
    }
  }
  if ((2 < iVar1) && (iVar1 = FUN_08816a90(), iVar1 != 0)) {
    uVar2 = FUN_08816aac();
    iVar1 = FUN_08816e8c(uVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_08816aac();
      FUN_089eb294(*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  return;
}

