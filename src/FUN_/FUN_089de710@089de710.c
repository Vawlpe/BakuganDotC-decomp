#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089de710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_089be228(DAT_08ac520c);
  if (iVar1 != 0) {
    FUN_089de58c(param_1,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),param_3,param_2);
    return 1;
  }
  return 0;
}

