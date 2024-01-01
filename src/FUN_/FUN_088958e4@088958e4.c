#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088958e4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088931b8(param_1,*(int *)(param_1 + 0xec) + 0x20);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined *)(param_1 + 0xd4) = 1;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined *)(param_1 + 0xe4) = 0;
    *(undefined *)(param_1 + 0xe5) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0xec);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else if (*(int *)(iVar1 + 0x5c) == 0) {
    if (*(int *)(iVar1 + 0x40) == 0) {
      iVar1 = FUN_0889367c(param_1 + 0x2d8);
      if (iVar1 == 0) {
        FUN_0888f82c(param_1,*(int *)(param_1 + 0xec) + 0x20);
      }
      FUN_08894c40(param_1);
      return;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined *)(param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0xe4) = 0;
  *(undefined *)(param_1 + 0xe5) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}

