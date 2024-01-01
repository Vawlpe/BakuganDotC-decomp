#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08857608(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x934);
  uVar1 = 0;
  if (iVar2 < 5) {
    if ((3 < iVar2) && (param_2 == 1)) {
      return 1;
    }
  }
  else if (iVar2 < 6) {
    if ((1 < param_2) && (param_2 < 5)) {
      return 1;
    }
  }
  else if ((iVar2 < 7) && (*(char *)(param_1 + 0x943) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}

