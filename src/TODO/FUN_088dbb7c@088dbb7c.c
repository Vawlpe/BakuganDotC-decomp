#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dbb7c(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x15e) != '\0') {
    *(undefined *)(param_1 + 0x15e) = 0;
    FUN_088db448(param_1,0);
    if ((param_2 == '\0') && (iVar1 = DONE_NotZero_DAT_08AC5874(), iVar1 != 0)) {
      uVar2 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar2,0x2c0002c,0,0);
    }
  }
  return;
}

