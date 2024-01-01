#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088ec778)

void FUN_088ec6f4(int param_1,int param_2,short param_3,int *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  longlong lVar8;
  
  uVar4 = (int)param_3 << 0xc;
  param_5 = param_5 & 0xff;
  iVar2 = FUN_08a0d21c((int)param_3 << 0x18,uVar4 >> 0x14 | ((int)uVar4 >> 0x1f) << 0xc,0x64000,0);
  bVar1 = *(byte *)(param_1 + 0x267);
  iVar6 = iVar2 >> 0x1f;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (param_2 < 1) {
        if (-1 < param_2) {
          *param_4 = iVar2;
        }
      }
      else if (param_2 < 2) {
        param_4[1] = iVar2;
      }
      else if (param_2 < 3) {
        param_4[2] = iVar2;
      }
    }
    else if (param_2 < 1) {
      if (-1 < param_2) {
        fVar7 = *(float *)(DAT_08ac5c90 + 0x84);
        if (3.141593 < fVar7) {
          fVar7 = fVar7 - 6.283185;
        }
        else if (fVar7 <= -3.141593) {
          fVar7 = fVar7 + 6.283185;
        }
        if (fVar7 < 0.0) {
          fVar7 = fVar7 + 6.283185;
        }
        fVar7 = -fVar7 + 1.570796;
        if (3.141593 < fVar7) {
          fVar7 = fVar7 - 6.283185;
        }
        else if (fVar7 <= -3.141593) {
          fVar7 = fVar7 + 6.283185;
        }
        sVar5 = (short)(int)(fVar7 * 65535.0 * 0.1591549) + 0x4000;
        iVar3 = FUN_088eb1b0(sVar5);
        lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
        iVar3 = (int)((ulonglong)(lVar8 + 0x800) >> 0x20);
        *param_4 = *param_4 + (iVar3 * 0x100000 | (uint)(lVar8 + 0x800) >> 0xc);
        iVar3 = FUN_088eb35c(sVar5,iVar3 >> 0xc);
        lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
        param_4[2] = param_4[2] +
                     ((int)((ulonglong)(lVar8 + 0x800) >> 0x20) * 0x100000 |
                     (uint)(lVar8 + 0x800) >> 0xc);
      }
    }
    else if (param_2 < 2) {
      param_4[1] = iVar2;
    }
    else if (param_2 < 3) {
      fVar7 = *(float *)(DAT_08ac5c90 + 0x84);
      if (3.141593 < fVar7) {
        fVar7 = fVar7 - 6.283185;
      }
      else if (fVar7 <= -3.141593) {
        fVar7 = fVar7 + 6.283185;
      }
      if (fVar7 < 0.0) {
        fVar7 = fVar7 + 6.283185;
      }
      fVar7 = -fVar7 + 1.570796;
      if (3.141593 < fVar7) {
        fVar7 = fVar7 - 6.283185;
      }
      else if (fVar7 <= -3.141593) {
        fVar7 = fVar7 + 6.283185;
      }
      uVar4 = (int)(fVar7 * 65535.0 * 0.1591549) & 0xffff;
      iVar3 = FUN_088eb1b0(uVar4);
      lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
      iVar3 = (int)((ulonglong)(lVar8 + 0x800) >> 0x20);
      *param_4 = *param_4 + (iVar3 * 0x100000 | (uint)(lVar8 + 0x800) >> 0xc);
      iVar3 = FUN_088eb35c(uVar4,iVar3 >> 0xc);
      lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
      param_4[2] = param_4[2] +
                   ((int)((ulonglong)(lVar8 + 0x800) >> 0x20) * 0x100000 |
                   (uint)(lVar8 + 0x800) >> 0xc);
    }
  }
  else if (bVar1 < 3) {
    if (param_2 < 1) {
      if (-1 < param_2) {
        sVar5 = *(short *)(*(int *)(param_1 + 0x30) + param_5 * 100 + 0x4e) + -0x4000;
        iVar3 = FUN_088eb1b0(sVar5);
        lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
        iVar3 = (int)((ulonglong)(lVar8 + 0x800) >> 0x20);
        *param_4 = *param_4 + (iVar3 * 0x100000 | (uint)(lVar8 + 0x800) >> 0xc);
        iVar3 = FUN_088eb35c(sVar5,iVar3 >> 0xc);
        lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
        param_4[2] = param_4[2] +
                     ((int)((ulonglong)(lVar8 + 0x800) >> 0x20) * 0x100000 |
                     (uint)(lVar8 + 0x800) >> 0xc);
      }
    }
    else if (param_2 < 2) {
      param_4[1] = iVar2;
    }
    else if (param_2 < 3) {
      sVar5 = *(short *)(*(int *)(param_1 + 0x30) + param_5 * 100 + 0x4e) + -0x8000;
      iVar3 = FUN_088eb1b0(sVar5);
      lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
      iVar3 = (int)((ulonglong)(lVar8 + 0x800) >> 0x20);
      *param_4 = *param_4 + (iVar3 * 0x100000 | (uint)(lVar8 + 0x800) >> 0xc);
      iVar3 = FUN_088eb35c(sVar5,iVar3 >> 0xc);
      lVar8 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,iVar2,iVar6);
      param_4[2] = param_4[2] +
                   ((int)((ulonglong)(lVar8 + 0x800) >> 0x20) * 0x100000 |
                   (uint)(lVar8 + 0x800) >> 0xc);
    }
  }
  else if (3 < bVar1) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))
              (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x68),param_2,(int)param_3,param_4,
               param_5);
  }
  return;
}

