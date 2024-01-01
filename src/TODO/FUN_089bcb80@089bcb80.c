#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bcb80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_089bb728(*(undefined4 *)(DAT_08ac51f8 + 4));
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (piVar1 = *(int **)(DAT_08ac51f8 + 8), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0xc))
                      ((int)piVar1 + (int)*(short *)(*piVar1 + 8),param_2,param_3,param_4);
  }
  FUN_089bb790(*(undefined4 *)(DAT_08ac51f8 + 4));
  return uVar2;
}

