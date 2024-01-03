#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884b7c4(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 in_V74;
  undefined4 in_V7C;
  
  iVar5 = FUN_089c9b48(3,DAT_08ac58c8);
  if (iVar5 == 0) {
    return;
  }
  iVar6 = 0;
  iVar5 = param_1;
  if (*(int *)(param_1 + 0x564) == 0) {
    do {
      *(undefined4 *)(iVar5 + 0x57c) = 0;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 3);
    *(undefined4 *)(param_1 + 0x588) = 0;
    FUN_0884b7a8(param_1);
    iVar5 = FUN_0884b670(param_1,0);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x564) = 10;
    }
  }
  else {
    fVar10 = *(float *)(param_1 + 0x588) + 0.1396263;
    *(float *)(param_1 + 0x588) = fVar10;
    if (6.283185 <= fVar10) {
      *(float *)(param_1 + 0x588) = *(float *)(param_1 + 0x588) - 6.283185;
    }
    uVar4 = DAT_08b0088c;
    uVar3 = DAT_08b00888;
    uVar2 = DAT_08b00884;
    uVar13 = DAT_08b00880;
    iVar5 = *(int *)(param_1 + 0x564);
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    else if (3 < iVar5) {
      iVar5 = 3;
    }
    fVar10 = (float)iVar5 * 0.06;
    uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x588),in_V7C);
    fVar12 = (float)vsin_s(uVar11);
    fVar10 = fVar10 * 0.5 + fVar10 + fVar12 * fVar10;
    uVar8 = 0;
    iVar7 = param_1 + 0x57c;
    iVar6 = param_1;
    do {
      auVar1._4_4_ = uVar2;
      auVar1._0_4_ = uVar13;
      auVar1._8_4_ = uVar3;
      auVar1._12_4_ = uVar4;
      auVar1 = vsat0_q(auVar1);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar11 = vi2uc_q(auVar1);
      *(undefined4 *)(iVar6 + 0x57c) = uVar11;
      uVar9 = (undefined)(int)(fVar10 * 255.0);
      if ((uVar8 & 1) != 0) {
        uVar9 = (undefined)(int)(fVar10 * 0.1 * 255.0);
      }
      *(undefined *)(iVar7 + 3) = uVar9;
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 4;
    } while ((int)uVar8 < 3);
    if (*(int *)(param_1 + 0x568) == 0) {
      FUN_0884b414((float)iVar5 * 0.5 + 0.5,0x3f333333,param_1,6);
      if (*(int *)(DAT_08ac5c90 + 0x210) == 0) {
        FUN_089e3008(0,0,DAT_08ac5c90);
        iVar5 = *(int *)(param_1 + 0x564);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x564);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x564);
    }
    if (iVar5 < 10) {
      iVar5 = FUN_089c2b10(1);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x568);
        goto LAB_0884bbfc;
      }
      uVar13 = FUN_089c2b48(1);
      iVar5 = FUN_089c3818(uVar13);
      if ((iVar5 != 0) && (iVar5 = FUN_0884b670(param_1,0), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0x564) = 10;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x564);
      if (iVar5 == 100) {
        iVar5 = FUN_089c2b10(1);
        if (iVar5 != 0) {
          uVar13 = FUN_089c2b48(1);
          iVar5 = FUN_089c3818(uVar13);
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_1 + 0x568);
            goto LAB_0884bbfc;
          }
        }
        *(undefined4 *)(param_1 + 0x440) = 2;
        *(undefined4 *)(param_1 + 0x444) = 2;
        *(undefined4 *)(param_1 + 0x448) = 100;
        FUN_0884b3d0(param_1,0);
        uVar13 = DONE_Get_DAT_08AC5874();
        FUN_089c69a4(uVar13);
        FUN_089c9b9c(3,DAT_08ac58c8);
        *(undefined4 *)(DAT_08ac58c4 + 0x28) = 1;
        FUN_089c9b74(0x1c,DAT_08ac58c8);
        *(undefined4 *)(DAT_08ac58c4 + 0xc) = 1;
        *(undefined4 *)(DAT_08ac58c4 + 0x20) = 1;
      }
      else if (iVar5 == 0xc) {
        iVar5 = *(int *)(param_1 + 0x58c) + 1;
        *(int *)(param_1 + 0x58c) = iVar5;
        if (iVar5 < 0x46) {
          iVar5 = *(int *)(param_1 + 0x58c);
        }
        else {
          FUN_0884b444(1);
          iVar5 = *(int *)(param_1 + 0x58c);
        }
        *(float *)(param_1 + 0x4e0) = (float)iVar5 * 0.01;
        if (iVar5 == 0x50) {
          FUN_089c87e4(1);
          FUN_089c879c(0x3f000000,1);
        }
        if (*(int *)(param_1 + 0x58c) < 100) {
          iVar5 = *(int *)(param_1 + 0x568);
          goto LAB_0884bbfc;
        }
        *(undefined4 *)(param_1 + 0x4e0) = 0;
        FUN_0884b444(1);
        *(undefined4 *)(param_1 + 0x564) = 100;
      }
      else {
        if (iVar5 != 0xb) {
          if (iVar5 != 10) {
            iVar5 = *(int *)(param_1 + 0x568);
            goto LAB_0884bbfc;
          }
          *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) + 1;
        }
        iVar5 = FUN_089edb80();
        *(undefined4 *)(iVar5 + 0x3c) = 0;
        *(undefined4 *)(iVar5 + 0x30) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x34) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x38) = 0x3f800000;
        iVar5 = FUN_089edb80();
        *(undefined4 *)(iVar5 + 0x40) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x44) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x48) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x4c) = 0x3f800000;
        uVar13 = FUN_089edb80();
        FUN_089edf24(uVar13,100);
        *(undefined4 *)(param_1 + 0x58c) = 0;
        FUN_089c9b9c(0x1f,DAT_08ac58c8);
        *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) + 1;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x568);
LAB_0884bbfc:
  if (0 < iVar5) {
    iVar5 = *(int *)(param_1 + 0x568) + -1;
    *(int *)(param_1 + 0x568) = iVar5;
    *(float *)(param_1 + 0x56c) = *(float *)(param_1 + 0x56c) - *(float *)(param_1 + 0x578);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x56c) = 0;
    }
    uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x574),in_V7C);
    fVar10 = (float)vcos_s(uVar13);
    uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x574),in_V7C);
    fVar12 = (float)vsin_s(uVar13);
    FUN_089e3008(*(float *)(DAT_08ac5c90 + 0x15c) + fVar10 * *(float *)(param_1 + 0x56c),
                 *(float *)(DAT_08ac5c90 + 0x160) + fVar12 * *(float *)(param_1 + 0x56c));
    *(float *)(param_1 + 0x574) = *(float *)(param_1 + 0x574) + *(float *)(param_1 + 0x570);
  }
  return;
}

