#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a31834(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = 0;
  while( true ) {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_08a321b4(iVar2);
    uVar3 = *(undefined4 *)(param_1 + 8);
    if (iVar2 == 0) {
      iVar1 = FUN_08a32180(uVar3);
      uVar3 = *(undefined4 *)(param_1 + 8);
    }
    uVar3 = FUN_08a321a0(uVar3);
    *(undefined4 *)(param_1 + 8) = uVar3;
    if (iVar1 != 0) break;
    iVar2 = *(int *)(param_1 + 8);
  }
  return;
}

