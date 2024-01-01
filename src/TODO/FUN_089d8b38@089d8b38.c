#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d8b38(int param_1,undefined4 param_2)

{
  *(undefined **)(param_1 + 0x20) = &DAT_08af53a4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_089d8c60(param_1,param_2,1);
  *(undefined4 *)(param_1 + 8) = 0;
  DAT_08ac5bb8 = DAT_08ac5bb8 + 1;
  *(int *)(param_1 + 0xc) = DAT_08ac5bb8;
  return param_1;
}

