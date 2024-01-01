#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08934ec0(int param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xca8);
  if (fVar2 < 1.0) {
    fVar2 = fVar2 + 0.1;
    *(float *)(param_1 + 0xca8) = fVar2;
  }
  fVar2 = fVar2 * 0.2 + 1.0;
  if (1.2 < fVar2) {
    fVar2 = 1.2;
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0x68) = 0xc3500000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x38));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x38) + 0x68) = 0xc3480000
    ;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0xa8));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0xa8) + 0x68) = 0xc34a0000
    ;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0xa8);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x88));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x88) + 0x68) = 0xc3520000
    ;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x88);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 200));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 200) + 0x68)
         = 0xc34b0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x60));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x60) + 0x68) = 0xc34c0000
    ;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x28));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x28) + 0x68) = 0xc3490000
    ;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x50));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x50) + 0x68) = 0xc34d0000
    ;
    return;
  }
  FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 0x68) = 0xc34a0000;
  FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x98) + 0x68) = 0xc3480000;
  FUN_089a51fc(fVar2,fVar2,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xbc));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xbc) + 0x68) = 0xc3490000;
  return;
}

