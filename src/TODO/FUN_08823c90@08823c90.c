#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08823c90(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x74) = &DAT_08af16e4;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    if ((*(char *)(param_1 + 0x94) != '\0') && (iVar1 = *(int *)(param_1 + 0x80), iVar1 != 0)) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    FUN_089f4fe0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

