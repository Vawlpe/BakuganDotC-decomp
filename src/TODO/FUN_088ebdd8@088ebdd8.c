#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ebdd8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = 0x14;
  puVar3 = &DAT_08a990a8;
  do {
    iVar2 = iVar2 + -1;
    if (*puVar3 == (param_2 & 0xffff)) {
      iVar2 = DONE_NotZero_DAT_08AC5874();
      if (iVar2 == 0) {
        return;
      }
      uVar1 = DONE_Get_DAT_08AC5874();
      FUN_089c6588(uVar1,puVar3[1]);
      return;
    }
    puVar3 = puVar3 + -2;
  } while (-1 < iVar2);
  return;
}

