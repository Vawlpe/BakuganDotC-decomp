#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2df18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar1 = FUN_08a2e788();
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (iVar1 == 0) {
      iVar3 = FUN_08a2e754(uVar2);
      uVar2 = *(undefined4 *)(param_1 + 8);
    }
    uVar2 = FUN_08a2e774(uVar2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    if (iVar3 != 0) break;
    iVar1 = *(int *)(param_1 + 8);
  }
  return iVar3;
}
