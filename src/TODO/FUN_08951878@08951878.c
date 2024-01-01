#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08951878(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  
  bVar2 = false;
  iVar7 = 0;
  FUN_089f86e4(*(undefined4 *)(*(int *)(param_1 + 0x50) + 8));
  uVar3 = *(uint *)(param_1 + 0x2c);
  bVar1 = uVar3 < 6;
  if ((0 < (int)uVar3) && (bVar1 = uVar3 < 6, (int)uVar3 < 3)) {
    iVar4 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(iVar4 + 5) & 0x40) == 0) {
      if ((*(byte *)(iVar4 + 8) & 0x10) == 0) {
        if ((*(byte *)(iVar4 + 8) & 0x40) == 0) {
          iVar4 = *(int *)(param_1 + 0x74);
          goto LAB_089519b0;
        }
        iVar4 = _DONE_NotZero_DAT_08AC5874();
        iVar7 = 1;
        if (iVar4 != 0) {
          uVar10 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar10,1,0,0);
          iVar7 = 1;
        }
      }
      else {
        iVar7 = _DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar10 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar10,1,0,0);
        }
        iVar7 = -1;
      }
      iVar4 = *(int *)(param_1 + 0x74);
    }
    else {
      bVar2 = true;
      iVar4 = _DONE_NotZero_DAT_08AC5874();
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x74);
      }
      else {
        uVar10 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar10,0,0,0);
        iVar4 = *(int *)(param_1 + 0x74);
      }
    }
