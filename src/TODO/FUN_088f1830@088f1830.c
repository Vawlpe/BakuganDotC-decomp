#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1830(int param_1,short param_2)

{
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(undefined *)(param_1 + 0x272) = 0;
    return;
  }
  FUN_089bf754(0x176,(int)param_2);
  *(undefined *)(param_1 + 0x269) = 7;
  FUN_088bad9c(DAT_08ac5c90);
  return;
}

