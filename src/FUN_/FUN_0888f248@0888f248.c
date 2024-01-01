#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888f248(int param_1,int param_2)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x96c) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    FUN_08860438(*(undefined4 *)(param_1 + 0x1a0));
    uVar1 = *(uint *)(param_1 + 0x9d4);
  }
  else {
    FUN_0886271c(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x96c));
    uVar1 = *(uint *)(param_1 + 0x9d4);
  }
  *(uint *)(param_1 + 0x9d4) = uVar1 & 0xfffe7fff;
  FUN_0888f214(param_1);
  return;
}

