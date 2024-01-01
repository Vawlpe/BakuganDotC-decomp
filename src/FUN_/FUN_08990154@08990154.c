#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08990154(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0xe80) = 0;
  if ((*(char *)(param_1 + 0xe7c) < '\x01') && (-1 < *(char *)(param_1 + 0xe7c))) {
    FUN_089a535c(param_1 + 0x164);
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc) = 0x3f800000;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(undefined4 *)(iVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar6 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar6 + 200) = 0x3e99999a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x68) =
         *(undefined4 *)(param_1 + 0xb54);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xe78) * 4) + 0x60)
    ;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xe78) * 4) + 100);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x110),param_1 + 0xb14);
    iVar8 = 0;
    iVar9 = 0;
    iVar6 = param_1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x68) =
           *(undefined4 *)(iVar6 + 0xb3c);
      if (iVar8 == *(char *)(param_1 + 0xe78)) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        *(undefined4 *)(iVar7 + 0xc0) = 0x3e99999a;
        *(undefined4 *)(iVar7 + 0xc4) = 0x3e99999a;
        *(undefined4 *)(iVar7 + 200) = 0x3e99999a;
        *(undefined4 *)(iVar7 + 0xcc) = 0x3f800000;
        FUN_0898c794(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),1);
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        *(undefined4 *)(iVar7 + 0xc0) = 0;
        *(undefined4 *)(iVar7 + 0xc4) = 0;
        *(undefined4 *)(iVar7 + 200) = 0;
        *(undefined4 *)(iVar7 + 0xcc) = 0x3f800000;
        FUN_0898c794(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),0);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 4;
      iVar6 = iVar6 + 4;
    } while (iVar8 < 6);
    iVar8 = 0x19;
    iVar9 = 100;
    iVar6 = param_1 + 100;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
      iVar8 = iVar8 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x68) =
           *(undefined4 *)(iVar6 + 0xb3c);
      iVar9 = iVar9 + 4;
      iVar6 = iVar6 + 4;
    } while (iVar8 < 0x1f);
    iVar8 = 0;
    iVar6 = param_1;
    do {
      if (*(int *)(iVar6 + 0x1208) != 0) {
        iVar9 = *(int *)(*(int *)(iVar6 + 0x1208) + 0x130);
        uVar11 = vmul_s(0x4048f5c3,in_V7C);
        auVar4 = vrot_q(uVar11,1,0,3,0);
        auVar1 = vidt_q();
        auVar5 = vrot_q(uVar11,2,0,1,0);
        auVar2 = vidt_q();
        *(int *)(iVar9 + 0x80) = auVar4._0_4_;
        *(int *)(iVar9 + 0x84) = auVar4._4_4_;
        *(int *)(iVar9 + 0x88) = auVar4._8_4_;
        *(int *)(iVar9 + 0x8c) = auVar4._12_4_;
        *(int *)(iVar9 + 0x90) = auVar1._0_4_;
        *(int *)(iVar9 + 0x94) = auVar1._4_4_;
        *(int *)(iVar9 + 0x98) = auVar1._8_4_;
        *(int *)(iVar9 + 0x9c) = auVar1._12_4_;
        *(int *)(iVar9 + 0xa0) = auVar5._0_4_;
        *(int *)(iVar9 + 0xa4) = auVar5._4_4_;
        *(int *)(iVar9 + 0xa8) = auVar5._8_4_;
        *(int *)(iVar9 + 0xac) = auVar5._12_4_;
        *(int *)(iVar9 + 0xb0) = auVar2._0_4_;
        *(int *)(iVar9 + 0xb4) = auVar2._4_4_;
        *(int *)(iVar9 + 0xb8) = auVar2._8_4_;
        *(int *)(iVar9 + 0xbc) = auVar2._12_4_;
        iVar9 = *(int *)(*(int *)(iVar6 + 0x1208) + 0x130);
        uVar11 = vmul_s(0x80000000,in_V7C);
        auVar1 = vidt_q();
        auVar4 = vrot_q(uVar11,0,1,2,0);
        auVar5 = vrot_q(uVar11,0,3,1,0);
        auVar2 = vidt_q();
        auVar3._48_16_ = auVar2;
        auVar3._44_4_ = auVar5._12_4_;
        auVar3._40_4_ = auVar5._8_4_;
        auVar3._36_4_ = auVar5._4_4_;
        auVar3._32_4_ = auVar5._0_4_;
        auVar3._28_4_ = auVar4._12_4_;
        auVar3._24_4_ = auVar4._8_4_;
        auVar3._20_4_ = auVar4._4_4_;
        auVar3._16_4_ = auVar4._0_4_;
        auVar3._12_4_ = auVar1._12_4_;
        auVar3._8_4_ = auVar1._8_4_;
        auVar3._4_4_ = auVar1._4_4_;
        auVar3._0_4_ = auVar1._0_4_;
        auVar3 = vmmul_q(*(undefined (*) [64])(iVar9 + 0x80),auVar3);
        *(int *)*(undefined (*) [64])(iVar9 + 0x80) = auVar3._0_4_;
        *(int *)(iVar9 + 0x84) = auVar3._4_4_;
        *(int *)(iVar9 + 0x88) = auVar3._8_4_;
        *(int *)(iVar9 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar9 + 0x90) = auVar3._16_4_;
        *(int *)(iVar9 + 0x94) = auVar3._20_4_;
        *(int *)(iVar9 + 0x98) = auVar3._24_4_;
        *(int *)(iVar9 + 0x9c) = auVar3._28_4_;
        *(int *)(iVar9 + 0xa0) = auVar3._32_4_;
        *(int *)(iVar9 + 0xa4) = auVar3._36_4_;
        *(int *)(iVar9 + 0xa8) = auVar3._40_4_;
        *(int *)(iVar9 + 0xac) = auVar3._44_4_;
        *(int *)(iVar9 + 0xb0) = auVar3._48_4_;
        *(int *)(iVar9 + 0xb4) = auVar3._52_4_;
        *(int *)(iVar9 + 0xb8) = auVar3._56_4_;
        *(int *)(iVar9 + 0xbc) = auVar3._60_4_;
        uVar11 = *(undefined4 *)(param_1 + 0x12ac);
        *(undefined4 *)(iVar6 + 0x1294) = uVar11;
        iVar9 = *(int *)(*(int *)(iVar6 + 0x1208) + 0x130);
        auVar1 = vscl_q(*(undefined (*) [16])(iVar9 + 0x80),uVar11);
        auVar2 = vscl_q(*(undefined (*) [16])(iVar9 + 0x90),uVar11);
        auVar4 = vscl_q(*(undefined (*) [16])(iVar9 + 0xa0),uVar11);
        *(int *)*(undefined (*) [16])(iVar9 + 0x80) = auVar1._0_4_;
        *(int *)(iVar9 + 0x84) = auVar1._4_4_;
        *(int *)(iVar9 + 0x88) = auVar1._8_4_;
        *(int *)(iVar9 + 0x8c) = auVar1._12_4_;
        *(int *)(iVar9 + 0x90) = auVar2._0_4_;
        *(int *)(iVar9 + 0x94) = auVar2._4_4_;
        *(int *)(iVar9 + 0x98) = auVar2._8_4_;
        *(int *)(iVar9 + 0x9c) = auVar2._12_4_;
        *(int *)(iVar9 + 0xa0) = auVar4._0_4_;
        *(int *)(iVar9 + 0xa4) = auVar4._4_4_;
        *(int *)(iVar9 + 0xa8) = auVar4._8_4_;
        *(int *)(iVar9 + 0xac) = auVar4._12_4_;
        uVar11 = vmul_s(*(float *)(param_1 + 0x125c) * 3.141593,in_V7C);
        fVar10 = (float)vcos_s(uVar11);
        *(float *)(*(int *)(iVar6 + 0x1208) + 0x24) =
             *(float *)(param_1 + 0x1260) + (1.0 - fVar10) * 0.5 * 0.2;
        iVar9 = *(int *)(iVar6 + 0x1208);
        iVar9 = *(int *)(iVar9 + 0x130);
        *(undefined4 *)(iVar9 + 0xb0) = *(undefined4 *)(iVar9 + 0x20);
        *(undefined4 *)(iVar9 + 0xb4) = *(undefined4 *)(iVar9 + 0x24);
        *(undefined4 *)(iVar9 + 0xb8) = *(undefined4 *)(iVar9 + 0x28);
        *(undefined4 *)(iVar9 + 0xbc) = *(undefined4 *)(iVar9 + 0x2c);
        *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x1208) + 0x130) + 0xbc) = 0x3f800000;
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar8 < 6);
    FUN_0898d9e4(param_1,1);
  }
  return;
}

