#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fb194(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*(undefined4 *)(DAT_08ac61a8 + 0x20));
  if ((*(char *)(param_1 + 4) == '\0') && (*(char *)(param_1 + 0x106) == '\0')) {
    *(undefined *)(param_1 + 4) = 1;
    uVar1 = 1;
    *(undefined *)(param_1 + 5) = 0;
    if (param_2 == 0) {
      *(undefined *)(param_1 + 0x108) = 1;
      *(undefined *)(param_1 + 0x109) = 0;
      *(undefined *)(param_1 + 0x10a) = 0;
    }
    else {
      strcpy(param_1 + 6,param_2);
    }
  }
  FUN_089bb790(*(undefined4 *)(DAT_08ac61a8 + 0x20));
  return uVar1;
}

