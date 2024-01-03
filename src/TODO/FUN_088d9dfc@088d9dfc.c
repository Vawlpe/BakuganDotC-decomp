#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d9dfc(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x15e) != '\0') {
    *(undefined *)(param_1 + 0x15e) = 0;
    if (param_2 == '\x01') {
      FUN_088d9de8(param_1);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      iVar1 = DONE_NotZero_DAT_08AC5874();
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x16c) = 1;
      }
      else {
        uVar2 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x2c00015,0,0);
        *(undefined4 *)(param_1 + 0x16c) = 1;
      }
    }
  }
  return;
}

