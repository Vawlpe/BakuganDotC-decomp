#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08984638(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xbd4);
  if (fVar1 < 1.0) {
    fVar1 = fVar1 + 0.1;
    *(float *)(param_1 + 0xbd4) = fVar1;
  }
  fVar1 = fVar1 * 0.2 + 1.0;
  if (1.2 < fVar1) {
    fVar1 = 1.2;
  }
  FUN_089a51fc(fVar1,fVar1,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x68) = 0xc3fb0000;
  FUN_089a51fc(fVar1,fVar1,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4) + 0x68) =
       0xc3fa0000;
  FUN_089a51fc(fVar1,fVar1,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x5c));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x5c) + 0x68)
       = 0xc3fa8000;
  return;
}

