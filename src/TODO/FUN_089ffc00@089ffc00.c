#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ffc00(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x18) = &DAT_08af59cc;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_08a016f4(*(int *)(param_1 + 0x14),3);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}
