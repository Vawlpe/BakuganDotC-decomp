#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d0e54(int param_1)

{
  char cVar1;
  short sVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 in_V7C;
  
  fVar15 = (float)atan2f(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  iVar12 = *(int *)(param_1 + 0x70);
  iVar13 = 0x48;
  if (iVar12 != 0) {
    iVar11 = 0x120;
    cVar1 = *(char *)(iVar12 + 0x14c);
    iVar10 = iVar13;
    do {
      if (cVar1 == '\0') {
        iVar13 = iVar10 + 1;
        if (*(uint *)(iVar12 + 8) < 0x4e) {
          iVar14 = *(int *)(param_1 + 0x1c);
LAB_088d0f2c:
          FUN_089f3dd4(*(undefined4 *)(iVar14 + 0x3c),*(undefined4 *)(iVar14 + iVar11));
          iVar14 = *(int *)(param_1 + 0x1c);
        }
        else {
          if (0x53 < *(uint *)(iVar12 + 8)) {
            iVar14 = *(int *)(param_1 + 0x1c);
            goto LAB_088d0f2c;
          }
          FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11));
          iVar14 = *(int *)(param_1 + 0x1c);
        }
        *(uint *)(*(int *)(iVar14 + iVar11) + 0xd0) =
             *(uint *)(*(int *)(iVar14 + iVar11) + 0xd0) | 1;
        FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),1,8);
        if (*(int *)(DAT_08ac58c4 + 4) == 1) {
          if (*(int *)(iVar12 + 8) == 0x1f) {
            iVar14 = *(int *)(param_1 + 0x1c);
          }
          else {
            if (*(int *)(iVar12 + 8) != 7) {
              iVar14 = *(int *)(iVar12 + 8);
              goto LAB_088d0fbc;
            }
            iVar14 = *(int *)(param_1 + 0x1c);
          }
          *(uint *)(*(int *)(iVar14 + iVar11) + 0xd0) =
               *(uint *)(*(int *)(iVar14 + iVar11) + 0xd0) & 0xfffffffe;
          iVar14 = *(int *)(iVar12 + 8);
        }
        else {
          iVar14 = *(int *)(iVar12 + 8);
        }
LAB_088d0fbc:
        if (iVar14 == 0x55) {
          iVar14 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
          *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) & 0xfffffffe;
        }
        FUN_088d0d48(param_1,iVar12 + 0x20,iVar10);
        if ((0x4d < *(uint *)(iVar12 + 8)) && (*(uint *)(iVar12 + 8) < 0x54)) {
          iVar11 = iVar11 + 4;
          FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11));
          fVar18 = *(float *)(iVar12 + 0x408) * 0.018;
          FUN_089f4954(fVar18,fVar18,*(float *)(iVar12 + 0x420) + 1.570796,
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),0);
          fVar16 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11));
          uVar19 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11);
          fVar17 = (float)FUN_089f494c(uVar19);
          FUN_089f4924(fVar16 * fVar18,fVar17 * fVar18,uVar19);
          piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          *(undefined4 *)(*piVar9 + 0x60) = *(undefined4 *)(piVar9[-1] + 0x60);
          piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          *(undefined4 *)(*piVar9 + 100) = *(undefined4 *)(piVar9[-1] + 100);
          FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11));
          iVar13 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
          uVar19 = vmul_s(*(float *)(iVar12 + 0x420) + (fVar15 - 1.570796),in_V7C);
          auVar6 = vrot_q(uVar19,1,2,0,0);
          auVar7 = vrot_q(uVar19,3,1,0,0);
          auVar3 = vidt_q();
          auVar4 = vidt_q();
          auVar5._48_16_ = auVar4;
          auVar5._44_4_ = auVar3._12_4_;
          auVar5._40_4_ = auVar3._8_4_;
          auVar5._36_4_ = auVar3._4_4_;
          auVar5._32_4_ = auVar3._0_4_;
          auVar5._28_4_ = auVar7._12_4_;
          auVar5._24_4_ = auVar7._8_4_;
          auVar5._20_4_ = auVar7._4_4_;
          auVar5._16_4_ = auVar7._0_4_;
          auVar5._12_4_ = auVar6._12_4_;
          auVar5._8_4_ = auVar6._8_4_;
          auVar5._4_4_ = auVar6._4_4_;
          auVar5._0_4_ = auVar6._0_4_;
          auVar5 = vmmul_q(*(undefined (*) [64])(iVar13 + 0x20),auVar5);
          *(int *)*(undefined (*) [64])(iVar13 + 0x20) = auVar5._0_4_;
          *(int *)(iVar13 + 0x24) = auVar5._4_4_;
          *(int *)(iVar13 + 0x28) = auVar5._8_4_;
          *(int *)(iVar13 + 0x2c) = auVar5._12_4_;
          *(int *)(iVar13 + 0x30) = auVar5._16_4_;
          *(int *)(iVar13 + 0x34) = auVar5._20_4_;
          *(int *)(iVar13 + 0x38) = auVar5._24_4_;
          *(int *)(iVar13 + 0x3c) = auVar5._28_4_;
          *(int *)(iVar13 + 0x40) = auVar5._32_4_;
          *(int *)(iVar13 + 0x44) = auVar5._36_4_;
          *(int *)(iVar13 + 0x48) = auVar5._40_4_;
          *(int *)(iVar13 + 0x4c) = auVar5._44_4_;
          *(int *)(iVar13 + 0x50) = auVar5._48_4_;
          *(int *)(iVar13 + 0x54) = auVar5._52_4_;
          *(int *)(iVar13 + 0x58) = auVar5._56_4_;
          *(int *)(iVar13 + 0x5c) = auVar5._60_4_;
          iVar14 = FUN_088be274();
          iVar13 = iVar10 + 2;
          if (*(int *)(iVar14 + 0x780) == 2) {
            if (*(int *)(iVar12 + 8) == 0x4f) {
              iVar10 = FUN_088e55a8(iVar12);
              if (iVar10 == 0) {
                iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11 + -4);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
                iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
              }
              else {
                iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11 + -4);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
                iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
              }
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
              *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
            }
            FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),1,8);
            iVar10 = *(int *)(iVar12 + 0x418);
          }
          else {
            if (*(int *)(iVar12 + 8) == 0x4f) {
              iVar10 = FUN_088e55a8(iVar12);
              if (iVar10 == 0) {
                iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11 + -4);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
              }
              else {
                iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11 + -4);
                *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
              }
              iVar10 = *(int *)(param_1 + 0x1c);
            }
            else {
              iVar10 = *(int *)(param_1 + 0x1c);
            }
            *(uint *)(*(int *)(iVar10 + iVar11) + 0xd0) =
                 *(uint *)(*(int *)(iVar10 + iVar11) + 0xd0) & 0xfffffffe;
            iVar10 = *(int *)(iVar12 + 0x418);
          }
          if (*(char *)(iVar10 + 0x25) == '\0') {
            iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
            *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
          }
        }
        iVar11 = iVar11 + 4;
        iVar12 = *(int *)(iVar12 + 4);
      }
      else {
        iVar12 = *(int *)(iVar12 + 4);
        iVar13 = iVar10;
      }
      if (iVar12 == 0) break;
      cVar1 = *(char *)(iVar12 + 0x14c);
      iVar10 = iVar13;
    } while( true );
  }
  if (iVar13 < *(int *)(param_1 + 0x78) + 0x48) {
    iVar12 = iVar13 << 2;
    do {
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      iVar13 = iVar13 + 1;
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
      iVar12 = iVar12 + 4;
    } while (iVar13 < *(int *)(param_1 + 0x78) + 0x48);
  }
  fVar15 = (float)atan2f(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  iVar12 = *(int *)(param_1 + 0xd4);
  if (iVar12 == 0) {
LAB_088d1654:
    if (iVar13 < *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0xcc) + 0x48) {
      iVar12 = iVar13 << 2;
      do {
        iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        iVar13 = iVar13 + 1;
        *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
        iVar12 = iVar12 + 4;
      } while (iVar13 < *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0xcc) + 0x48);
    }
    iVar13 = FUN_088be274();
    FUN_088d0d48(param_1,iVar13 + 0x6d0,0xe);
    return;
  }
  iVar10 = iVar13 << 2;
  sVar2 = *(short *)(iVar12 + 0x142);
  do {
    if (sVar2 == 0xbd9) {
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
      iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
      *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) | 1;
      FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),1,8);
      FUN_088d0d48(param_1,iVar12 + 0x20,iVar13);
      iVar14 = iVar10 + 4;
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar14));
      iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar14);
      *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) | 1;
      FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar14),1,8);
      piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iVar14);
      *(undefined4 *)(*piVar9 + 0x60) = *(undefined4 *)(piVar9[-1] + 0x60);
      piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iVar14);
      *(undefined4 *)(*piVar9 + 100) = *(undefined4 *)(piVar9[-1] + 100);
      FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar14));
      iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar14);
      uVar19 = vmul_s(fVar15 - (*(float *)(iVar12 + 0x34) + *(float *)(iVar12 + 0x234)),in_V7C);
      auVar6 = vrot_q(uVar19,1,2,0,0);
      auVar7 = vrot_q(uVar19,3,1,0,0);
      auVar3 = vidt_q();
      auVar4 = vidt_q();
      auVar8._48_16_ = auVar4;
      auVar8._44_4_ = auVar3._12_4_;
      auVar8._40_4_ = auVar3._8_4_;
      auVar8._36_4_ = auVar3._4_4_;
      auVar8._32_4_ = auVar3._0_4_;
      auVar8._28_4_ = auVar7._12_4_;
      auVar8._24_4_ = auVar7._8_4_;
      auVar8._20_4_ = auVar7._4_4_;
      auVar8._16_4_ = auVar7._0_4_;
      auVar8._12_4_ = auVar6._12_4_;
      auVar8._8_4_ = auVar6._8_4_;
      auVar8._4_4_ = auVar6._4_4_;
      auVar8._0_4_ = auVar6._0_4_;
      auVar5 = vmmul_q(*(undefined (*) [64])(iVar11 + 0x20),auVar8);
      *(int *)*(undefined (*) [64])(iVar11 + 0x20) = auVar5._0_4_;
      *(int *)(iVar11 + 0x24) = auVar5._4_4_;
      *(int *)(iVar11 + 0x28) = auVar5._8_4_;
      *(int *)(iVar11 + 0x2c) = auVar5._12_4_;
      *(int *)(iVar11 + 0x30) = auVar5._16_4_;
      *(int *)(iVar11 + 0x34) = auVar5._20_4_;
      *(int *)(iVar11 + 0x38) = auVar5._24_4_;
      *(int *)(iVar11 + 0x3c) = auVar5._28_4_;
      *(int *)(iVar11 + 0x40) = auVar5._32_4_;
      *(int *)(iVar11 + 0x44) = auVar5._36_4_;
      *(int *)(iVar11 + 0x48) = auVar5._40_4_;
      *(int *)(iVar11 + 0x4c) = auVar5._44_4_;
      *(int *)(iVar11 + 0x50) = auVar5._48_4_;
      *(int *)(iVar11 + 0x54) = auVar5._52_4_;
      *(int *)(iVar11 + 0x58) = auVar5._56_4_;
      *(int *)(iVar11 + 0x5c) = auVar5._60_4_;
      iVar11 = FUN_088be274();
      if (*(int *)(iVar11 + 0x780) == 2) {
        iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar14);
        *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) | 1;
      }
      else {
        iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar14);
        *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) & 0xfffffffe;
      }
      iVar13 = iVar13 + 2;
      iVar10 = iVar10 + 8;
