#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889aa70(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x674) == '\0') {
    FUN_08899ad0(param_1);
    if (*(int *)(param_1 + 0x6cc) != 0) {
      FUN_088971f8(*(int *)(param_1 + 0x6cc),*(uint *)(param_1 + 0x6b4) & 0xff);
    }
    *(undefined *)(param_1 + 0x674) = 1;
  }
  FUN_088686b0(param_1);
  iVar1 = FUN_08899b0c(param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x6cc) != 0)) {
    FUN_08897224();
  }
  return;
}

