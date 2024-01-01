#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088711b4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x148);
  *(uint *)(param_1 + 0x148) = uVar2 & 0xfffffeff;
  *(uint *)(param_1 + 0x148) = uVar2 & 0xfffffe7f;
  if (*(int *)(param_1 + 0x3a4) == 0) {
    if ((*(uint *)(param_1 + 0x16c) & 0x40000) != 0) {
      *(undefined4 *)(param_1 + 0x3a4) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + 1;
    FUN_0880d354();
    if (9 < *(int *)(param_1 + 0x3a4)) {
      *(undefined4 *)(param_1 + 0x3a4) = 0;
      return;
    }
  }
  iVar1 = FUN_088886fc(param_1 + 0x434);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x3a8) != 0)) && (0 < *(int *)(param_1 + 0x3a4))) &&
     (((0 < *(int *)(param_1 + 0x3a0) && (*(int *)(param_1 + 0x140) == 3)) &&
      (*(char *)(*(int *)(param_1 + 0x3a8) + 0x47c) == '\0')))) {
    iVar3 = 1;
    iVar1 = FUN_0880d354();
    if (iVar1 != 0) {
      iVar3 = 2;
    }
    if (*(int *)(param_1 + 0x3a4) <= iVar3) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x100;
    }
    iVar3 = 3;
    iVar1 = FUN_0880d354();
    if (iVar1 != 0) {
      iVar3 = 6;
    }
    if (*(int *)(param_1 + 0x3a4) <= iVar3) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x80;
    }
  }
  return;
}

