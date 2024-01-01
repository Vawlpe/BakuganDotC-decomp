#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892f20c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x74);
  *(undefined *)(param_1 + 0x1ce8) = 0;
  if ((*(char *)(param_1 + cVar1 * 0xc + 0x1ba4) != '\0') &&
     ((int)cVar1 != (int)*(char *)(param_1 + 0x75))) {
    *(undefined *)(param_1 + 0x1ce8) = 1;
    *(char *)(param_1 + 0x75) = cVar1;
    FUN_0892d124(param_1);
    FUN_0892e23c(param_1,1,*(undefined *)(param_1 + 0x74));
    FUN_0892eec4(param_1,1,0);
    FUN_0892ed04(param_1);
    FUN_0892ede8(param_1);
  }
  return;
}

