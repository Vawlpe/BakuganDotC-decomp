#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08986e7c(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 1) == 0) {
    pfVar1 = (float *)(iVar2 + 0x90);
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 2) != 0) {
      *pfVar1 = *pfVar1 - 0.015;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
      if (*(float *)(iVar2 + 0x90) < 0.6) {
        *(undefined4 *)(iVar2 + 0x90) = 0x3f19999a;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
      }
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x9c) = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
      FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                   *(undefined4 *)(iVar2 + 0x9c),iVar2,0);
    }
    return;
  }
  pfVar1 = (float *)(iVar2 + 0x90);
  *pfVar1 = *pfVar1 + 0.015;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
  if (1.5 < *(float *)(iVar2 + 0x90)) {
    *(undefined4 *)(iVar2 + 0x90) = 0x3fc00000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
  }
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) + 0x9c)
       = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
  FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
               *(undefined4 *)(iVar2 + 0x9c),iVar2,0);
  return;
}

