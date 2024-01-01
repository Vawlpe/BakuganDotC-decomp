#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08919f74(int param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x89c);
  if (fVar2 < 1.0) {
    fVar2 = fVar2 + 0.1;
    *(float *)(param_1 + 0x89c) = fVar2;
  }
  fVar2 = fVar2 * 0.2 + 1.0;
  if (1.2 < fVar2) {
    fVar2 = 1.2;
  }
  FUN_089a51fc(fVar2,fVar2,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14) + 0x68)
       = 0xc3480000;
  FUN_089a51fc(fVar2,fVar2,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x2c));
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x2c);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x2c) + 0x68)
       = 0xc3490000;
  FUN_089a51fc(fVar2,fVar2,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x48));
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x48);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x48) + 0x68)
       = 0xc34a0000;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x48) + 0x60) =
       *(float *)(param_1 + *(char *)(param_1 + 0x74) * 8 + 0x780) +
       *(float *)(param_1 + 0x900) * fVar2;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x48) + 100) =
       *(float *)(param_1 + *(char *)(param_1 + 0x74) * 8 + 0x784) +
       *(float *)(param_1 + 0x904) * fVar2;
  FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0x68) = 0xc34b0000;
  return;
}

