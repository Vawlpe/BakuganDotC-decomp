#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0895137c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_08909fc4(param_1,0xffffffff,0);
    if (iVar1 == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
        FUN_089f8a28(param_1 + 0x54);
      }
      else {
        FUN_089f88c0(**(undefined4 **)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x9c));
        FUN_089f88c0(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4),*(undefined4 *)(param_1 + 0xa0));
        FUN_089f88c0(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc),*(undefined4 *)(param_1 + 0xa8)
                    );
      }
    }
    else {
      FUN_089f86e4(*(undefined4 *)(*(int *)(param_1 + 0x50) + 8));
      uVar2 = 1;
    }
  }
  return uVar2;
}

