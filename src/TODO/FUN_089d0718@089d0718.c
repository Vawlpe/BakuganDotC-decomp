#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d0718(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  if ((*(uint *)(param_1 + 0x34) & 1) != 0) {
    uVar3 = 1;
    iVar1 = FUN_0881b22c();
    if (iVar1 != 0) {
      uVar2 = _DONE_GetPtr_DAT_08AB0300();
      iVar1 = FUN_0881b278(uVar2);
      if (1 < iVar1) {
        uVar3 = 0;
      }
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return uVar3;
}

