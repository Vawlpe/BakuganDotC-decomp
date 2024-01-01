#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char FUN_089e5be4(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [36];
  undefined auVar6 [36];
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined (*pauVar12) [12];
  undefined4 in_V0C;
  undefined4 uVar13;
  undefined4 in_V7D;
  undefined4 uVar14;
  
  DAT_08ac5c98 = '\0';
  DAT_08af83b0 = param_1 + 0xe8;
  pauVar12 = (undefined (*) [12])0x0;
  DAT_08af8380 = param_4;
  switch(*param_2) {
  case 1:
    if (DAT_08af83b4 == 0) {
      DAT_08af83b4 = 1;
      DAT_08af83c4 = &DAT_08af5504;
      DAT_08af83c0 = 1;
    }
    DAT_08b002b8 = 0;
    iVar11 = 0;
    pauVar12 = (undefined (*) [12])0x0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      iVar10 = 0;
      do {
        DAT_08af8384 = iVar11;
        if (*(int *)(*(int *)(*(int *)(param_1 + 200) + iVar10) + 0x28) == 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e3c3c(iVar8,*(undefined4 *)(iVar8 + 0x1c),param_2);
          iVar8 = *(int *)(param_1 + 0xd0);
        }
        else {
          (**(code **)(param_2[1] + 0x34))
                    ((int)param_2 + (int)*(short *)(param_2[1] + 0x30),
                     *(int *)(*(int *)(param_1 + 200) + iVar10) + 0x70,&DAT_08af83c0);
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e3c3c(iVar8,*(undefined4 *)(iVar8 + 0x1c),&DAT_08af83c0);
          iVar8 = *(int *)(param_1 + 0xd0);
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar11 < iVar8);
    }
    break;
  case 2:
    if (DAT_08af8400 == 0) {
      DAT_08af8400 = 1;
      DAT_08af8414 = &DAT_08af5564;
      DAT_08af8410 = 2;
    }
    DAT_08b002b8 = 0;
    iVar11 = 0;
    pauVar12 = (undefined (*) [12])0x0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      iVar10 = 0;
      do {
        DAT_08af8384 = iVar11;
        if (*(int *)(*(int *)(*(int *)(param_1 + 200) + iVar10) + 0x28) == 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e3ff4(iVar8,*(undefined4 *)(iVar8 + 0x1c),param_2);
          iVar8 = *(int *)(param_1 + 0xd0);
        }
        else {
          (**(code **)(param_2[1] + 0x34))
                    ((int)param_2 + (int)*(short *)(param_2[1] + 0x30),
                     *(int *)(*(int *)(param_1 + 200) + iVar10) + 0x70,&DAT_08af8410);
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e3ff4(iVar8,*(undefined4 *)(iVar8 + 0x1c),&DAT_08af8410);
          iVar8 = *(int *)(param_1 + 0xd0);
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar11 < iVar8);
    }
    break;
  case 3:
    if (DAT_08af8440 == 0) {
      DAT_08af8440 = 1;
      DAT_08af8454 = &DAT_08af55c4;
      DAT_08af8450 = 3;
    }
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      iVar10 = 0;
      do {
        DAT_08af8384 = iVar11;
        if (*(int *)(*(int *)(*(int *)(param_1 + 200) + iVar10) + 0x28) == 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e4664(iVar8,*(undefined4 *)(iVar8 + 0x1c),param_2);
          pauVar12 = (undefined (*) [12])(param_2 + 4);
        }
        else {
          (**(code **)(param_2[1] + 0x34))
                    ((int)param_2 + (int)*(short *)(param_2[1] + 0x30),
                     *(int *)(*(int *)(param_1 + 200) + iVar10) + 0x70,&DAT_08af8450);
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e4664(iVar8,*(undefined4 *)(iVar8 + 0x1c),&DAT_08af8450);
          pauVar12 = (undefined (*) [12])0x8af8460;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar11 < *(int *)(param_1 + 0xd0));
    }
    break;
  case 4:
    if (DAT_08af8480 == 0) {
      DAT_08af8480 = 1;
      DAT_08af8494 = &DAT_08af5624;
      DAT_08af84a4 = &DAT_08af5564;
      DAT_08af84a0 = 2;
      DAT_08af8490 = 4;
    }
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      iVar10 = 0;
      pauVar12 = (undefined (*) [12])&DAT_08af83a0;
      do {
        DAT_08af8384 = iVar11;
        if (*(int *)(*(int *)(*(int *)(param_1 + 200) + iVar10) + 0x28) == 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e4c94(iVar8,*(undefined4 *)(iVar8 + 0x1c),param_2);
        }
        else {
          (**(code **)(param_2[1] + 0x34))
                    ((int)param_2 + (int)*(short *)(param_2[1] + 0x30),
                     *(int *)(*(int *)(param_1 + 200) + iVar10) + 0x70,&DAT_08af8490);
          iVar8 = *(int *)(*(int *)(param_1 + 200) + iVar10);
          FUN_089e4c94(iVar8,*(undefined4 *)(iVar8 + 0x1c),&DAT_08af8490);
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar11 < *(int *)(param_1 + 0xd0));
    }
  }
  if (DAT_08ac5c98 != '\0') {
    puVar9 = *(undefined4 **)(DAT_08b002ac + 0x28);
    DAT_08b0029c = in_V7D;
    if (puVar9 == (undefined4 *)0x0) {
      if (DAT_08b002b8 == 0) {
        puVar9 = (undefined4 *)
                 (*(int *)(DAT_08b002ac + 0xc) + (uint)*(ushort *)(DAT_08b002b0 + 6) * 0x10);
        DAT_08b00290 = *puVar9;
        DAT_08b00294 = puVar9[1];
        DAT_08b00298 = puVar9[2];
        DAT_08b0029c = puVar9[3];
      }
      else {
        auVar1._8_4_ = DAT_08b00288;
        auVar1._4_4_ = DAT_08b00284;
        auVar1._0_4_ = DAT_08b00280;
        auVar1 = vsub_t(*pauVar12,auVar1);
        uVar13 = vdot_t(auVar1,auVar1);
        uVar14 = vcmp_s(8,uVar13,DAT_08b00280);
        vrsq_s(uVar13);
        uVar13 = vcmovt_s(in_V7D,(byte)uVar14 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar1,uVar13);
        DAT_08b00290 = auVar1._0_4_;
        DAT_08b00294 = auVar1._4_4_;
        DAT_08b00298 = auVar1._8_4_;
      }
    }
    else {
      if (DAT_08b002b8 == 0) {
        auVar5._24_12_ = *(undefined (*) [12])(puVar9 + 8);
        auVar5._20_4_ = puVar9[6];
        auVar5._16_4_ = puVar9[5];
        auVar5._12_4_ = puVar9[4];
        auVar5._8_4_ = puVar9[2];
        auVar5._4_4_ = puVar9[1];
        auVar5._0_4_ = *puVar9;
        auVar1 = vtfm3_t(auVar5,*(undefined (*) [12])
                                 (*(int *)(DAT_08b002ac + 0xc) +
                                 (uint)*(ushort *)(DAT_08b002b0 + 6) * 0x10));
        DAT_08b00290 = auVar1._0_4_;
        DAT_08b00294 = auVar1._4_4_;
        DAT_08b00298 = auVar1._8_4_;
        DAT_08b0029c = in_V0C;
      }
      else {
        auVar3._8_4_ = DAT_08b00288;
        auVar3._4_4_ = DAT_08b00284;
        auVar3._0_4_ = DAT_08b00280;
        auVar1 = vsub_t(*pauVar12,auVar3);
        auVar6._24_12_ = *(undefined (*) [12])(puVar9 + 8);
        auVar6._20_4_ = puVar9[6];
        auVar6._16_4_ = puVar9[5];
        auVar6._12_4_ = puVar9[4];
        auVar6._8_4_ = puVar9[2];
        auVar6._4_4_ = puVar9[1];
        auVar6._0_4_ = *puVar9;
        auVar1 = vtfm3_t(auVar6,auVar1);
        uVar13 = vdot_t(auVar1,auVar1);
        uVar14 = vcmp_s(8,uVar13,auVar1._0_4_);
        vrsq_s(uVar13);
        uVar13 = vcmovt_s(in_V7D,(byte)uVar14 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar1,uVar13);
        DAT_08b00290 = auVar1._0_4_;
        DAT_08b00294 = auVar1._4_4_;
        DAT_08b00298 = auVar1._8_4_;
      }
      uVar13 = vfim_s(0x3c00);
      auVar4._8_8_ = *(undefined8 *)(puVar9 + 4);
      auVar4._4_4_ = puVar9[1];
      auVar4._0_4_ = *puVar9;
      auVar2._12_4_ = uVar13;
      auVar2._8_4_ = DAT_08b00288;
      auVar2._4_4_ = DAT_08b00284;
      auVar2._0_4_ = DAT_08b00280;
      auVar2 = vtfm4_q(auVar4,auVar2);
      DAT_08b00280 = auVar2._0_4_;
      DAT_08b00284 = auVar2._4_4_;
      DAT_08b00288 = auVar2._8_4_;
      DAT_08b0028c = auVar2._12_4_;
    }
    uVar7 = DAT_08b0028c;
    uVar14 = DAT_08b00288;
    uVar13 = DAT_08b00284;
    *param_3 = DAT_08b00280;
    param_3[1] = uVar13;
    param_3[2] = uVar14;
    param_3[3] = uVar7;
  }
  return DAT_08ac5c98;
}

