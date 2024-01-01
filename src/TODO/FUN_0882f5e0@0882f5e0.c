#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882f5e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_V70;
  undefined4 in_V78;
  undefined4 in_V7C;
  undefined4 in_V7F;
  
  switch(*(undefined4 *)(param_1 + 0x100)) {
  case 0:
    iVar10 = 0;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x14) + iVar2);
      FUN_089f480c(iVar4);
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
      FUN_089f4954(0x3f800000,0x3f800000,0,iVar4,0);
      iVar10 = iVar10 + 1;
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      iVar2 = iVar2 + 4;
    } while (iVar10 < 3);
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  case 1:
    iVar2 = FUN_0882f5a4(param_1);
    if (*(int *)(param_1 + 0xf8) != iVar2) {
      if (iVar2 < 2) {
        iVar2 = *(int *)(param_1 + 0x100);
        goto LAB_0882fb9c;
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x14) + 4);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x14) + 8);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      *(int *)(param_1 + 0xf8) = iVar2;
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
LAB_0882f788:
      if (*(int *)(param_1 + 0x150) < *(int *)(param_1 + 0xf8)) {
        uVar11 = *(undefined4 *)(param_1 + 0xf8);
      }
      else {
        uVar11 = *(undefined4 *)(param_1 + 0x150);
      }
      *(undefined4 *)(param_1 + 0x150) = uVar11;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
LAB_0882f7f4:
      iVar2 = FUN_0882f5a4(param_1);
      fVar9 = *(float *)(param_1 + 0x10c) + 0.5585054;
      *(float *)(param_1 + 0x10c) = fVar9;
      if (6.283185 < fVar9) {
        *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) - 6.283185;
      }
      uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x10c),in_V7C);
      fVar9 = (float)vsin_s(uVar11);
      fVar9 = fVar9 * 0.2 + 1.0;
      iVar4 = *(int *)(param_1 + 0x118) + 1;
      *(int *)(param_1 + 0x118) = iVar4;
      iVar7 = 0;
      iVar6 = 0;
      iVar10 = param_1;
      do {
        iVar8 = *(int *)(*(int *)(param_1 + 0x14) + iVar6);
        FUN_089f4954(fVar9,fVar9,0,iVar8,0);
        uVar11 = vrndf1_s();
        uVar11 = vsub_s(uVar11,in_V7F);
        uVar11 = vmul_s(uVar11,in_V70);
        uVar11 = vsub_s(uVar11,in_V78);
        uVar11 = vmul_s(uVar11,in_V7C);
        fVar3 = (float)vsin_s(uVar11);
        *(float *)(iVar8 + 0x60) = *(float *)(iVar10 + 0x120) + fVar3;
        uVar11 = vrndf1_s();
        uVar11 = vsub_s(uVar11,in_V7F);
        uVar11 = vmul_s(uVar11,in_V70);
        uVar11 = vsub_s(uVar11,in_V78);
        uVar11 = vmul_s(uVar11,in_V7C);
        fVar3 = (float)vsin_s(uVar11);
        *(float *)(iVar8 + 100) = *(float *)(iVar10 + 0x124) + fVar3;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar10 = iVar10 + 0x10;
      } while (iVar7 < 3);
      if (*(int *)(param_1 + 0xf8) < iVar2) {
        *(int *)(param_1 + 0xf8) = iVar2;
        *(undefined4 *)(param_1 + 0x100) = 2;
      }
      else {
        if (iVar4 < 3) {
          iVar2 = *(int *)(param_1 + 0x100);
          goto LAB_0882fb9c;
        }
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
LAB_0882f96c:
        *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
        iVar10 = 0;
        iVar2 = 0;
        puVar5 = (undefined4 *)(param_1 + 0x120);
        do {
          iVar4 = *(int *)(*(int *)(param_1 + 0x14) + iVar2);
          FUN_089f4954(*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x10c),0,iVar4,0);
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar1 = puVar5[3];
          *(undefined4 *)(iVar4 + 0x60) = *puVar5;
          *(undefined4 *)(iVar4 + 100) = uVar11;
          *(undefined4 *)(iVar4 + 0x68) = uVar12;
          *(undefined4 *)(iVar4 + 0x6c) = uVar1;
          iVar10 = iVar10 + 1;
          iVar2 = iVar2 + 4;
          puVar5 = puVar5 + 4;
        } while (iVar10 < 3);
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
switchD_0882f63c_caseD_5:
        iVar2 = FUN_0882f5a4(param_1);
        if (*(int *)(param_1 + 0xf8) < iVar2) {
          *(int *)(param_1 + 0xf8) = iVar2;
          *(undefined4 *)(param_1 + 0x100) = 2;
        }
        else if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x100) = 10;
        }
      }
    }
    break;
  case 2:
    goto LAB_0882f788;
  case 3:
    goto LAB_0882f7f4;
  case 4:
    goto LAB_0882f96c;
  case 5:
    goto switchD_0882f63c_caseD_5;
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x114) = 0x3fc90fdb;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  case 0xb:
    iVar2 = FUN_0882f5a4(param_1);
    if (iVar2 == 0) {
      fVar9 = *(float *)(param_1 + 0x114) + -0.2617994;
      *(float *)(param_1 + 0x114) = fVar9;
      if (fVar9 < 0.0) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = 1.570796;
        if (fVar9 <= 1.570796) {
          fVar3 = fVar9;
        }
      }
      *(float *)(param_1 + 0x114) = fVar3;
      uVar11 = vmul_s(fVar3,in_V7C);
      uVar11 = vsin_s(uVar11);
      fVar9 = *(float *)(param_1 + 0x10c) + 0.2617994;
      *(float *)(param_1 + 0x10c) = fVar9;
      if (fVar9 < 0.0) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = 1.570796;
        if (fVar9 <= 1.570796) {
          fVar3 = fVar9;
        }
      }
      *(float *)(param_1 + 0x10c) = fVar3;
      uVar12 = vmul_s(fVar3,in_V7C);
      fVar9 = (float)vsin_s(uVar12);
      fVar9 = fVar9 * 0.15 + 1.0;
      iVar2 = 0;
      iVar10 = 0;
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x14) + iVar10);
        *(undefined4 *)(iVar4 + 0xbc) = uVar11;
        FUN_089f4954(fVar9,fVar9,0,iVar4,0);
        iVar2 = iVar2 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar2 < 3);
      if (*(float *)(param_1 + 0x114) <= 0.0) {
        *(undefined4 *)(param_1 + 0x100) = 0x14;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    break;
  case 0x14:
    *(undefined4 *)(param_1 + 0x100) = 0;
    break;
  default:
    iVar2 = *(int *)(param_1 + 0x100);
    goto LAB_0882fb9c;
  }
  iVar2 = *(int *)(param_1 + 0x100);
LAB_0882fb9c:
  if (0 < iVar2) {
    iVar2 = *(int *)(param_1 + 0xf8);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (99 < iVar2) {
      iVar2 = 99;
    }
    if (iVar2 / 10 != 0) {
      iVar10 = (iVar2 / 10) % 10;
      *(uint *)(**(int **)(param_1 + 0x14) + 0xd0) =
           *(uint *)(**(int **)(param_1 + 0x14) + 0xd0) | 1;
      FUN_089f4a90((float)(iVar10 / 5),(float)(iVar10 % 5),**(undefined4 **)(param_1 + 0x14));
    }
    iVar2 = (iVar2 % 10) % 10;
    FUN_089f4a90((float)(iVar2 / 5),(float)(iVar2 % 5),*(undefined4 *)(*(int *)(param_1 + 0x14) + 4)
                );
  }
  return;
}

