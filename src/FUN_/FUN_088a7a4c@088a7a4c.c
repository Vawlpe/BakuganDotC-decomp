#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a7a4c(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x281) == '\0') && (param_2 != 0)) {
    iVar1 = FUN_088a7a00(param_1,param_2);
    if (iVar1 != 0) {
      (&DAT_08abd53c)[*(int *)(param_1 + 0x328)] = '\x01';
      FUN_088888f0(param_2 + 0x434,*(int *)(param_1 + 0x328) + 0xb);
      return;
    }
    if ((&DAT_08abd53c)[*(int *)(param_1 + 0x328)] == '\0') {
      FUN_088865ac(param_2 + 0x434,*(int *)(param_1 + 0x328) + 0xb);
    }
  }
  return;
}

