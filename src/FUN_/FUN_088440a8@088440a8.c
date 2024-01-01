#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088440a8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0880d354();
  if ((iVar1 != 0) && (iVar1 = FUN_089cf8ec(0), iVar1 != 0)) {
    FUN_089d0d38();
  }
  iVar1 = FUN_0882c220(9);
  if (iVar1 != 0) {
    if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
      iVar1 = FUN_089c9b48(3,DAT_08ac58c8);
      if (iVar1 == 0) {
        FUN_0884091c(param_1);
      }
      else {
        FUN_0882c2cc(10,1);
      }
    }
    else {
      FUN_08842f78(param_1);
    }
  }
  return;
}

