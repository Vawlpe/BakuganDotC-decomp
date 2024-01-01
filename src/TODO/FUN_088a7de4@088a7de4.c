#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a7de4(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  code *pcVar11;
  float fVar12;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_088ac694();
  FUN_088a7860(param_1);
  if (*(char *)(param_1 + 0x281) == '\0') {
    iVar8 = *(int *)(param_1 + 0x328);
  }
  else {
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      if (*(int *)(param_1 + 800) != 0) {
        *(undefined *)(*(int *)(param_1 + 800) + 0x4c1) = 1;
      }
      FUN_088247dc(DAT_08abd5b0,0xffffffff,param_1,2);
      piVar7 = (int *)FUN_088660c8();
      if (piVar7 == (int *)0x0) {
        iVar8 = *(int *)(param_1 + 0x154);
      }
      else {
        iVar8 = *piVar7;
        if (iVar8 == 0) {
          iVar8 = *(int *)(param_1 + 0x154);
        }
        else {
          iVar10 = *(int *)(iVar8 + 0x14);
          while( true ) {
            iVar10 = (**(code **)(iVar10 + 0x74))(iVar8 + *(short *)(iVar10 + 0x70));
            if (iVar10 == 0) {
              FUN_088865ac(iVar8 + 0x434,*(int *)(param_1 + 0x328) + 0xb);
              iVar8 = *(int *)(iVar8 + 4);
            }
            else {
              iVar8 = *(int *)(iVar8 + 4);
            }
            if (iVar8 == 0) break;
            iVar10 = *(int *)(iVar8 + 0x14);
          }
          iVar8 = *(int *)(param_1 + 0x154);
        }
      }
      if (iVar8 == 0) {
        iVar8 = *(int *)(param_1 + 0x130);
      }
      else {
        *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
        iVar8 = *(int *)(param_1 + 0x130);
      }
      if (*(int *)(iVar8 + 0x14) != 0) {
        FUN_08a1473c(*(undefined4 *)(*(int *)(param_1 + 0x130) + 0x14),
                     *(undefined2 *)(*(int *)(param_1 + 0x130) + 0x20));
      }
      *(undefined *)(param_1 + 0x3a0) = 1;
      return;
    }
    iVar8 = *(int *)(param_1 + 0x328);
  }
  if (iVar8 < 2) {
    if (iVar8 < 1) {
      iVar8 = *(int *)(param_1 + 0x3a4);
    }
    else {
LAB_088a7f38:
      FUN_089df8a4(param_1);
      iVar8 = *(int *)(param_1 + 0x3a4);
    }
  }
  else {
    if (iVar8 == 5) goto LAB_088a7f38;
    iVar8 = *(int *)(param_1 + 0x3a4);
  }
  if (iVar8 < 8) {
    if (iVar8 < 7) goto LAB_088a7fa4;
    FUN_089deeb0(param_1,&local_60,8);
    *(undefined4 *)(param_1 + 0x350) = local_60;
    *(undefined4 *)(param_1 + 0x354) = uStack_5c;
    *(undefined4 *)(param_1 + 0x358) = uStack_58;
    *(undefined4 *)(param_1 + 0x35c) = uStack_54;
    fVar12 = *(float *)(param_1 + 0x3bc);
  }
  else {
    if (iVar8 < 9) {
      FUN_089deeb0(param_1,&local_50,1);
      *(undefined4 *)(param_1 + 0x350) = local_50;
      *(undefined4 *)(param_1 + 0x354) = uStack_4c;
      *(undefined4 *)(param_1 + 0x358) = uStack_48;
      *(undefined4 *)(param_1 + 0x35c) = uStack_44;
    }
LAB_088a7fa4:
    fVar12 = *(float *)(param_1 + 0x3bc);
  }
  fVar12 = fVar12 + (fVar12 * fVar12 * -0.002 - 0.02);
  *(float *)(param_1 + 0x3bc) = fVar12;
  if (fVar12 <= 0.0) {
    *(float *)(param_1 + 0x3bc) = *(float *)(param_1 + 0x3bc) + 16.0;
  }
  fVar12 = *(float *)(param_1 + 0x3c0) + 0.423;
  *(float *)(param_1 + 0x3c0) = fVar12;
  if (1.0 < fVar12) {
    *(float *)(param_1 + 0x3c0) = *(float *)(param_1 + 0x3c0) - 1.0;
  }
  switch(*(undefined4 *)(param_1 + 0x3b4)) {
  case 1:
    fVar12 = *(float *)(param_1 + 0x3b8) - 0.1;
    *(float *)(param_1 + 0x3b8) = fVar12;
    if (fVar12 < 0.1) {
      *(int *)(param_1 + 0x3b4) = *(int *)(param_1 + 0x3b4) + 1;
    }
    break;
  case 2:
    fVar12 = *(float *)(param_1 + 0x3b8) + 0.1;
    *(float *)(param_1 + 0x3b8) = fVar12;
    if (0.7 < fVar12) {
      *(undefined4 *)(param_1 + 0x3b8) = 0x3f333333;
      *(undefined4 *)(param_1 + 0x3b4) = 0;
    }
    break;
  case 3:
    *(float *)(param_1 + 0x3b8) = *(float *)(param_1 + 0x3b8) - 0.04;
    iVar8 = *(int *)(param_1 + 0x130);
    local_40 = 0x3f5eb852;
    local_3c = 0x3f800000;
    local_38 = 0x3f5eb852;
    local_34 = 0;
    auVar1 = vscl_q(*(undefined (*) [16])(iVar8 + 0x80),0x3f5eb852);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar8 + 0x90),0x3f800000);
    auVar3 = vscl_q(*(undefined (*) [16])(iVar8 + 0xa0),0x3f5eb852);
    *(int *)*(undefined (*) [16])(iVar8 + 0x80) = auVar1._0_4_;
    *(int *)(iVar8 + 0x84) = auVar1._4_4_;
    *(int *)(iVar8 + 0x88) = auVar1._8_4_;
    *(int *)(iVar8 + 0x8c) = auVar1._12_4_;
    *(int *)(iVar8 + 0x90) = auVar2._0_4_;
    *(int *)(iVar8 + 0x94) = auVar2._4_4_;
    *(int *)(iVar8 + 0x98) = auVar2._8_4_;
    *(int *)(iVar8 + 0x9c) = auVar2._12_4_;
    *(int *)(iVar8 + 0xa0) = auVar3._0_4_;
    *(int *)(iVar8 + 0xa4) = auVar3._4_4_;
    *(int *)(iVar8 + 0xa8) = auVar3._8_4_;
    *(int *)(iVar8 + 0xac) = auVar3._12_4_;
    if (0.0 <= *(float *)(param_1 + 0x3b8)) {
      iVar8 = *(int *)(param_1 + 0x39c);
      goto LAB_088a8228;
    }
    FUN_08824658(DAT_08ac5c70,0xffffffff,*(int *)(param_1 + 0x130) + 0xb0);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x350);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x360);
    FUN_08824658(DAT_08ac5c70,0xffffffff,param_1 + 0x370);
    FUN_088246f4(DAT_08ac5c70,0xffffffff,param_1);
    FUN_088246f4(DAT_08abd5b0,0xffffffff,param_1);
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    *(int *)(param_1 + 0x3b4) = *(int *)(param_1 + 0x3b4) + 1;
  case 4:
    iVar8 = *(int *)(param_1 + 0x39c);
    goto LAB_088a8228;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    iVar8 = *(int *)(param_1 + 0x3b4);
    goto LAB_088a81c8;
  case 0x14:
    goto LAB_088a81f4;
  default:
    iVar8 = *(int *)(param_1 + 0x3b4);
