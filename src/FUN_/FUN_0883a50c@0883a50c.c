#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883a50c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0882c220(0);
  if ((iVar1 != 0) && (DAT_08aba77d == '\0')) {
    iVar1 = *(int *)(param_1 + 0x688);
    if (iVar1 != 0) {
      uVar2 = FUN_089f2178(0x42d60000);
      FUN_089f5084(iVar1,uVar2);
    }
    iVar1 = *(int *)(param_1 + 0x68c);
    if (iVar1 != 0) {
      uVar2 = FUN_089f2178(*(undefined4 *)(param_1 + 0x6a0));
      FUN_089f5084(iVar1,uVar2);
    }
  }
  return;
}

