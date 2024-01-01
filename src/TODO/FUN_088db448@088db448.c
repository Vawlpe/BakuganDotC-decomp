#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088db448(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 400) = 0;
    FUN_089df75c(param_1);
    FUN_089df730(0x40400000,param_1);
    FUN_089df450(0x40400000,param_1);
    *(undefined *)(param_1 + 0xb0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 400) = 0x3f800000;
    FUN_089df75c(0x40400000,param_1);
    FUN_089df730(0x42700000,param_1);
    FUN_089df450(0x40400000,param_1);
    *(undefined *)(param_1 + 0xb0) = 1;
  }
  return;
}

