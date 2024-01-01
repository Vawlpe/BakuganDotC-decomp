#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08939c50(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x7a0) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x794) + 0x6c) = 0;
    iVar1 = *(int *)(param_1 + 0x794);
    *(undefined4 *)(param_1 + 0x7a4) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 + 0x44) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 + 0x48) = 0x3f4ccccd;
    return;
  }
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(*(int *)(param_1 + 0x794) + 0x6c);
  return;
}

