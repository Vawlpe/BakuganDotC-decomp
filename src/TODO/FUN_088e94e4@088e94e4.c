#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e94e4(int param_1)

{
  FUN_088e6e50();
  if (((*(int *)(param_1 + 0x3a0) != 5) && (*(int *)(param_1 + 0x3a0) != 10)) &&
     (*(int *)(param_1 + 0x450) != 0)) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0x174))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x170),1);
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}

