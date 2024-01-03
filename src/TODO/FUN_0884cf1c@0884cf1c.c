#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884cf1c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
  if ((*(int *)(*piVar1 + *(int *)(DAT_08ac58c4 + 4) * 4 + 0x250) == 2) &&
     (iVar2 = FUN_0884cd90(param_1), iVar2 == 1)) {
    FUN_089b2098();
  }
  FUN_0884cd90(param_1);
  return;
}

