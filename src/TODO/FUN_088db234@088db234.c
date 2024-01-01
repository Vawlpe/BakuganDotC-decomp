#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088db234(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  if (((*(char *)(param_1 + 0x15e) != '\0') && ((*(byte *)(param_1 + 0x15f) & 1) == 0)) &&
     (iVar1 = FUN_0881a580(*(undefined4 *)(param_1 + 0x174)), iVar1 != 0)) {
    iVar1 = _DONE_NotZero_DAT_08AC5874();
    if (iVar1 == 0) {
      bVar3 = *(byte *)(param_1 + 0x15f);
    }
    else {
      uVar2 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar2,0x2c0000e,0,0);
      bVar3 = *(byte *)(param_1 + 0x15f);
    }
    *(byte *)(param_1 + 0x15f) = bVar3 | 1;
  }
  return;
}

