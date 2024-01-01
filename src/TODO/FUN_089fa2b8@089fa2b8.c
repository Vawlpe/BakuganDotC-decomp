#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fa2b8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined auStack_110 [256];
  
  *(undefined *)(param_1 + 0x3b) = 0;
  *(undefined *)(param_1 + 0x38) = 0;
  *(undefined *)((int)param_1 + 0xe2) = 0;
  if (*(char *)((int)param_1 + 10) == '\0') {
    memset_jak(auStack_110,0,0x100);
    *(undefined *)((int)param_1 + 0xe1) = 0;
    FUN_089fb5b0(param_1[4],auStack_110);
    iVar2 = zz_sceIoOpenAsync(auStack_110,1,0);
    param_1[8] = iVar2;
    if (iVar2 < 0) {
      return;
    }
    *(undefined *)((int)param_1 + 9) = 1;
    param_1[5] = iVar2;
    param_1[8] = 0;
    return;
  }
  *(undefined *)((int)param_1 + 10) = 0;
  if ((int)param_1[8] < 0) {
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(undefined *)((int)param_1 + 0x49) = 1;
      *(undefined *)((int)param_1 + 0x4a) = 0;
      *param_1 = 0;
      *(undefined *)(param_1 + 3) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x3d) != '\0') {
      *param_1 = 0;
      *(undefined *)(param_1 + 3) = 1;
      return;
    }
    bVar1 = false;
    if (param_1[4] == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = strlen();
      if (iVar2 == 0) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      return;
    }
    *param_1 = 0;
    *(undefined *)(param_1 + 3) = 1;
    return;
  }
  iVar2 = param_1[1];
  if (iVar2 < 2) {
    if (0 < iVar2) {
      *param_1 = 7;
      goto LAB_089fa378;
    }
  }
  else if (iVar2 < 3) {
    *param_1 = 8;
    goto LAB_089fa378;
  }
  *param_1 = 2;
LAB_089fa378:
  *(undefined *)((int)param_1 + 0x49) = 1;
  *(undefined *)((int)param_1 + 0x4a) = 1;
  return;
}

