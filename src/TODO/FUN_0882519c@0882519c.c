#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882519c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 1 << (param_1 & 0x1f);
  uVar3 = DAT_08ab9e4c | uVar2;
  if ((DAT_08ab9e4c & uVar2) == 0) {
    iVar1 = (&DAT_08ab9e34)[param_1];
    DAT_08ab9e4c = uVar3;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
    }
  }
  return;
}

