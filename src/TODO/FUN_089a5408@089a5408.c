#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a5408(undefined4 param_1,char param_2,int param_3,int param_4,uint param_5)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_4 + 0x1c) = 0;
    if ((param_5 & 1) != 0) {
      *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_3 + 0xbc);
    }
    if ((param_5 & 2) != 0) {
      FUN_089f46dc(param_3);
      *(uint *)(param_3 + 0xd0) = *(uint *)(param_3 + 0xd0) | 0x20;
      FUN_089a51fc(param_1,param_1,0,param_3);
      *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x90);
    }
  }
  else {
    *(undefined4 *)(param_4 + 0x1c) = 0;
    if ((param_5 & 1) != 0) {
      *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_3 + 0xbc);
    }
    if ((param_5 & 2) != 0) {
      *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_3 + 0x90);
    }
  }
  return;
}

