#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08856bc8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined auVar9 [64];
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_V7C;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_3c;
  char *local_38;
  int local_34;
  undefined auVar10 [64];
  
  uVar17 = *(undefined4 *)(param_1 + 0x24);
  uVar16 = *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xb4);
  iVar11 = FUN_0884b248();
  if (iVar11 != 0) {
    iVar11 = FUN_089bffd4();
    if (iVar11 != 0) {
      uVar12 = FUN_089bfff0();
      FUN_089c00c4(uVar12,0x20001f,*(int *)(param_1 + 0x130) + 0xb0,0,1);
    }
    iVar11 = FUN_089bffd4();
    if (iVar11 == 0) {
      cVar2 = *(char *)(param_1 + 0xa7b);
    }
    else {
      uVar12 = FUN_089bfff0();
      FUN_089c00c4(uVar12,0x20025c,*(int *)(param_1 + 0x130) + 0xb0,0,1);
      cVar2 = *(char *)(param_1 + 0xa7b);
    }
    iVar11 = 0;
    if (cVar2 == '\0') {
      puVar14 = (undefined4 *)(param_1 + 0x40);
      *puVar14 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar13 = *(int *)(param_1 + 0x130);
      fVar15 = 1.570796 - *(float *)(param_1 + 0x34);
      if (3.141593 < fVar15) {
        fVar15 = fVar15 - 6.283185;
      }
      else if (fVar15 <= -3.141593) {
        fVar15 = fVar15 + 6.283185;
      }
      local_38 = "fz_crystal01_break_60.gmo";
      auVar5 = vmidt_q();
      uVar18 = vmov_s(*puVar14);
      uVar19 = vmov_s(*(undefined4 *)(param_1 + 0x44));
      uVar20 = vmov_s(*(undefined4 *)(param_1 + 0x48));
      uVar12 = vmul_s(fVar15,in_V7C);
      auVar6 = vrot_q(uVar12,1,0,3,0);
      auVar3 = vidt_q();
      auVar7 = vrot_q(uVar12,2,0,1,0);
      auVar4 = vidt_q();
      auVar8._60_4_ = auVar5._60_4_;
      auVar8._56_4_ = auVar5._44_4_;
      auVar8._52_4_ = auVar5._28_4_;
      auVar8._48_4_ = auVar5._12_4_;
      auVar8._44_4_ = auVar5._56_4_;
      auVar8._40_4_ = uVar20;
      auVar8._36_4_ = auVar5._24_4_;
      auVar8._32_4_ = auVar5._8_4_;
      auVar8._28_4_ = auVar5._52_4_;
      auVar8._24_4_ = auVar5._36_4_;
      auVar8._20_4_ = uVar19;
      auVar8._16_4_ = auVar5._4_4_;
      auVar8._12_4_ = auVar5._48_4_;
      auVar8._8_4_ = auVar5._32_4_;
      auVar8._4_4_ = auVar5._16_4_;
      auVar8._0_4_ = uVar18;
      auVar5._48_16_ = auVar4;
      auVar5._44_4_ = auVar7._12_4_;
      auVar5._40_4_ = auVar7._8_4_;
      auVar5._36_4_ = auVar7._4_4_;
      auVar5._32_4_ = auVar7._0_4_;
      auVar5._28_4_ = auVar3._12_4_;
      auVar5._24_4_ = auVar3._8_4_;
      auVar5._20_4_ = auVar3._4_4_;
      auVar5._16_4_ = auVar3._0_4_;
      auVar5._12_4_ = auVar6._12_4_;
      auVar5._8_4_ = auVar6._8_4_;
      auVar5._4_4_ = auVar6._4_4_;
      auVar5._0_4_ = auVar6._0_4_;
      auVar5 = vmmul_q(auVar8,auVar5);
      *(int *)(iVar13 + 0x80) = auVar5._0_4_;
      *(int *)(iVar13 + 0x84) = auVar5._4_4_;
      *(int *)(iVar13 + 0x88) = auVar5._8_4_;
      *(int *)(iVar13 + 0x8c) = auVar5._12_4_;
      *(int *)(iVar13 + 0x90) = auVar5._16_4_;
      *(int *)(iVar13 + 0x94) = auVar5._20_4_;
      *(int *)(iVar13 + 0x98) = auVar5._24_4_;
      *(int *)(iVar13 + 0x9c) = auVar5._28_4_;
      *(int *)(iVar13 + 0xa0) = auVar5._32_4_;
      *(int *)(iVar13 + 0xa4) = auVar5._36_4_;
      *(int *)(iVar13 + 0xa8) = auVar5._40_4_;
      *(int *)(iVar13 + 0xac) = auVar5._44_4_;
      *(int *)(iVar13 + 0xb0) = auVar5._48_4_;
      *(int *)(iVar13 + 0xb4) = auVar5._52_4_;
      *(int *)(iVar13 + 0xb8) = auVar5._56_4_;
      *(int *)(iVar13 + 0xbc) = auVar5._60_4_;
      iVar13 = *(int *)(param_1 + 0x130);
      uVar12 = *(undefined4 *)(param_1 + 0x24);
      uVar18 = *(undefined4 *)(param_1 + 0x28);
      uVar19 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(iVar13 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar13 + 0xb4) = uVar12;
      *(undefined4 *)(iVar13 + 0xb8) = uVar18;
      *(undefined4 *)(iVar13 + 0xbc) = uVar19;
      iVar13 = FUN_089be148(DAT_08ac520c,"fz_crystal01_break_60.gmo");
      if (iVar13 != 0) {
        local_3c = 0;
        FUN_089d8634();
        uVar12 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar13 = FUN_089d7d74(0x1e0,0,0);
        FUN_089d816c(uVar12);
        FUN_089d866c();
        iVar11 = local_3c;
        if (iVar13 != 0) {
          FUN_088b534c(iVar13,local_38);
          iVar11 = iVar13;
        }
        FUN_088b5c90(uVar16,uVar17,iVar11,*(int *)(param_1 + 0x130) + 0x80,0);
      }
      *puVar14 = 0x3f19999a;
      *(undefined4 *)(param_1 + 0x44) = 0x3f19999a;
      *(undefined4 *)(param_1 + 0x48) = 0x3f19999a;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar13 = *(int *)(param_1 + 0x130);
      fVar15 = 1.570796 - *(float *)(param_1 + 0x34);
      if (3.141593 < fVar15) {
        fVar15 = fVar15 - 6.283185;
      }
      else if (fVar15 <= -3.141593) {
        fVar15 = fVar15 + 6.283185;
      }
      auVar5 = vmidt_q();
      uVar17 = vmov_s(*puVar14);
      uVar12 = vmov_s(*(undefined4 *)(param_1 + 0x44));
      uVar18 = vmov_s(*(undefined4 *)(param_1 + 0x48));
      uVar16 = vmul_s(fVar15,in_V7C);
      auVar6 = vrot_q(uVar16,1,0,3,0);
      auVar3 = vidt_q();
      auVar7 = vrot_q(uVar16,2,0,1,0);
      auVar4 = vidt_q();
      auVar9._60_4_ = auVar5._60_4_;
      auVar9._56_4_ = auVar5._44_4_;
      auVar9._52_4_ = auVar5._28_4_;
      auVar9._48_4_ = auVar5._12_4_;
      auVar9._44_4_ = auVar5._56_4_;
      auVar9._40_4_ = uVar18;
      auVar9._36_4_ = auVar5._24_4_;
      auVar9._32_4_ = auVar5._8_4_;
      auVar9._28_4_ = auVar5._52_4_;
      auVar9._24_4_ = auVar5._36_4_;
      auVar9._20_4_ = uVar12;
      auVar9._16_4_ = auVar5._4_4_;
      auVar9._12_4_ = auVar5._48_4_;
      auVar9._8_4_ = auVar5._32_4_;
      auVar9._4_4_ = auVar5._16_4_;
      auVar9._0_4_ = uVar17;
      auVar10._48_16_ = auVar4;
      auVar10._44_4_ = auVar7._12_4_;
      auVar10._40_4_ = auVar7._8_4_;
      auVar10._36_4_ = auVar7._4_4_;
      auVar10._32_4_ = auVar7._0_4_;
      auVar10._28_4_ = auVar3._12_4_;
      auVar10._24_4_ = auVar3._8_4_;
      auVar10._20_4_ = auVar3._4_4_;
      auVar10._16_4_ = auVar3._0_4_;
      auVar10._12_4_ = auVar6._12_4_;
      auVar10._8_4_ = auVar6._8_4_;
      auVar10._4_4_ = auVar6._4_4_;
      auVar10._0_4_ = auVar6._0_4_;
      auVar5 = vmmul_q(auVar9,auVar10);
      *(int *)(iVar13 + 0x80) = auVar5._0_4_;
      *(int *)(iVar13 + 0x84) = auVar5._4_4_;
      *(int *)(iVar13 + 0x88) = auVar5._8_4_;
      *(int *)(iVar13 + 0x8c) = auVar5._12_4_;
      *(int *)(iVar13 + 0x90) = auVar5._16_4_;
      *(int *)(iVar13 + 0x94) = auVar5._20_4_;
      *(int *)(iVar13 + 0x98) = auVar5._24_4_;
      *(int *)(iVar13 + 0x9c) = auVar5._28_4_;
      *(int *)(iVar13 + 0xa0) = auVar5._32_4_;
      *(int *)(iVar13 + 0xa4) = auVar5._36_4_;
      *(int *)(iVar13 + 0xa8) = auVar5._40_4_;
      *(int *)(iVar13 + 0xac) = auVar5._44_4_;
      *(int *)(iVar13 + 0xb0) = auVar5._48_4_;
      *(int *)(iVar13 + 0xb4) = auVar5._52_4_;
      *(int *)(iVar13 + 0xb8) = auVar5._56_4_;
      *(int *)(iVar13 + 0xbc) = auVar5._60_4_;
      iVar13 = *(int *)(param_1 + 0x130);
      uVar16 = *(undefined4 *)(param_1 + 0x24);
      uVar17 = *(undefined4 *)(param_1 + 0x28);
      uVar12 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(iVar13 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar13 + 0xb4) = uVar16;
      *(undefined4 *)(iVar13 + 0xb8) = uVar17;
      *(undefined4 *)(iVar13 + 0xbc) = uVar12;
    }
    else {
      iVar13 = FUN_089be148(DAT_08ac520c,"fz_crystal01_break_fbx.gmo");
      if (iVar13 != 0) {
        local_34 = 0;
        FUN_089d8634();
        uVar12 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar13 = FUN_089d7d74(0x1e0,0,0);
        FUN_089d816c(uVar12);
        FUN_089d866c();
        iVar11 = local_34;
        if (iVar13 != 0) {
          FUN_088b534c(iVar13,"fz_crystal01_break_fbx.gmo");
          iVar11 = iVar13;
        }
        FUN_088b5c90(uVar16,uVar17,iVar11,*(int *)(param_1 + 0x130) + 0x80,0);
      }
    }
    if (iVar11 == 0) {
      iVar11 = *(int *)(param_1 + 0x20c);
      goto LAB_08857110;
    }
    iVar13 = FUN_0884b268();
    FUN_089d8984(iVar11,iVar13 + 0x468);
    iVar13 = FUN_0884b248();
    if (iVar13 != 0) {
      uVar16 = FUN_0884b268();
      iVar13 = FUN_0884d2c0(uVar16);
      if (iVar13 == 0) {
        *(undefined4 *)(iVar11 + 0x1c0) = 0x2d;
      }
      else {
        *(undefined4 *)(iVar11 + 0x1c0) = 0xf;
      }
    }
    iVar13 = FUN_089df7ec(iVar11,"fz_crystal02_break");
    if (iVar13 != 0) {
      if (*(char *)(param_1 + 0xa42) == '\0') {
        bVar1 = *(byte *)(iVar13 + 3);
      }
      else {
        *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) & 0xf3;
        bVar1 = *(byte *)(iVar13 + 3);
      }
      *(byte *)(iVar13 + 3) = bVar1 & 0xfc;
      *(byte *)(iVar13 + 4) = *(byte *)(iVar13 + 4) & 0xfc | 2;
    }
    iVar13 = *(int *)(param_1 + 0x938) * 0x30;
    local_80 = *(undefined4 *)(&DAT_08a67160 + iVar13);
    uStack_7c = *(undefined4 *)(&DAT_08a67164 + iVar13);
    uStack_78 = *(undefined4 *)(&DAT_08a67168 + iVar13);
    uStack_74 = *(undefined4 *)(&DAT_08a6716c + iVar13);
    FUN_089e0460(iVar11,&local_80,0);
    iVar13 = FUN_0889da6c();
    if (iVar13 != 0) {
      *(undefined4 *)(iVar11 + 0x60) = 0x3d8f5c29;
      *(undefined4 *)(iVar11 + 100) = 0x3ca3d70a;
      *(undefined4 *)(iVar11 + 0x68) = 0x3e2e147b;
      *(undefined4 *)(iVar11 + 0x6c) = 0x3f800000;
      local_70 = 0x3e19999a;
      local_6c = 0x3e4ccccd;
      local_68 = 0x3e4ccccd;
      local_64 = 0x3f800000;
      *(undefined4 *)(iVar11 + 0x70) = 0x3e19999a;
      *(undefined4 *)(iVar11 + 0x74) = 0x3e4ccccd;
      *(undefined4 *)(iVar11 + 0x78) = 0x3e4ccccd;
      *(undefined4 *)(iVar11 + 0x7c) = 0x3f800000;
    }
  }
  iVar11 = *(int *)(param_1 + 0x20c);
