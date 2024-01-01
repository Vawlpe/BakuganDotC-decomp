#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cecb8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_089ceeac(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_089d73e0(*(undefined4 *)(param_1 + 0x48),param_2);
      if (iVar1 != 0) {
        iVar1 = **(int **)(param_1 + 0x48);
        (**(code **)(iVar1 + 0x14))
                  ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar1 + 0x10),param_2);
      }
    }
    else {
      FUN_089cee28(param_1,param_2);
    }
  }
  return;
}

