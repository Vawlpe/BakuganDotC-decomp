#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088be144(int param_1,int param_2,int param_3)

{
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (9 < param_3) {
    *(undefined4 *)(param_1 + 0x60) = 0x43988000;
    *(undefined4 *)(param_2 + 0x60) = 0x43a48000;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x43988000;
    *(undefined4 *)(param_2 + 0x60) = 0x43988000;
  }
  *(undefined4 *)(param_1 + 100) = 0x42f40000;
  *(undefined4 *)(param_2 + 100) = 0x42f40000;
  FUN_089f4a90((float)((param_3 / 10) / 5),(float)((param_3 / 10) % 5),param_1);
  FUN_089f4a90((float)((param_3 % 10) / 5),(float)((param_3 % 10) % 5),param_2);
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) | 1;
  if (9 < param_3) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    return;
  }
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) & 0xfffffffe;
  return;
}

