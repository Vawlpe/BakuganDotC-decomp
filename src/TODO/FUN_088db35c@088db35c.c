#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088db35c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x15e) != '\0') {
    iVar1 = *(int *)(param_1 + 0x180);
    *(undefined *)(param_1 + 0x15e) = 0;
    if (iVar1 != 0) {
      FUN_089f5124(*(undefined4 *)(iVar1 + 0x214),iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x174);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
  }
  return;
}

