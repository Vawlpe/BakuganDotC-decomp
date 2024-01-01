#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a008a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  iVar1 = FUN_089c9da8();
  iVar2 = FUN_089c9da8(param_1);
  uVar3 = FUN_089c9da8(param_1);
  puVar4 = (undefined4 *)FUN_089c9ed8(param_1,2);
  if (iVar1 == 0) {
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        return 0;
      }
      *(undefined4 *)(DAT_08ac5934 + 0x1c) = uVar3;
    }
    else {
      if (1 < iVar2) {
        return 0;
      }
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      *puVar4 = *(undefined4 *)(DAT_08ac5934 + 0x1c);
    }
    uVar5 = 0;
  }
  return uVar5;
}

