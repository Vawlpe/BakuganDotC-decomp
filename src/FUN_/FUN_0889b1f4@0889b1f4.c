#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889b1f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar4 = 0;
    iVar3 = 0;
    if (0 < *(short *)(param_1 + 8)) {
      do {
        iVar2 = ((undefined4 *)(iVar1 + iVar3))[1];
        if (iVar2 == 0) {
          *(undefined4 *)(iVar1 + iVar3) = 0;
        }
        else {
          FUN_089d8634();
          FUN_089d7fd8(iVar2 + -0x10,0,0);
          FUN_089d866c();
          *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 + 4) = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 8;
        iVar1 = *(int *)(param_1 + 0xc);
      } while (iVar4 < *(short *)(param_1 + 8));
    }
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  return;
}

