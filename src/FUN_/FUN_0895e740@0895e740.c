#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0895e740(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    piVar1 = (int *)FUN_0880cc48();
    uVar2 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
    if ((int)uVar2 < 0) {
      uVar3 = -(-uVar2 & 7) & 0x1f;
    }
    else {
      uVar3 = uVar2 & 7;
    }
    if (((uint)*(byte *)(*piVar1 + ((int)(uVar2 + ((uint)((int)uVar2 >> 3) >> 0x1d)) >> 3) + 0x5be)
        & 1 << uVar3) == 0) {
      return 2;
    }
  }
  return 1;
}

