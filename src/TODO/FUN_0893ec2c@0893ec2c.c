#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893ec2c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x7fc);
  *(undefined *)(param_1 + (uint)bVar1 + 0x7f2) = *(undefined *)(param_1 + 0x75);
  *(byte *)(param_1 + 0x7fc) = bVar1 + 1;
  return;
}

