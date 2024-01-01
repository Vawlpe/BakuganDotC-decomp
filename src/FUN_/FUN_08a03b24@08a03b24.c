#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03b24(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (*(char *)(param_1 + 0x2d) == '\0') {
    *(undefined *)(param_1 + 0x2d) = 1;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  if ((*(int *)(iVar1 + 0x28) == 0) && (*(char *)(iVar1 + 0x2e) == '\0')) {
    *(undefined *)(iVar1 + 0x2e) = 1;
    if ((*(char *)(iVar1 + 0x31) != '\0') &&
       (((*(byte *)(iVar1 + 0xc) & 1) == 0 && (*(code **)(iVar1 + 8) != (code *)0x0)))) {
      (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0x18),2);
    }
  }
  return;
}

