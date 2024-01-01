#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08865608(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x394) == 0x10) {
    *(undefined4 *)(param_1 + 0x394) = 0xf;
    iVar1 = param_1 + 0x300;
    if (*(int *)(param_1 + 8) == 0x15) {
      FUN_08824790(DAT_08abd5b0,0x5e,iVar1,2);
      FUN_08824790(DAT_08abd5b0,0x11f,iVar1,2);
    }
    else {
      FUN_08824790(DAT_08ac5c70,0x163,iVar1,2);
      FUN_08824790(DAT_08ac5c70,0x164,iVar1,2);
    }
  }
  return;
}

