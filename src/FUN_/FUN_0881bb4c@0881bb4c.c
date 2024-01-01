#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0881bb4c(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 4) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined *)(param_1 + 0xc) = 1;
    FUN_0880d360(0);
  }
  return bVar1;
}

