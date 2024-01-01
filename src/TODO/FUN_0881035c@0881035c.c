#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0881035c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_089c9d1c();
  uVar2 = FUN_089c9da8(param_1);
  iVar3 = FUN_089bfa40(0x6e);
  uVar4 = 0;
  if (iVar3 == 0) {
    if (iVar1 == 2) {
      uVar4 = 2;
    }
    return uVar4;
  }
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      *(uint *)(iVar3 + 0xba4) = *(uint *)(iVar3 + 0xba4) | uVar2;
    }
  }
  else if (iVar1 < 2) {
    *(uint *)(iVar3 + 0xba4) = *(uint *)(iVar3 + 0xba4) & ~uVar2;
  }
  return 0;
}

