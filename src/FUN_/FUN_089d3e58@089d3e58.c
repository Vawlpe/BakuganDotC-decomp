#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d3e58(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_089d4038();
  if ((iVar1 == 0) && (iVar1 = FUN_089d4a48(param_1,0), iVar1 != 0)) {
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    if (param_2 < 2) {
      uVar2 = 1;
      if (0 < param_2) {
        FUN_089d4aa0(param_1,3);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
      if (param_2 < 3) {
        FUN_089d4aa0(param_1,4);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