LAB_088d1648:
      iVar12 = *(int *)(iVar12 + 4);
    }
    else {
      if (*(short *)(iVar12 + 0x142) == 0xbc7) {
        FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xfc),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
        iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) | 1;
        FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),1,8);
        FUN_088d0d48(param_1,iVar12 + 0x20,iVar13);
        iVar13 = iVar13 + 1;
        iVar10 = iVar10 + 4;
        goto LAB_088d1648;
      }
      if (*(short *)(iVar12 + 0x142) == 0x1778) {
        iVar11 = *(int *)(param_1 + 0x1c);
LAB_088d156c:
        FUN_089f3dd4(*(undefined4 *)(iVar11 + 0x3c),*(undefined4 *)(iVar11 + iVar10));
        iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) | 1;
        FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),1,8);
        if (*(char *)(iVar12 + 0x15e) == '\0') {
          iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
          *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) & 0xfffffffe;
        }
        else {
          iVar11 = (**(code **)(*(int *)(iVar12 + 0x14) + 0x8c))
                             (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x88));
          if (iVar11 == 0) {
            iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
            *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) | 1;
            FUN_088d0d48(param_1,iVar12 + 0x20,iVar13);
          }
          else {
            iVar11 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
            *(uint *)(iVar11 + 0xd0) = *(uint *)(iVar11 + 0xd0) & 0xfffffffe;
          }
        }
        iVar13 = iVar13 + 1;
        iVar10 = iVar10 + 4;
        goto LAB_088d1648;
      }
      if (*(short *)(iVar12 + 0x142) == 0xbdf) {
        iVar11 = *(int *)(param_1 + 0x1c);
        goto LAB_088d156c;
      }
      iVar12 = *(int *)(iVar12 + 4);
    }
    if (iVar12 == 0) goto LAB_088d1654;
    sVar2 = *(short *)(iVar12 + 0x142);
  } while( true );
}