LAB_08857110:
  *(undefined4 *)(iVar11 + 0x148) = 0;
  *(uint *)(iVar11 + 0x130) = *(uint *)(iVar11 + 0x130) | 1;
  *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) = *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 0x40
  ;
  *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) = *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 4;
  iVar11 = *(int *)(param_1 + 0x208);
  *(undefined4 *)(iVar11 + 0x148) = 0;
  *(uint *)(iVar11 + 0x130) = *(uint *)(iVar11 + 0x130) | 1;
  *(uint *)(*(int *)(param_1 + 0x208) + 0x130) = *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 0x40
  ;
  *(uint *)(*(int *)(param_1 + 0x208) + 0x130) = *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 4;
  iVar11 = FUN_0884b248();
  if (iVar11 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    uVar16 = FUN_0884b268();
    iVar11 = FUN_0884d2c0(uVar16);
    if (iVar11 == 0) {
      FUN_088634cc(param_1);
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - 5000.0;
      iVar11 = *(int *)(param_1 + 0x130);
      uVar16 = *(undefined4 *)(param_1 + 0x24);
      uVar17 = *(undefined4 *)(param_1 + 0x28);
      uVar12 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(iVar11 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar11 + 0xb4) = uVar16;
      *(undefined4 *)(iVar11 + 0xb8) = uVar17;
      *(undefined4 *)(iVar11 + 0xbc) = uVar12;
      (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  iVar11 = FUN_0884c3d0(1);
  if (iVar11 != 0) {
    *(undefined4 *)(param_1 + 0xa34) = 1;
  }
  return;
}

