#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ab80c(int param_1)

{
  int iVar1;
  undefined uVar2;
  
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  FUN_089ab6d8();
  FUN_089ab74c(param_1);
  uVar2 = 6;
  iVar1 = FUN_089ab7a0(param_1);
  if (iVar1 == 1) {
    uVar2 = 7;
  }
  *(undefined *)(param_1 + 0xbb3) = uVar2;
  return;
}

