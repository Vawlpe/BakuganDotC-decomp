#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a0a250(float param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_30 [6];
  float local_18;
  
  pfVar2 = local_30;
  uVar3 = (uint)param_1 & 0x7fffffff;
  if (uVar3 < 0x3f490fd9) {
    *param_2 = param_1;
    param_2[1] = 0.0;
    return 0;
  }
  if (uVar3 < 0x4016cbe4) {
    if ((int)param_1 < 1) {
      param_1 = param_1 + 1.570786;
      if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
        *param_2 = param_1 + 1.080427e-05 + 6.0771e-11;
        param_2[1] = ((param_1 + 1.080427e-05) - *param_2) + 6.0771e-11;
      }
      else {
        *param_2 = param_1 + 1.080433e-05;
        param_2[1] = (param_1 - *param_2) + 1.080433e-05;
      }
      return -1;
    }
    param_1 = param_1 - 1.570786;
    if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
      *param_2 = (param_1 - 1.080427e-05) - 6.0771e-11;
      param_2[1] = ((param_1 - 1.080427e-05) - *param_2) - 6.0771e-11;
    }
    else {
      *param_2 = param_1 - 1.080433e-05;
      param_2[1] = (param_1 - *param_2) - 1.080433e-05;
    }
    return 1;
  }
  iVar1 = (int)uVar3 >> 0x17;
  local_30[3] = param_1;
  if (0x43490f80 < uVar3) {
    if (0x7f7fffff < uVar3) {
      param_2[1] = 0.0;
      *param_2 = 0.0;
      return 0;
    }
    local_30[2] = (float)(uVar3 + (iVar1 + -0x86) * -0x800000);
    iVar5 = 0;
    local_18 = local_30[2];
    do {
      iVar5 = iVar5 + 1;
      *pfVar2 = (float)(int)local_30[2];
      pfVar2 = pfVar2 + 1;
      local_30[2] = (local_30[2] - (float)(int)local_30[2]) * 256.0;
    } while (iVar5 < 2);
    iVar5 = 3;
    pfVar2 = local_30 + 3;
    fVar4 = local_30[2];
    while (fVar4 == 0.0) {
      iVar5 = iVar5 + -1;
      fVar4 = pfVar2[-2];
      pfVar2 = pfVar2 + -1;
    }
    iVar1 = FUN_08a0bb90(local_30,param_2,iVar1 + -0x86,iVar5,2,&DAT_08aa49c0);
    if (-1 < (int)param_1) {
      return iVar1;
    }
    *param_2 = -*param_2;
    param_2[1] = -param_2[1];
    return -iVar1;
  }
  fVar4 = (float)fabsf();
  iVar5 = (int)(fVar4 * 0.6366198 + 0.5);
  fVar6 = (float)iVar5;
  fVar7 = fVar6 * 1.080433e-05;
  fVar4 = fVar4 - fVar6 * 1.570786;
  fVar9 = fVar4 - fVar7;
  if (iVar5 < 0x20) {
    if (((uint)param_1 & 0x7fffff00) != *(uint *)(&DAT_08aa4cd4 + iVar5 * 4)) {
      *param_2 = fVar9;
      fVar9 = *param_2;
      goto LAB_08a0a554;
    }
    *param_2 = fVar9;
  }
  else {
    *param_2 = fVar9;
  }
  fVar9 = *param_2;
  if (8 < (int)(iVar1 - ((uint)fVar9 >> 0x17 & 0xff))) {
    fVar8 = fVar4 - fVar6 * 1.080427e-05;
    fVar7 = fVar6 * 6.0771e-11 - ((fVar4 - fVar8) - fVar6 * 1.080427e-05);
    *param_2 = fVar8 - fVar7;
    fVar9 = *param_2;
    fVar4 = fVar8;
    if (0x19 < (int)(iVar1 - ((uint)fVar9 >> 0x17 & 0xff))) {
      fVar4 = fVar8 - fVar6 * 6.077094e-11;
      fVar7 = fVar6 * 6.123234e-17 - ((fVar8 - fVar4) - fVar6 * 6.077094e-11);
      *param_2 = fVar4 - fVar7;
      fVar9 = *param_2;
    }
  }
LAB_08a0a554:
  param_2[1] = (fVar4 - fVar9) - fVar7;
  if (-1 < (int)param_1) {
    return iVar5;
  }
  *param_2 = -fVar9;
  param_2[1] = -param_2[1];
  return -iVar5;
}

