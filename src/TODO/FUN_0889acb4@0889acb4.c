#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889acb4(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((int)param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    if (9 < (int)param_2) {
      uVar1 = 9;
    }
  }
  *(uint *)(param_1 + 0x6b4) = uVar1;
  if (*(int *)(param_1 + 0x6cc) != 0) {
    FUN_088971f8(*(int *)(param_1 + 0x6cc),param_2 & 0xff);
  }
  return;
}

