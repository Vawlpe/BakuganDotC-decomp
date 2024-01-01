#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089e588c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined auVar19 [36];
  undefined auVar20 [36];
  undefined auVar21 [64];
  bool bVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  undefined4 *puVar28;
  int iVar29;
  
  iVar29 = 0;
  if (*(int *)(param_1 + 0xc0) == 8) {
    if (*(char *)(param_1 + 0xdc) != '\0') {
      *(undefined *)(param_1 + 0xdc) = 0;
      if (*(int *)(param_1 + 0xe0) == 0) {
        iVar26 = 0;
        iVar25 = 0;
        if (0 < *(int *)(param_1 + 0xd0)) {
          do {
            piVar27 = *(int **)(*(int *)(*(int *)(param_1 + 200) + iVar25) + 0x24);
            if ((((*piVar27 == 0x3f800000) && (piVar27[5] == 0x3f800000)) &&
                (piVar27[10] == 0x3f800000)) && (piVar27[0xf] == 0x3f800000)) {
              bVar22 = true;
              if ((piVar27[6] | piVar27[8] | piVar27[7] | piVar27[9] | piVar27[4] |
                   piVar27[1] | piVar27[0xd] |
                  piVar27[3] | piVar27[2] | piVar27[0xc] | piVar27[0xb] | piVar27[0xe]) != 0) {
                bVar22 = false;
              }
            }
            else {
              bVar22 = false;
            }
            if (bVar22) {
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 200) + iVar25) + 0x28) = 0;
            }
            else {
              iVar23 = *(int *)(*(int *)(param_1 + 200) + iVar25);
              *(undefined4 *)(iVar23 + 0x28) = *(undefined4 *)(iVar23 + 0x24);
              iVar23 = *(int *)(*(int *)(param_1 + 200) + iVar25);
              puVar24 = *(undefined4 **)(iVar23 + 0x24);
              uVar10 = puVar24[1];
              uVar11 = puVar24[2];
              uVar15 = puVar24[3];
              uVar4 = puVar24[4];
              uVar6 = puVar24[5];
              uVar12 = puVar24[6];
              uVar16 = puVar24[7];
              uVar5 = puVar24[8];
              uVar7 = puVar24[9];
              uVar13 = puVar24[10];
              uVar17 = puVar24[0xb];
              uVar9 = puVar24[0xc];
              uVar8 = puVar24[0xd];
              uVar14 = puVar24[0xe];
              uVar18 = puVar24[0xf];
              *(undefined4 *)(iVar23 + 0x70) = *puVar24;
              *(undefined4 *)(iVar23 + 0x74) = uVar10;
              *(undefined4 *)(iVar23 + 0x78) = uVar11;
              *(undefined4 *)(iVar23 + 0x7c) = uVar15;
              *(undefined4 *)(iVar23 + 0x80) = uVar4;
              *(undefined4 *)(iVar23 + 0x84) = uVar6;
              *(undefined4 *)(iVar23 + 0x88) = uVar12;
              *(undefined4 *)(iVar23 + 0x8c) = uVar16;
              *(undefined4 *)(iVar23 + 0x90) = uVar5;
              *(undefined4 *)(iVar23 + 0x94) = uVar7;
              *(undefined4 *)(iVar23 + 0x98) = uVar13;
              *(undefined4 *)(iVar23 + 0x9c) = uVar17;
              *(undefined4 *)(iVar23 + 0xa0) = uVar9;
              *(undefined4 *)(iVar23 + 0xa4) = uVar8;
              *(undefined4 *)(iVar23 + 0xa8) = uVar14;
              *(undefined4 *)(iVar23 + 0xac) = uVar18;
              iVar23 = *(int *)(*(int *)(param_1 + 200) + iVar25);
              uVar4 = *(undefined4 *)(iVar23 + 0x70);
              uVar5 = *(undefined4 *)(iVar23 + 0x74);
              uVar9 = *(undefined4 *)(iVar23 + 0x78);
              uVar10 = *(undefined4 *)(iVar23 + 0x88);
              auVar1 = vzero_t();
              auVar20._32_4_ = *(undefined4 *)(iVar23 + 0x98);
              auVar20._28_4_ = uVar10;
              auVar20._24_4_ = uVar9;
              auVar20._20_4_ = *(undefined4 *)(iVar23 + 0x94);
              auVar20._16_4_ = *(undefined4 *)(iVar23 + 0x84);
              auVar20._12_4_ = uVar5;
              auVar20._8_4_ = *(undefined4 *)(iVar23 + 0x90);
              auVar20._4_4_ = *(undefined4 *)(iVar23 + 0x80);
              auVar20._0_4_ = uVar4;
              auVar3 = vtfm3_t(auVar20,*(undefined (*) [12])(iVar23 + 0xa0));
              *(undefined4 *)(iVar23 + 0x70) = uVar4;
              *(undefined4 *)(iVar23 + 0x74) = *(undefined4 *)(iVar23 + 0x80);
              *(undefined4 *)(iVar23 + 0x78) = *(undefined4 *)(iVar23 + 0x90);
              *(int *)(iVar23 + 0x7c) = auVar1._0_4_;
              *(undefined4 *)(iVar23 + 0x80) = uVar5;
              *(undefined4 *)(iVar23 + 0x84) = *(undefined4 *)(iVar23 + 0x84);
              *(undefined4 *)(iVar23 + 0x88) = *(undefined4 *)(iVar23 + 0x94);
              *(int *)(iVar23 + 0x8c) = auVar1._4_4_;
              auVar3 = vneg_t(auVar3);
              *(undefined4 *)(iVar23 + 0x90) = uVar9;
              *(undefined4 *)(iVar23 + 0x94) = uVar10;
              *(undefined4 *)(iVar23 + 0x98) = *(undefined4 *)(iVar23 + 0x98);
              *(int *)(iVar23 + 0x9c) = auVar1._8_4_;
              *(int *)(iVar23 + 0xa0) = auVar3._0_4_;
              *(int *)(iVar23 + 0xa4) = auVar3._4_4_;
              *(int *)(iVar23 + 0xa8) = auVar3._8_4_;
              *(undefined4 *)(iVar23 + 0xac) = *(undefined4 *)(iVar23 + 0xac);
            }
            iVar26 = iVar26 + 1;
            iVar25 = iVar25 + 4;
          } while (iVar26 < *(int *)(param_1 + 0xd0));
        }
      }
      else {
        iVar26 = 0;
        iVar25 = 0;
        if (0 < *(int *)(param_1 + 0xd0)) {
          do {
            iVar23 = *(int *)(*(int *)(param_1 + 200) + iVar25);
            *(int *)(iVar23 + 0x28) = iVar23 + 0x30;
            iVar23 = *(int *)(*(int *)(param_1 + 200) + iVar25);
            puVar28 = *(undefined4 **)(param_1 + 0xe0);
            puVar24 = *(undefined4 **)(iVar23 + 0x24);
            auVar2._60_4_ = puVar28[0xf];
            auVar2._56_4_ = puVar28[0xb];
            auVar2._52_4_ = puVar28[7];
            auVar2._48_4_ = puVar28[3];
            auVar2._44_4_ = puVar28[0xe];
            auVar2._40_4_ = puVar28[10];
            auVar2._36_4_ = puVar28[6];
            auVar2._32_4_ = puVar28[2];
            auVar2._28_4_ = puVar28[0xd];
            auVar2._24_4_ = puVar28[9];
            auVar2._20_4_ = puVar28[5];
            auVar2._16_4_ = puVar28[1];
            auVar2._12_4_ = puVar28[0xc];
            auVar2._8_4_ = puVar28[8];
            auVar2._4_4_ = puVar28[4];
            auVar2._0_4_ = *puVar28;
            auVar21._60_4_ = puVar24[0xf];
            auVar21._56_4_ = puVar24[0xb];
            auVar21._52_4_ = puVar24[7];
            auVar21._48_4_ = puVar24[3];
            auVar21._44_4_ = puVar24[0xe];
            auVar21._40_4_ = puVar24[10];
            auVar21._36_4_ = puVar24[6];
            auVar21._32_4_ = puVar24[2];
            auVar21._28_4_ = puVar24[0xd];
            auVar21._24_4_ = puVar24[9];
            auVar21._20_4_ = puVar24[5];
            auVar21._16_4_ = puVar24[1];
            auVar21._12_4_ = puVar24[0xc];
            auVar21._8_4_ = puVar24[8];
            auVar21._4_4_ = puVar24[4];
            auVar21._0_4_ = *puVar24;
            auVar2 = vmmul_q(auVar2,auVar21);
            *(int *)(iVar23 + 0x30) = auVar2._0_4_;
            *(int *)(iVar23 + 0x34) = auVar2._16_4_;
            *(int *)(iVar23 + 0x38) = auVar2._32_4_;
            *(int *)(iVar23 + 0x3c) = auVar2._48_4_;
            *(int *)(iVar23 + 0x40) = auVar2._4_4_;
            *(int *)(iVar23 + 0x44) = auVar2._20_4_;
            *(int *)(iVar23 + 0x48) = auVar2._36_4_;
            *(int *)(iVar23 + 0x4c) = auVar2._52_4_;
            *(int *)(iVar23 + 0x50) = auVar2._8_4_;
            *(int *)(iVar23 + 0x54) = auVar2._24_4_;
            *(int *)(iVar23 + 0x58) = auVar2._40_4_;
            *(int *)(iVar23 + 0x5c) = auVar2._56_4_;
            *(int *)(iVar23 + 0x60) = auVar2._12_4_;
            *(int *)(iVar23 + 100) = auVar2._28_4_;
            *(int *)(iVar23 + 0x68) = auVar2._44_4_;
            *(int *)(iVar23 + 0x6c) = auVar2._60_4_;
            iVar23 = *(int *)(*(int *)(param_1 + 200) + iVar25);
            *(undefined4 *)(iVar23 + 0x70) = *(undefined4 *)(iVar23 + 0x30);
            *(undefined4 *)(iVar23 + 0x74) = *(undefined4 *)(iVar23 + 0x34);
            *(undefined4 *)(iVar23 + 0x78) = *(undefined4 *)(iVar23 + 0x38);
            *(undefined4 *)(iVar23 + 0x7c) = *(undefined4 *)(iVar23 + 0x3c);
            *(undefined4 *)(iVar23 + 0x80) = *(undefined4 *)(iVar23 + 0x40);
            *(undefined4 *)(iVar23 + 0x84) = *(undefined4 *)(iVar23 + 0x44);
            *(undefined4 *)(iVar23 + 0x88) = *(undefined4 *)(iVar23 + 0x48);
            *(undefined4 *)(iVar23 + 0x8c) = *(undefined4 *)(iVar23 + 0x4c);
            *(undefined4 *)(iVar23 + 0x90) = *(undefined4 *)(iVar23 + 0x50);
            *(undefined4 *)(iVar23 + 0x94) = *(undefined4 *)(iVar23 + 0x54);
            *(undefined4 *)(iVar23 + 0x98) = *(undefined4 *)(iVar23 + 0x58);
            *(undefined4 *)(iVar23 + 0x9c) = *(undefined4 *)(iVar23 + 0x5c);
            *(undefined4 *)(iVar23 + 0xa0) = *(undefined4 *)(iVar23 + 0x60);
            *(undefined4 *)(iVar23 + 0xa4) = *(undefined4 *)(iVar23 + 100);
            *(undefined4 *)(iVar23 + 0xa8) = *(undefined4 *)(iVar23 + 0x68);
            *(undefined4 *)(iVar23 + 0xac) = *(undefined4 *)(iVar23 + 0x6c);
            iVar23 = *(int *)(*(int *)(param_1 + 200) + iVar25);
            uVar4 = *(undefined4 *)(iVar23 + 0x70);
            uVar5 = *(undefined4 *)(iVar23 + 0x74);
            uVar9 = *(undefined4 *)(iVar23 + 0x78);
            uVar10 = *(undefined4 *)(iVar23 + 0x88);
            auVar1 = vzero_t();
            auVar19._32_4_ = *(undefined4 *)(iVar23 + 0x98);
            auVar19._28_4_ = uVar10;
            auVar19._24_4_ = uVar9;
            auVar19._20_4_ = *(undefined4 *)(iVar23 + 0x94);
            auVar19._16_4_ = *(undefined4 *)(iVar23 + 0x84);
            auVar19._12_4_ = uVar5;
            auVar19._8_4_ = *(undefined4 *)(iVar23 + 0x90);
            auVar19._4_4_ = *(undefined4 *)(iVar23 + 0x80);
            auVar19._0_4_ = uVar4;
            auVar3 = vtfm3_t(auVar19,*(undefined (*) [12])(iVar23 + 0xa0));
            *(undefined4 *)(iVar23 + 0x70) = uVar4;
            *(undefined4 *)(iVar23 + 0x74) = *(undefined4 *)(iVar23 + 0x80);
            *(undefined4 *)(iVar23 + 0x78) = *(undefined4 *)(iVar23 + 0x90);
            *(int *)(iVar23 + 0x7c) = auVar1._0_4_;
            *(undefined4 *)(iVar23 + 0x80) = uVar5;
            *(undefined4 *)(iVar23 + 0x84) = *(undefined4 *)(iVar23 + 0x84);
            *(undefined4 *)(iVar23 + 0x88) = *(undefined4 *)(iVar23 + 0x94);
            *(int *)(iVar23 + 0x8c) = auVar1._4_4_;
            auVar3 = vneg_t(auVar3);
            *(undefined4 *)(iVar23 + 0x90) = uVar9;
            *(undefined4 *)(iVar23 + 0x94) = uVar10;
            *(undefined4 *)(iVar23 + 0x98) = *(undefined4 *)(iVar23 + 0x98);
            *(int *)(iVar23 + 0x9c) = auVar1._8_4_;
            *(int *)(iVar23 + 0xa0) = auVar3._0_4_;
            *(int *)(iVar23 + 0xa4) = auVar3._4_4_;
            *(int *)(iVar23 + 0xa8) = auVar3._8_4_;
            *(undefined4 *)(iVar23 + 0xac) = *(undefined4 *)(iVar23 + 0xac);
            iVar26 = iVar26 + 1;
            iVar25 = iVar25 + 4;
          } while (iVar26 < *(int *)(param_1 + 0xd0));
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0xe0) == 0) {
    iVar29 = *(int *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0xdc) != '\0') {
      *(undefined *)(param_1 + 0xdc) = 0;
    }
    (**(code **)(*(int *)(iVar29 + 4) + 0x4c))(iVar29 + *(short *)(*(int *)(iVar29 + 4) + 0x48));
  }
  else {
    iVar29 = *(int *)(param_1 + 0xe4);
    if (*(char *)(param_1 + 0xdc) != '\0') {
      *(undefined *)(param_1 + 0xdc) = 0;
      iVar25 = *(int *)(*(int *)(param_1 + 0xc4) + 4);
      (**(code **)(iVar25 + 0x34))
                (*(int *)(param_1 + 0xc4) + (int)*(short *)(iVar25 + 0x30),
                 *(undefined4 *)(param_1 + 0xe0),iVar29);
    }
  }
  return iVar29;
}

