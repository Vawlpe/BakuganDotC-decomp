#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fb7bc(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined **)(param_1 + 0x20) = &DAT_08af58ec;
  if ((*(char *)(param_1 + 0x39) != '\0') && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 0)) {
    if (iVar1 == 1) {
      iVar1 = *(int *)(param_1 + 0x24);
      goto LAB_089fb82c;
    }
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
LAB_089fb82c:
  if (iVar1 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_089d8bf0(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_089d8634();
    FUN_089d7fd8(param_1,0,0);
    FUN_089d866c();
  }
  return;
}

