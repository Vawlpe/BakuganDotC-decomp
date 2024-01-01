#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c6eb4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar1 = true;
  iVar5 = 0;
  puVar4 = &DAT_08aa1308;
  do {
    uVar2 = FUN_089cd83c();
    iVar3 = FUN_089cdad4(uVar2,*puVar4);
    if (iVar3 == 0) {
      bVar1 = false;
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 < 3);
  if (bVar1) {
    *(undefined4 *)(param_1 + 8) = 3;
  }
  return;
}

