#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d8710(int param_1)

{
  *(undefined **)(param_1 + 0x14) = &DAT_08af5394;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_089d882c(param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  DAT_08ac5bb0 = DAT_08ac5bb0 + 1;
  *(int *)(param_1 + 0xc) = DAT_08ac5bb0;
  return param_1;
}

