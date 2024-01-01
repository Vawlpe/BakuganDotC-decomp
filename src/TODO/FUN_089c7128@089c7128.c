#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c7128(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  bVar1 = true;
  iVar2 = FUN_089bbe6c(9);
  if (iVar2 == 0) {
    iVar2 = 2;
    puVar5 = &DAT_08aa1310;
    do {
      uVar3 = FUN_089cd83c();
      iVar4 = FUN_089cda14(uVar3,*puVar5);
      if (iVar4 == 0) {
        bVar1 = false;
      }
      iVar2 = iVar2 + -1;
      puVar5 = puVar5 + -1;
    } while (-1 < iVar2);
    if (bVar1) {
      *(undefined4 *)(param_1 + 8) = 7;
    }
    return;
  }
  FUN_089bbf78(9);
  return;
}

