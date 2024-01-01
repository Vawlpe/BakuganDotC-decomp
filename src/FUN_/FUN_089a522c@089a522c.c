#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a522c(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  return;
}

