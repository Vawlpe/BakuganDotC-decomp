#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d3fac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_089d4a48(param_1,0);
  if ((iVar1 != 0) && (iVar1 = FUN_089d49b0(param_1,0), iVar1 != 0)) {
    FUN_089bb728(*(undefined4 *)(param_1 + 0x30));
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        uVar2 = 1;
      }
    }
    else if (iVar1 == 3) {
      uVar2 = 1;
    }
    FUN_089bb790(*(undefined4 *)(param_1 + 0x30));
  }
  return uVar2;
}

