#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884c3d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_0884b248();
  if ((iVar1 != 0) && (*(int *)(DAT_08ac58c4 + 0x20) == 2)) {
    uVar2 = FUN_0880cc48();
    iVar1 = FUN_0880d0ac(uVar2,7);
    if (iVar1 == param_1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

