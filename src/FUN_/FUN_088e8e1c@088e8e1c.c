#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e8e1c(undefined4 param_1,int param_2)

{
  FUN_088e9bb0(*(undefined4 *)(param_2 + 0x408),param_1,*(undefined4 *)(param_2 + 0x420),
               *(float *)(param_2 + 0x40c) * 1.273239,*(undefined4 *)(param_2 + 0x418),
               *(undefined4 *)(param_2 + 0x450));
  if (*(int *)(param_2 + 0x450) != 2) {
    *(undefined4 *)(param_2 + 0x450) = 2;
  }
  return;
}

