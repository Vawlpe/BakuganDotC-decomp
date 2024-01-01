#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cc7d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(DAT_08ac5934 + 0x1c);
  uVar3 = 0;
  uVar2 = 1;
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      goto LAB_089cc81c;
    }
    uVar2 = 1;
  }
  else {
    if (1 < iVar1) {
      iVar1 = *(int *)(param_1 + 0x10);
      goto LAB_089cc81c;
    }
    uVar2 = 2;
  }
  iVar1 = *(int *)(param_1 + 0x10);
LAB_089cc81c:
  iVar1 = (**(code **)(iVar1 + 0x2c))(param_1 + *(short *)(iVar1 + 0x28));
  if ((iVar1 == 2) && (iVar1 = zz_sceUtilitySavedataUpdate(uVar2), iVar1 == 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

