#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08830fcc(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 in_V7C;
  int local_5c;
  
  iVar3 = (**(code **)(*(int *)(param_2 + 0x14) + 0x54))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x50));
  if (iVar3 != 0) {
    local_5c = 0;
    uVar10 = 0;
    iVar13 = 0;
    iVar3 = param_1;
    iVar11 = param_1;
    do {
      iVar5 = *(int *)(param_1 + 0x14) + local_5c;
      iVar9 = *(int *)(iVar5 + 0x84);
      iVar4 = *(int *)(param_1 + 0x14) + iVar13;
      uVar6 = *(undefined4 *)(iVar5 + 0x88);
      iVar5 = *(int *)(iVar4 + 0x308);
      uVar12 = *(undefined4 *)(iVar4 + 0x1bc);
      iVar4 = *(int *)(iVar4 + 0x1c8);
      uVar8 = uVar10 & 0xff;
      if ((int)uVar10 < *(int *)(param_2 + 0x518)) {
        if (uVar8 < 3) {
          iVar7 = *(int *)(param_2 + uVar8 * 4 + 0x51c);
        }
        else {
          iVar7 = *(int *)(param_2 + 0x51c);
        }
        if (iVar7 - 6U < 5) {
          fVar14 = (float)FUN_08888890(param_2 + 0x434);
        }
        else {
          if (uVar8 < 3) {
            fVar14 = *(float *)(param_2 + uVar8 * 4 + 0x4f0);
          }
          else {
            fVar14 = *(float *)(param_2 + 0x4f0);
          }
          fVar14 = fVar14 * 0.0001;
        }
        fVar15 = 1.0 - fVar14;
        *(float *)(iVar5 + 100) = *(float *)(iVar11 + 0x340) - (1.0 - fVar15) * 32.0;
        if ((1.0 <= fVar14) && (*(float *)(iVar3 + 0x4b0) < 1.0)) {
          iVar7 = DONE_NotZero_DAT_08AC5874();
          if (iVar7 != 0) {
            uVar16 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar16,0x200132,0,0);
          }
          iVar7 = FUN_0885fc80(param_2);
          if ((iVar7 != 0) && (iVar7 = DONE_NotZero_DAT_08AC5874(), iVar7 != 0)) {
            uVar16 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar16,0x5100000,0,0);
          }
        }
        *(float *)(iVar3 + 0x4b0) = fVar14;
        if (1.0 <= fVar14) {
          fVar14 = *(float *)(iVar3 + 0x37c) + 0.2792527;
          *(float *)(iVar3 + 0x37c) = fVar14;
          if (6.283185 <= fVar14) {
            *(float *)(iVar3 + 0x37c) = *(float *)(iVar3 + 0x37c) - 6.283185;
          }
          iVar7 = FUN_0882c220(0xb);
          if (iVar7 == 1) {
            uVar16 = vmul_s(*(undefined4 *)(iVar3 + 0x37c),in_V7C);
            fVar14 = (float)vsin_s(uVar16);
            fVar14 = fVar14 * 0.2 + 0.4;
            auVar2._4_4_ = DAT_08b00864;
            auVar2._0_4_ = DAT_08b00860;
            auVar2._8_4_ = DAT_08b00868;
            auVar2._12_4_ = DAT_08b0086c;
            auVar1._4_4_ = DAT_08b00864;
            auVar1._0_4_ = DAT_08b00860;
            auVar1._8_4_ = DAT_08b00868;
            auVar1._12_4_ = DAT_08b0086c;
            auVar1 = vsub_q(_DAT_08b00190,auVar1);
            auVar1 = vscl_q(auVar1,fVar14);
            auVar1 = vadd_q(auVar2,auVar1);
            *(int *)(iVar9 + 0xb0) = auVar1._0_4_;
            *(int *)(iVar9 + 0xb4) = auVar1._4_4_;
            *(int *)(iVar9 + 0xb8) = auVar1._8_4_;
            *(int *)(iVar9 + 0xbc) = auVar1._12_4_;
            *(float *)(iVar9 + 0xbc) = fVar14;
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x37c) = 0;
          *(undefined4 *)(iVar9 + 0xbc) = 0;
        }
        FUN_089f4954(0x3f800000,0x3f800000,0,iVar9,0);
        FUN_089f4954(0x3ec30be1,0x3ec30be1,0,uVar6,0);
        FUN_089f4954(0x3f800000,0x3f800000,0,uVar12,0);
        FUN_0882c4c8(0,0,0x42400000,fVar15 * 64.0,param_1,iVar5);
        FUN_089f4954(0x3f800000,0x3f800000,0,iVar4,0);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xffffffdf;
        if (0.0 < fVar15) {
          if (fVar15 < 1.0) {
            *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
            *(float *)(iVar4 + 100) = (float)(int)(*(float *)(iVar11 + 0x344) + fVar15 * 59.0);
            if (1.5 <= *(float *)(iVar3 + 0x3a8)) {
              *(float *)(iVar3 + 0x3a8) = *(float *)(iVar3 + 0x3a8) - 1.5;
              FUN_089f4c84(iVar4);
              FUN_089f4cb8(iVar4);
              fVar14 = *(float *)(iVar3 + 0x3a8);
            }
            else {
              fVar14 = *(float *)(iVar3 + 0x3a8);
            }
            *(float *)(iVar3 + 0x3a8) = fVar14 + 1.0;
            goto LAB_08831448;
          }
          uVar8 = *(uint *)(iVar4 + 0xd0);
        }
        else {
          uVar8 = *(uint *)(iVar4 + 0xd0);
        }
        *(uint *)(iVar4 + 0xd0) = uVar8 & 0xfffffffe;
      }
      else {
        FUN_089f4954(0x3f800000,0x3f800000,0,iVar9,0);
        FUN_089f4954(0x3f800000,0x3f800000,0,uVar12,0);
      }
LAB_08831448:
      local_5c = local_5c + 8;
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 4;
      iVar11 = iVar11 + 0x10;
      iVar3 = iVar3 + 4;
    } while ((int)uVar10 < 2);
  }
  return;
}

