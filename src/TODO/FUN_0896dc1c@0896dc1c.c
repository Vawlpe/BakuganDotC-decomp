#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896dc1c(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  param_2 = param_2 & 0xff;
  if (param_2 == 0) {
    fVar2 = 1.0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x2a54);
    fVar2 = 1.1;
    if (fVar4 < 1.0) {
      fVar4 = fVar4 + 0.2;
      *(float *)(param_1 + 0x2a54) = fVar4;
    }
    fVar4 = fVar4 * 0.1 + 1.0;
    if (fVar4 <= 1.1) {
      fVar2 = fVar4;
    }
  }
  if (param_2 == 0) {
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b72) + (int)*(char *)(param_1 + 0x74)) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(byte *)(param_1 + 0x2b72) + (int)*(char *)(param_1 + 0x74)) * 4) + 0x68) =
         0xc3fb0000;
  }
  else if (param_2 < 2) {
    iVar3 = param_1 + param_2;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b80) + *(char *)(param_1 + 0x29be) * 4 +
                  (int)*(char *)(iVar3 + 0x74)) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(byte *)(param_1 + 0x2b80) + *(char *)(param_1 + 0x29be) * 4 +
              (int)*(char *)(iVar3 + 0x74)) * 4) + 0x68) = 0xc3fa0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b7c) + *(char *)(param_1 + 0x29be) * 4 +
                  (int)*(char *)(iVar3 + 0x74)) * 4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b7c) + *(char *)(param_1 + 0x29be) * 4 +
                    (int)*(char *)(iVar3 + 0x74)) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(byte *)(param_1 + 0x2b7c) + *(char *)(param_1 + 0x29be) * 4 +
              (int)*(char *)(iVar3 + 0x74)) * 4) + 0x68) = 0xc3fa8000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b7e) + *(char *)(param_1 + 0x29be) * 4 +
                  (int)*(char *)(iVar3 + 0x74)) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(byte *)(param_1 + 0x2b7e) + *(char *)(param_1 + 0x29be) * 4 +
              (int)*(char *)(iVar3 + 0x74)) * 4) + 0x68) = 0xc3fb0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b8e) + *(char *)(param_1 + 0x29be) * 4 +
                  (int)*(char *)(iVar3 + 0x74)) * 4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b8e) + *(char *)(param_1 + 0x29be) * 4 +
                    (int)*(char *)(iVar3 + 0x74)) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(byte *)(param_1 + 0x2b8e) + *(char *)(param_1 + 0x29be) * 4 +
              (int)*(char *)(iVar3 + 0x74)) * 4) + 0x68) = 0xc3fb8000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b8c) + *(char *)(param_1 + 0x29be) * 4 +
                  (int)*(char *)(iVar3 + 0x74)) * 4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b8c) + *(char *)(param_1 + 0x29be) * 4 +
                    (int)*(char *)(iVar3 + 0x74)) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(byte *)(param_1 + 0x2b8c) + *(char *)(param_1 + 0x29be) * 4 +
              (int)*(char *)(iVar3 + 0x74)) * 4) + 0x68) = 0xc3fc0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4) + 0x68) =
         0xc3fc8000;
  }
  return;
}

