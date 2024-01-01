#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889fdc8(int param_1)

{
  int iVar1;
  
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - 0.2;
  if (*(float *)(param_1 + 0x6c) < 0.0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x188) + 1;
  *(int *)(param_1 + 0x188) = iVar1;
  if (0x14 < iVar1) {
    FUN_08824658(DAT_08ac5c70,0xe,*(int *)(param_1 + 0x130) + 0xb0);
    *(undefined4 *)(param_1 + 0x188) = 0x96;
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  }
  return;
}

