#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df794(int param_1,undefined param_2,char param_3,char param_4)

{
  int iVar1;
  
  *(undefined *)(*(int *)(param_1 + 0x350) + 0x39) = param_2;
  iVar1 = *(int *)(param_1 + 0x350);
  if (*(byte *)(iVar1 + 0x39) == 0) {
    *(undefined *)(iVar1 + 0x12) = 0;
  }
  else if (*(byte *)(iVar1 + 0x39) < 2) {
    if (*(int *)(param_1 + 0x35c) != 0) {
      if (param_3 == *(char *)(iVar1 + 0x3b)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x35c) = 0;
    }
    *(char *)(iVar1 + 0x3b) = param_3;
    FUN_088df158(param_1);
    *(bool *)(param_1 + 0x391) = param_4 == '\0';
    FUN_088e05dc(param_1,9,0);
  }
  return;
}

