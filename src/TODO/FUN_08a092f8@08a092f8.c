#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a095e4)

float FUN_08a092f8(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar3 = (uint)param_2 & 0x7fffffff;
  uVar1 = (uint)param_1 & 0x7fffffff;
  if ((0x7f800000 < uVar3) || (0x7f800000 < uVar1)) {
    return param_2 + param_1;
  }
  if (param_2 == 1.0) {
    fVar2 = (float)atanf(param_1);
    return fVar2;
  }
  uVar5 = (int)param_1 >> 0x1f & 1U | (int)param_2 >> 0x1e & 2U;
  if (uVar1 == 0) {
    if (uVar5 < 2) {
      if (-1 < (int)uVar5) {
        return param_1;
      }
    }
    else {
      if (uVar5 < 3) {
        return 3.141593;
      }
      if (uVar5 < 4) {
        return -3.141593;
      }
    }
  }
  if (uVar3 == 0) {
    if ((int)param_1 < 0) {
      fVar2 = -1.570796;
    }
    else {
      fVar2 = 1.570796;
    }
    return fVar2;
  }
  if (uVar3 == 0x7f800000) {
    if (uVar1 == 0x7f800000) {
      if (uVar5 < 2) {
        if (uVar5 != 0) {
          return -0.7853982;
        }
        return 0.7853982;
      }
      if (uVar5 < 3) {
        return 2.356194;
      }
      if (uVar5 < 4) {
        return -2.356194;
      }
    }
    else {
      if (uVar5 < 2) {
        return 0.0;
      }
      if (uVar5 < 3) {
        return 3.141593;
      }
      if (uVar5 < 4) {
        return -3.141593;
      }
    }
  }
  if (uVar1 == 0x7f800000) {
    if ((int)param_1 < 0) {
      fVar2 = -1.570796;
    }
    else {
      fVar2 = 1.570796;
    }
    return fVar2;
  }
  iVar4 = (int)(uVar1 - uVar3) >> 0x17;
  if (iVar4 < 0x3d) {
    if (((int)param_2 < 0) && (iVar4 < -0x3c)) {
      fVar2 = 0.0;
    }
    else {
      uVar6 = fabsf(param_1 / param_2);
      fVar2 = (float)atanf(uVar6);
    }
  }
  else {
    fVar2 = 1.570796;
  }
  if (uVar5 != 0) {
    if (uVar5 < 2) {
      return (float)((uint)fVar2 ^ 0x80000000);
    }
    if (uVar5 < 3) {
      return 3.141593 - (fVar2 - 1.509958e-07);
    }
    return (fVar2 - 1.509958e-07) - 3.141593;
  }
  return fVar2;
}

