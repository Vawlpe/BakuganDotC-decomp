#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08992cd8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x89) == '\x01') {
    *(undefined *)(param_1 + 0x89) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0xa0) {
      if (iVar2 == 0x78) {
        *(undefined4 *)(param_1 + 0x84) = 0x28;
      }
      else if (iVar2 == 0x50) {
        *(undefined4 *)(param_1 + 0x84) = 0;
      }
      else if (iVar2 == 0x28) {
        *(undefined4 *)(param_1 + 0x84) = 0x78;
      }
      else if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0x50;
      }
    }
  }
  FUN_08992a1c();
  iVar2 = _DONE_NotZero_DAT_08AC5874();
  if (iVar2 != 0) {
    uVar1 = _DONE_Get_DAT_08AC5874();
    FUN_089c6350(uVar1,6,0,0);
  }
  return;
}

