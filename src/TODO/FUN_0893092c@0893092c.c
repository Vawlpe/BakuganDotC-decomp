#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893092c(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x1b80);
  if (fVar3 < 1.0) {
    fVar3 = fVar3 + 0.1;
    *(float *)(param_1 + 0x1b80) = fVar3;
  }
  fVar3 = fVar3 * 0.2 + 1.0;
  if (1.2 < fVar3) {
    fVar3 = 1.2;
  }
  FUN_089a51fc(fVar3,fVar3,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x68));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x68) + 0x68)
       = 0xc3480000;
  FUN_089a51fc(fVar3,fVar3,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0xb8));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0xb8) + 0x68)
       = 0xc3490000;
  FUN_089a51fc(fVar3,fVar3,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x108));
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x108);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xffffffdf;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x108) + 0x68)
       = 0xc34a0000;
  FUN_089a51fc(fVar3,fVar3,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x178));
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x178);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xffffffdf;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x178) + 0x68)
       = 0xc34d0000;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x178) + 0x60) =
       *(float *)(param_1 + *(char *)(param_1 + 0x74) * 8 + 0x1824) +
       *(float *)(param_1 + 0x1cd0) * fVar3;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x178) + 100) =
       *(float *)(param_1 + *(char *)(param_1 + 0x74) * 8 + 0x1828) +
       *(float *)(param_1 + 0x1cd4) * fVar3;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x74) < 6) {
    FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(iVar2 + *(char *)(param_1 + 0x74) * 8 + 0x1c8));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 8 + 0x1c8) + 0x68) =
         0xc34e0000;
    iVar2 = *(char *)(param_1 + 0x74) * 8;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x1c8) + 0x60) =
         *(float *)(param_1 + iVar2 + 0x1824) + *(float *)(param_1 + 0x1cd8) * fVar3;
    iVar2 = *(char *)(param_1 + 0x74) * 8;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x1c8) + 100) =
         *(float *)(param_1 + iVar2 + 0x1828) + *(float *)(param_1 + 0x1cdc) * fVar3;
    FUN_089a51fc(fVar3,fVar3,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 8 + 0x1cc));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 8 + 0x1cc) + 0x68) =
         0xc34e0000;
    iVar2 = *(char *)(param_1 + 0x74) * 8;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x1cc) + 0x60) =
         *(float *)(param_1 + iVar2 + 0x1824) + *(float *)(param_1 + 0x1ce0) * fVar3;
    iVar2 = *(char *)(param_1 + 0x74) * 8;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x1cc) + 100) =
         *(float *)(param_1 + iVar2 + 0x1828) + *(float *)(param_1 + 0x1ce4) * fVar3;
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(iVar2 + 100));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0x68) = 0xc34c0000;
  cVar1 = *(char *)(param_1 + 0x74);
  iVar2 = FUN_0892adcc(param_1,0,*(undefined *)(param_1 + 0x1b7e));
  if (cVar1 == iVar2) {
    FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x68) = 0xc34b0000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xffffffdf;
  }
  return;
}

