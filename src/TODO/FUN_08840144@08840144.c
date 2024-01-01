#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08840144(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0882c220(7);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0xb0) = 8;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    iVar1 = FUN_0882c220(4);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0xb0) = 5;
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      iVar1 = FUN_0882c220(5);
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0xb0) = 6;
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
      else {
        iVar1 = FUN_0882c220(6);
        if (iVar1 == 1) {
          *(undefined4 *)(param_1 + 0xb0) = 7;
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
        else {
          FUN_0883fcf8(param_1);
        }
      }
    }
  }
  return;
}

