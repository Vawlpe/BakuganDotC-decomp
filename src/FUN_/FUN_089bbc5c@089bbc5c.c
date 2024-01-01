#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bbc5c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar3 = 0;
  puVar2 = &DAT_08ac51d8;
  do {
    iVar1 = FUN_089bbe6c(*puVar2);
    if (iVar1 != 0) {
      uVar4 = 0;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 7);
  return uVar4;
}

