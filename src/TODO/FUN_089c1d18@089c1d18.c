#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c1d18(int param_1,int param_2)

{
  undefined *ptr;
  undefined4 uVar1;
  
  FUN_089d8b38(param_1,0);
  *(undefined **)(param_1 + 0x20) = &DAT_08af525c;
  if (DAT_08ac5270 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    ptr = (undefined *)0x0;
  }
  else {
    ptr = (undefined *)FUN_089d77b4(DAT_08ac5270,param_2);
    *(undefined **)(param_1 + 0x28) = ptr;
  }
  if (ptr == (undefined *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(0);
    ptr = (undefined *)FUN_089d7d74(param_2 << 2,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined **)(param_1 + 0x28) = ptr;
  }
  else {
    *(undefined **)(param_1 + 0x28) = ptr;
  }
  memset_jak(ptr,0,param_2 << 2);
  *(int *)(param_1 + 0x2c) = param_2;
  *(undefined *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}

