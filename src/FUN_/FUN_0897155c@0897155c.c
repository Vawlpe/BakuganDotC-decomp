#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897155c(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (3 < *(char *)(param_1 + 0x74)) {
    fVar2 = *(float *)(param_1 + 0xbb4);
    if (fVar2 < 1.0) {
      fVar2 = fVar2 + 0.1;
      *(float *)(param_1 + 0xbb4) = fVar2;
    }
    fVar2 = fVar2 * 0.2 + 1.0;
    if (1.2 < fVar2) {
      fVar2 = 1.2;
    }
    iVar1 = (*(char *)(param_1 + 0x74) + 0x2c) * 4;
    FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc47a0000;
    iVar1 = (*(char *)(param_1 + 0x74) + 0x2e) * 4;
    FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc47a4000;
    if ('\x03' < *(char *)(param_1 + 0x74)) {
      FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd0));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd0) + 0x68) = 0xc47a8000;
    }
  }
  return;
}

