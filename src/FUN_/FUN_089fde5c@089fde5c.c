#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fde5c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x1074));
  if (*(char *)(param_1 + 0x27) != '\0') {
    *(undefined4 *)(param_1 + 0x1070) = param_2;
    if (param_3 != 0) {
      *(int *)(param_1 + 0x1064) = param_3;
    }
    *(undefined *)(param_1 + 0x27) = 0;
    uVar1 = FUN_089bbf78(3);
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x1074));
  return uVar1;
}

