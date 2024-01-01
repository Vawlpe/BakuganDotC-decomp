#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08854eb0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x80) != param_2) || (*(int *)(param_1 + 0x84) != param_3)) {
    *(int *)(param_1 + 0x80) = param_2;
    *(int *)(param_1 + 0x84) = param_3;
    uVar1 = 1;
  }
  return uVar1;
}

