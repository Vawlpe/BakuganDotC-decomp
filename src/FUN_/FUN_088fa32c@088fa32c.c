#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088fa32c(int param_1,int param_2)

{
  FUN_088fda94();
  *(undefined **)(param_1 + 0x2c) = &DAT_08af453c;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0xffff;
  *(undefined *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  FUN_088f94d0(*(undefined4 *)(param_1 + 0x30));
  FUN_088fa054(param_1,(int)**(short **)(param_1 + 0x30));
  *(undefined *)(param_1 + 0x4a) = 1;
  FUN_088fa1d8(0x3c888889,param_1);
  return param_1;
}

