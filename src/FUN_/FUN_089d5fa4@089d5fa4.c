#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d5fa4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((-1 < (int)param_2) && (param_2 < 0x78)) && (*(char *)(param_1 + 0x4c) == '\0')) &&
     (*(char *)(param_1 + 0x4d) == '\0')) {
    *(undefined *)(param_1 + 0x4c) = 1;
    *(uint *)(param_1 + 0x50) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}

