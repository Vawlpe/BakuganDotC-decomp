#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ce09c(int param_1,undefined *param_2,undefined4 *param_3)

{
  undefined uVar1;
  
  if (param_2 == (undefined *)0x0) {
    memset_jak((undefined *)(param_1 + 2),0,2);
    memset_jak((undefined *)(param_1 + 4),0,2);
    memset_jak((undefined *)(param_1 + 6),0,2);
    memset_jak((undefined *)(param_1 + 8),0,2);
  }
  else {
    uVar1 = param_2[1];
    *(undefined *)(param_1 + 2) = *param_2;
    *(undefined *)(param_1 + 3) = uVar1;
    uVar1 = param_2[3];
    *(undefined *)(param_1 + 4) = param_2[2];
    *(undefined *)(param_1 + 5) = uVar1;
    uVar1 = param_2[5];
    *(undefined *)(param_1 + 6) = param_2[4];
    *(undefined *)(param_1 + 7) = uVar1;
    uVar1 = param_2[7];
    *(undefined *)(param_1 + 8) = param_2[6];
    *(undefined *)(param_1 + 9) = uVar1;
  }
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *param_3;
    *(undefined4 *)(param_1 + 0x34) = param_3[1];
  }
  return;
}

