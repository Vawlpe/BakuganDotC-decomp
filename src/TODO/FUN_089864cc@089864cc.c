#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089864cc(int param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = param_1 + *(char *)(param_1 + 0xbcc) * 0x28;
  fVar5 = *(float *)(iVar3 + 0x298) + 0.0625;
  fVar4 = *(float *)(param_1 + 0xca4);
  iVar2 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4;
  if (param_2 == '\0') {
    *(float *)(iVar3 + 0x298) = fVar5;
    *(float *)(*(int *)(iVar2 + 0x34) + 0x60) =
         (float)(int)*(short *)(iVar3 + 0x290) + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0)) * fVar4;
    iVar2 = param_1 + *(char *)(param_1 + 0xbcc) * 0x28;
    fVar4 = *(float *)(iVar2 + 0x298) - 1.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 100) =
         (float)(int)*(short *)(iVar2 + 0x292) + (1.0 - fVar4 * fVar4) * *(float *)(param_1 + 0xca8)
    ;
    fVar4 = *(float *)(param_1 + *(char *)(param_1 + 0xbcc) * 0x28 + 0x298) - 1.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x90) =
         *(float *)(param_1 + 0xcac) +
         (1.0 - fVar4 * fVar4) * (*(float *)(param_1 + 0xcb0) - *(float *)(param_1 + 0xcac));
    iVar3 = param_1 + *(char *)(param_1 + 0xbcc) * 0x28;
    bVar1 = 1.0 <= *(float *)(iVar3 + 0x298);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    if (bVar1) {
      *(float *)(iVar2 + 0x60) = (float)(int)*(short *)(iVar3 + 0x294);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 100) =
           (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0xbcc) * 0x28 + 0x296);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x90) =
           *(undefined4 *)(param_1 + 0xcb0);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    }
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x9c) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                 *(undefined4 *)(iVar2 + 0x9c),iVar2,0);
  }
  else {
    *(float *)(iVar3 + 0x298) = fVar5;
    *(float *)(*(int *)(iVar2 + 0x34) + 0x60) =
         (float)(int)*(short *)(iVar3 + 0x290) + fVar5 * fVar5 * fVar4;
    iVar2 = param_1 + *(char *)(param_1 + 0xbcc) * 0x28;
    fVar4 = *(float *)(iVar2 + 0x298);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 100) =
         (float)(int)*(short *)(iVar2 + 0x292) + fVar4 * fVar4 * *(float *)(param_1 + 0xca8);
    fVar4 = *(float *)(param_1 + *(char *)(param_1 + 0xbcc) * 0x28 + 0x298);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x90) =
         *(float *)(param_1 + 0xcac) -
         fVar4 * fVar4 * (*(float *)(param_1 + 0xcac) - *(float *)(param_1 + 0xcb0));
    iVar3 = param_1 + *(char *)(param_1 + 0xbcc) * 0x28;
    bVar1 = 1.0 <= *(float *)(iVar3 + 0x298);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    if (bVar1) {
      *(float *)(iVar2 + 0x60) = (float)(int)*(short *)(iVar3 + 0x294);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 100) =
           (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0xbcc) * 0x28 + 0x296);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x90) =
           *(undefined4 *)(param_1 + 0xcb0);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x128) = 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    }
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x9c) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                 *(undefined4 *)(iVar2 + 0x9c),iVar2,0);
  }
  return bVar1;
}

