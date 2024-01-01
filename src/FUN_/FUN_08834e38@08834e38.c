#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08834e38(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_40;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if (*(float *)(param_1 + 0x8c8) <= *(float *)(iVar1 + 0x98)) {
    local_40 = 0.5;
  }
  else if (*(float *)(param_1 + 0x8c8) <= *(float *)(iVar1 + 0x98) * 2.0) {
    local_40 = 0.75;
  }
  else {
    local_40 = 1.0;
  }
  if (iVar1 != 0) {
    fVar6 = ((384.0 - *(float *)(param_1 + 0x8c4)) - 64.0) * 0.5;
    fVar7 = (float)(int)((*(float *)(param_1 + 0x8c4) + 40.0) * 320.0 * 0.002604167 + 64.0);
    if (0.0 <= fVar6) {
      fVar5 = fVar6 + 16.0;
      fVar8 = fVar7 - 64.0;
      fVar6 = fVar6 + 80.0;
    }
    else {
      fVar5 = 16.0;
      fVar7 = 336.0;
      fVar6 = 80.0;
      fVar8 = 272.0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1f8);
    *(float *)(iVar1 + 0x60) = fVar5;
    FUN_089f4954(0x3f800000,local_40,0,iVar1,0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1fc);
    fVar5 = (float)FUN_089f494c(iVar1);
    FUN_089f4534(fVar8,fVar5 * local_40,iVar1);
    *(float *)(iVar1 + 0x60) = fVar6;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x200);
    *(float *)(iVar1 + 0x60) = (fVar6 + fVar7) - 64.0;
    FUN_089f4954(0x3f800000,local_40,0,iVar1,0);
    iVar1 = FUN_0882c564(param_1);
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      *(float *)(*(int *)(iVar4 + 0x204) + 0x60) =
           (float)((int)*(float *)(*(int *)(iVar4 + 0x1f8) + 0x60) + -0x30);
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x208) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x204) + 0x60) + 32.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20c) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x204) + 0x60) + 32.0;
      iVar1 = *(int *)(param_1 + 0x8f0);
    }
    else {
      *(float *)(*(int *)(iVar4 + 0x204) + 0x60) =
           (float)((int)*(float *)(*(int *)(iVar4 + 0x200) + 0x60) + -0x50);
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x208) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x204) + 0x60) + 26.0;
      iVar1 = 0x82;
      iVar4 = 0x208;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20c) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x204) + 0x60) + 26.0;
      pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x204) + 0x60);
      *pfVar2 = *pfVar2 + 32.0;
      do {
        FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4));
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar1 < 0x84);
      iVar1 = *(int *)(param_1 + 0x8f0);
    }
    if (iVar1 == 0xf) {
      pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x204) + 0x60);
      *pfVar2 = *pfVar2 + 6.0;
    }
    local_40 = local_40 - 0.5;
    iVar1 = 0x7e;
    iVar4 = 0x1f8;
    do {
      if (local_40 < -1.0) {
        fVar6 = 56.0;
      }
      else if (1.5 < local_40) {
        fVar6 = -24.0;
      }
      else {
        fVar6 = 24.0 - local_40 * 32.0;
      }
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4) + 100) = fVar6;
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar4);
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 4;
      *(float *)(iVar3 + 100) = (float)(int)*(float *)(iVar3 + 100);
    } while (iVar1 < 0x81);
  }
  return;
}