LAB_088a81c8:
    *(int *)(param_1 + 0x3b4) = iVar8 + 1;
LAB_088a81f4:
    iVar8 = *(int *)(param_1 + 0x130);
    *(undefined4 *)(iVar8 + 0xa8) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x94) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x80) = 0x3f800000;
    iVar8 = *(int *)(param_1 + 0x130);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar8 + 0xb4) = uVar4;
    *(undefined4 *)(iVar8 + 0xb8) = uVar5;
    *(undefined4 *)(iVar8 + 0xbc) = uVar6;
    *(undefined4 *)(param_1 + 0x3b8) = 0x3f333333;
    *(undefined4 *)(param_1 + 0x3b4) = 0;
  }
  iVar8 = *(int *)(param_1 + 0x39c);
LAB_088a8228:
  if ((-1 < iVar8) && (*(uint *)(param_1 + 0x39c) < 7)) {
    iVar10 = *(int *)(param_1 + 0x39c) * 8;
    iVar8 = param_1 + *(short *)(&DAT_08a83f70 + iVar10);
    if (*(short *)(&DAT_08a83f72 + iVar10) == 0) {
      pcVar11 = (code *)(&PTR_LAB_08a83f74)[*(int *)(param_1 + 0x39c) * 2];
    }
    else {
      psVar9 = (short *)(*(int *)((&PTR_LAB_08a83f74)[*(int *)(param_1 + 0x39c) * 2] + iVar8) +
                        *(short *)(&DAT_08a83f72 + *(int *)(param_1 + 0x39c) * 8) * 8);
      pcVar11 = *(code **)(psVar9 + 2);
      iVar8 = iVar8 + *psVar9;
    }
    (*pcVar11)(iVar8);
  }
  return;
}

