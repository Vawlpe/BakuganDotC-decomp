#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eb91c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089ebcf0();
  if (iVar1 != 0) {
    uVar2 = FUN_089ebd18();
    FUN_089ec8a8(uVar2);
  }
  iVar1 = FUN_08816a90();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar2 = FUN_08816aac();
    FUN_08816ef8(uVar2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      uVar2 = FUN_089eac30();
      iVar1 = FUN_089eb03c(uVar2,0);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
  }
  else if (iVar1 < 2) {
    iVar1 = FUN_089ebd18();
    iVar1 = FUN_089eb03c(*(undefined4 *)(iVar1 + 0x74),0);
    if (iVar1 != 0) {
      iVar1 = FUN_089ebd18();
      uVar2 = FUN_089eb248(*(undefined4 *)(iVar1 + 0x74));
      FUN_08817a90(uVar2,1);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  else if (iVar1 < 3) {
    iVar1 = FUN_08816aac();
    iVar1 = FUN_089eb03c(*(undefined4 *)(iVar1 + 0x2c),0);
    if (iVar1 != 0) {
      iVar1 = FUN_08816aac();
      uVar2 = FUN_089eb248(*(undefined4 *)(iVar1 + 0x2c));
      FUN_08817a90(uVar2,1);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  return;
}

