#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e12e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x3a1) == '\0') {
    if ((*(char *)(param_1 + 0x3a0) == '\0') && (*(char *)(param_1 + 0x3b8) != '\0')) {
      iVar1 = _DONE_NotZero_DAT_08AC5874();
      if (iVar1 != 0) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x2c00029,0,0);
      }
      iVar1 = _DONE_NotZero_DAT_08AC5874();
      if (iVar1 != 0) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x2c0002a,0,0);
      }
      FUN_088243d8(DAT_08ac5c70,0x26,param_1 + 0x1b0);
      FUN_088243d8(DAT_08ac5c70,10,param_1 + 0x1b0);
      *(undefined *)(param_1 + 0x3a0) = 1;
      *(undefined4 *)(param_1 + 0x3a8) = 0xfffffff1;
      *(undefined *)(param_1 + 0x3b8) = 0;
    }
  }
  else {
    iVar1 = _DONE_NotZero_DAT_08AC5874();
    if (iVar1 != 0) {
      uVar2 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar2,3,0,0);
    }
  }
  return;
}

