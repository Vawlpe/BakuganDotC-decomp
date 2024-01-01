#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short FUN_088ea914(uint param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  if ((int)param_1 < 1) {
    sVar2 = -0x8000;
    if (-1 < (int)param_1) {
      if (-1 < (int)param_2) {
        sVar2 = 0;
      }
      return sVar2;
    }
    param_1 = -param_1;
    uVar4 = param_1;
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      if ((int)param_1 < (int)param_2) {
        sVar2 = -0x8000;
        bVar5 = true;
        uVar4 = param_2;
      }
      else {
        if ((int)param_1 <= (int)param_2) {
          return -0x6000;
        }
        sVar2 = -0x4000;
        bVar5 = false;
        param_1 = param_2;
      }
    }
    else {
      if ((int)param_2 < 1) {
        return -0x4000;
      }
      if ((int)param_2 < (int)param_1) {
        sVar2 = -0x4000;
        bVar5 = true;
        param_1 = param_2;
      }
      else {
        if ((int)param_2 <= (int)param_1) {
          return -0x2000;
        }
        sVar2 = 0;
        bVar5 = false;
        uVar4 = param_2;
      }
    }
  }
  else {
    uVar4 = param_1;
    if ((int)param_2 < 1) {
      param_2 = -param_2;
      if (-1 < (int)param_2) {
        return 0x4000;
      }
      if ((int)param_2 < (int)param_1) {
        sVar2 = 0x4000;
        bVar5 = true;
        param_1 = param_2;
      }
      else {
        if ((int)param_2 <= (int)param_1) {
          return 0x6000;
        }
        sVar2 = -0x8000;
        bVar5 = false;
        uVar4 = param_2;
      }
    }
    else if ((int)param_1 < (int)param_2) {
      sVar2 = 0;
      bVar5 = true;
      uVar4 = param_2;
    }
    else {
      if ((int)param_1 <= (int)param_2) {
        return 0x2000;
      }
      sVar2 = 0x4000;
      bVar5 = false;
      param_1 = param_2;
    }
  }
  if (uVar4 != 0) {
    uVar6 = param_1 >> 0x14 | ((int)param_1 >> 0x1f) << 0xc;
    if (bVar5) {
      iVar3 = FUN_08a0d21c(param_1 << 0xc,uVar6,uVar4,(int)uVar4 >> 0x1f);
      sVar1 = *(short *)(&DAT_08a98ed8 + (iVar3 >> 5) * 2);
    }
    else {
      iVar3 = FUN_08a0d21c(param_1 << 0xc,uVar6,uVar4,(int)uVar4 >> 0x1f);
      sVar1 = -*(short *)(&DAT_08a98ed8 + (iVar3 >> 5) * 2);
    }
    return sVar2 + sVar1;
  }
  return 0;
}

