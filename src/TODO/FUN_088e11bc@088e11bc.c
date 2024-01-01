#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e11bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x3a0) == '\0') {
    if ((*(char *)(param_1 + 0x3a1) == '\0') && (*(char *)(param_1 + 0x3b8) != '\0')) {
      iVar1 = _DONE_NotZero_DAT_08AC5874();
      if (iVar1 != 0) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x2c00026,0,0);
      }
      iVar1 = _DONE_NotZero_DAT_08AC5874();
      if (iVar1 != 0) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        uVar2 = FUN_089c6350(uVar2,0x2c0002b,0,0);
        *(undefined4 *)(param_1 + 0x3dc) = uVar2;
      }
      *(undefined *)(param_1 + 0x3a1) = 1;
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      *(undefined *)(param_1 + 0x3b8) = 0;
      FUN_08824828(DAT_08ac5c70,0xf,0,&DAT_08b00190);
      FUN_08824828(DAT_08ac5c70,0x10,0,&DAT_08b00190);
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

