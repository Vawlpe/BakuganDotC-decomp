#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897c75c(int param_1)

{
  char cVar1;
  undefined uVar2;
  
  cVar1 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
  if (cVar1 == -1) {
    uVar2 = *(undefined *)(param_1 + 0xee0);
  }
  else if (cVar1 == '\0') {
    uVar2 = *(undefined *)(param_1 + 0xee0);
  }
  else {
    uVar2 = 6;
  }
  *(undefined *)(param_1 + 0x1318) = uVar2;
  *(undefined *)(param_1 + *(char *)(param_1 + 0x1318) + 0x12c0) = 1;
  return;
}

