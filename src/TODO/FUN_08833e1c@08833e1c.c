#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08833e1c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    FUN_0883367c(param_1,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,7);
    if ((0 < iVar2) && (iVar3 = 0, iVar2 < 3)) {
      do {
        FUN_08833dc0(param_1,iVar3,0xfffffc19);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 9);
    }
  }
  return;
}

