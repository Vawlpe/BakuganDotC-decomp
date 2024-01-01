#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d4f38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    iVar1 = FUN_089d2e60();
    if (iVar1 != 0) {
      uVar2 = FUN_089d2e88();
      FUN_089d2fb0(uVar2);
      uVar2 = FUN_089d2e88();
      FUN_089d3028(uVar2);
      return;
    }
  }
  else {
    iVar1 = FUN_089d2e60();
    if (iVar1 != 0) {
      uVar2 = FUN_089d2e88();
      FUN_089d2fb0(uVar2);
      uVar2 = FUN_089d2e88();
      FUN_089d3028(uVar2);
    }
  }
  return;
}

