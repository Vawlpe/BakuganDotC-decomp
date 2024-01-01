#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08904608(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (WeirdBuff == 0) {
    cVar1 = *(char *)(param_1 + 0x4d);
  }
  else {
    if ((*(byte *)(WeirdBuff + 4) & 8) != 0) {
      *(undefined *)(param_1 + 0x4d) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x4d);
  }
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    return;
  }
  FUN_08903afc(param_1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x20);
  (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x10));
  FUN_089e2b14(*(undefined4 *)(param_1 + 0x50),2);
  return;
}