LAB_089519b0:
    iVar7 = iVar4 + iVar7;
    *(int *)(param_1 + 0x74) = iVar7;
    if (iVar7 < 0) {
      iVar7 = 1;
      *(undefined4 *)(param_1 + 0x74) = 1;
    }
    if (1 < iVar7) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      iVar7 = 0;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (1 < iVar7) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0x74) = iVar7;
    if (iVar4 != iVar7) {
      *(undefined4 *)(param_1 + 0x8c) = 0x3fc90fdb;
    }
    iVar8 = 0;
    iVar4 = 0;
    iVar7 = param_1;
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 8);
      if (iVar8 == *(int *)(param_1 + 0x74)) {
        fVar9 = *(float *)(param_1 + 0x8c);
        *(float *)(iVar7 + 0x7c) = *(float *)(iVar7 + 0x7c) + 0.1745329;
        fVar9 = fVar9 + 0.05235988;
        *(float *)(param_1 + 0x8c) = fVar9;
        if (3.141593 < fVar9) {
          fVar9 = fVar9 - 3.141593;
          *(float *)(param_1 + 0x8c) = fVar9;
        }
        uVar10 = vmul_s(fVar9,in_V7C);
        fVar9 = (float)vsin_s(uVar10);
        *(float *)(iVar5 + 0xbc) = fVar9 * 0.5 + 0.5;
        fVar9 = *(float *)(iVar7 + 0x7c);
      }
      else {
        *(float *)(iVar7 + 0x7c) = *(float *)(iVar7 + 0x7c) - 0.1745329;
        *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
        fVar9 = *(float *)(iVar7 + 0x7c);
      }
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      else if (1.0 < fVar9) {
        fVar9 = 1.0;
      }
      *(float *)(iVar7 + 0x7c) = fVar9;
      uVar10 = vmul_s((1.0 - (fVar9 - 1.0) * (fVar9 - 1.0)) * 3.141593,in_V7C);
      fVar9 = (float)vcos_s(uVar10);
      fVar9 = (1.0 - fVar9) * 0.5 * 0.3 + 0.7;
      FUN_089f4954(fVar9,fVar9,0,iVar5,0);
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 4;
      iVar7 = iVar7 + 4;
    } while (iVar8 < 3);
    uVar3 = *(uint *)(param_1 + 0x2c);
    bVar1 = uVar3 < 6;
  }
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x28) = 6;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    goto LAB_08951f10;
  }
  if (uVar3 == 1) {
    fVar9 = *(float *)(param_1 + 0x88) + 0.1396263;
LAB_08951c94:
    *(float *)(param_1 + 0x88) = fVar9;
    if (fVar9 < 0.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 1.570796;
      if (fVar9 <= 1.570796) {
        fVar6 = fVar9;
      }
    }
    *(float *)(param_1 + 0x88) = fVar6;
    uVar10 = vmul_s(fVar6,in_V7C);
    fVar9 = (float)vsin_s(uVar10);
    iVar7 = 2;
    iVar4 = 8;
    do {
      iVar7 = iVar7 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = fVar9;
      iVar4 = iVar4 + 4;
    } while (iVar7 < 4);
    if (bVar2) {
      fVar9 = 1.0;
    }
    iVar7 = 2;
    if (fVar9 < 1.0) goto LAB_08951f10;
    iVar4 = 8;
    do {
      iVar7 = iVar7 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0x3f800000;
      iVar4 = iVar4 + 4;
    } while (iVar7 < 4);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else if (uVar3 != 2) {
    if (uVar3 == 3) {
      FUN_089c87e4(0);
      FUN_089c879c(0x3f000000,0);
      iVar7 = FUN_089edb80();
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
      iVar7 = FUN_089edb80();
      *(undefined4 *)(iVar7 + 0x40) = 0;
      *(undefined4 *)(iVar7 + 0x44) = 0;
      *(undefined4 *)(iVar7 + 0x48) = 0;
      *(undefined4 *)(iVar7 + 0x4c) = 0x3f800000;
      uVar10 = FUN_089edb80();
      FUN_089edf24(uVar10,0xf);
      *(undefined4 *)(param_1 + 0x98) = 4;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      iVar7 = 3;
    }
    else {
      if (uVar3 != 4) {
        if (uVar3 == 5) {
          FUN_089c2d54(0x1a);
          iVar7 = FUN_089c2c54(0x1a);
          if ((iVar7 == 0) && (iVar7 = FUN_089c2d54(0xffffffff), iVar7 != 0)) {
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          }
          goto LAB_08951f10;
        }
        iVar7 = FUN_089edb80();
        iVar4 = 2;
        *(undefined4 *)(iVar7 + 0x10) = 0x44bb8000;
        iVar7 = 8;
        do {
          iVar4 = iVar4 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0;
          iVar7 = iVar7 + 4;
        } while (iVar4 < 5);
        iVar4 = 0;
        iVar7 = param_1;
        do {
          *(undefined4 *)(iVar7 + 0x7c) = 0;
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar4 < 3);
        uVar10 = _DONE_Get_DAT_08AAC9E0();
        iVar7 = FUN_0880d7e0(uVar10,0x40000000);
        *(uint *)(param_1 + 0x74) = (uint)(iVar7 != 0);
        *(undefined4 *)(param_1 + 0x8c) = 0x3fc90fdb;
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        fVar9 = 0.1396263;
        goto LAB_08951c94;
      }
      iVar7 = *(int *)(param_1 + 0x98) + -1;
    }
    *(int *)(param_1 + 0x98) = iVar7;
    if (iVar7 < 0) {
      FUN_089f4b64(0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
    }
    uVar10 = FUN_089edb80();
    iVar7 = FUN_089edf70(uVar10);
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    goto LAB_08951f10;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_1 + 0x74);
    bVar1 = true;
    if (iVar7 < 1) {
      if (-1 < iVar7) {
        FUN_0890a598(param_1,0);
        bVar1 = true;
      }
    }
    else if (iVar7 < 2) {
      *(undefined4 *)(param_1 + 0x28) = 4;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      FUN_089c87e4(0);
      FUN_089c879c(0x3f000000,0);
      bVar1 = false;
    }
    else if (iVar7 < 3) {
      FUN_0890a598(param_1,4);
      bVar1 = true;
    }
    if (bVar1) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
LAB_08951f10:
  FUN_08951434(param_1);
  return;
}

