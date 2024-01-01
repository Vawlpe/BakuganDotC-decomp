#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882cfa0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0882c2cc(0xb,0);
  *(undefined4 *)(param_1 + 0x658) = param_2;
  *(undefined4 *)(param_1 + 0x65c) = 0xffffffff;
  iVar1 = FUN_0882c220(0xc);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x64c) = 1;
  }
  else {
    iVar1 = FUN_0884b248();
    if (iVar1 != 0) {
      uVar2 = FUN_0884b268();
      FUN_0884dfe4(uVar2);
      return;
    }
  }
  return;
}

