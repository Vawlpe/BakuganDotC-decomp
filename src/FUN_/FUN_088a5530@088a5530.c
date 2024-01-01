#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a5530(int param_1)

{
  int iVar1;
  
  FUN_089d8710(param_1,0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2664;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xc3c80000;
  *(undefined4 *)(param_1 + 0x28) = 0x458ca000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = DAT_08abd530;
  if (DAT_08abd530 == 0) {
    FUN_088a54a8(param_1);
  }
  FUN_089d8984(param_1,iVar1);
  return param_1;
}

