#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970550(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0xb9c) = 0;
    *(undefined4 *)(param_1 + 0xba0) = 0x43880000;
    *(undefined4 *)(param_1 + 0xba4) = 0x43880000;
    *(undefined *)(param_1 + 0xba8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xba0) = 0;
    *(undefined4 *)(param_1 + 0xba4) = 0;
    *(undefined4 *)(param_1 + 0xb9c) = 0;
    *(undefined *)(param_1 + 0xba8) = 0;
  }
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    FUN_089582c4(1);
    iVar4 = iVar4 + 1;
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
    iVar3 = iVar3 + 4;
    *(float *)(*piVar1 + 100) = *(float *)(iVar2 + 0xa9c) + *(float *)(param_1 + 0xba0);
    iVar2 = iVar2 + 4;
  } while (iVar4 < 0x3a);
  return;
}

