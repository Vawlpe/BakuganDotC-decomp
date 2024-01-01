#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bccc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(*(undefined4 *)(DAT_08ac51f8 + 4));
  piVar2 = *(int **)(DAT_08ac51f8 + 8);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),param_2);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  FUN_089bb790(*(undefined4 *)(DAT_08ac51f8 + 4));
  return uVar3;
}

