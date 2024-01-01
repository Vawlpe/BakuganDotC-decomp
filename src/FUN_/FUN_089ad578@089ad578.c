#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ad578(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (3 < *(char *)(param_1 + 0x74)) {
    fVar2 = *(float *)(param_1 + 0xb80);
    if (fVar2 < 1.0) {
      fVar2 = fVar2 + 0.1;
      *(float *)(param_1 + 0xb80) = fVar2;
    }
    fVar2 = fVar2 * 0.2 + 1.0;
    if (1.2 < fVar2) {
      fVar2 = 1.2;
    }
    iVar1 = (*(char *)(param_1 + 0x74) + 0x2e) * 4;
    FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc3480000;
    iVar1 = (*(char *)(param_1 + 0x74) + 0x31) * 4;
    FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc3490000;
    if ('\x03' < *(char *)(param_1 + 0x74)) {
      FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe0));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe0) + 0x68) = 0xc34a0000;
    }
  }
  return;
}

