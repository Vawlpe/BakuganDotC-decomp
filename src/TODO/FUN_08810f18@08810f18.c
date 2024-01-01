#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810f18(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_089c9da8();
  uVar2 = FUN_089c9da8(param_1);
  uVar3 = 0;
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      uVar3 = FUN_0890bdb8(uVar2);
    }
  }
  else if (iVar1 < 2) {
    uVar3 = FUN_0890bcb8(uVar2);
  }
  *(undefined4 *)(DAT_08ac58c4 + 0x34) = uVar3;
  return 0;
}

