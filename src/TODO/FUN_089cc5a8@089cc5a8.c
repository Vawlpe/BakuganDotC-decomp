#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cc5a8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 4) {
    iVar2 = *(int *)(DAT_08ac58e0 + param_2 * 4 + 8);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 8),3);
      *(undefined4 *)(DAT_08ac58e0 + param_2 * 4 + 8) = 0;
    }
    uVar1 = _DONE_GetPtr_DAT_08AC51F8();
    FUN_089bcad4(uVar1);
  }
  return;
}

