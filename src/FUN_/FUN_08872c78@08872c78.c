#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08872c78(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined (*pauVar5) [12];
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  iVar3 = FUN_08862780(param_1,0);
  FUN_0885ff24(param_1,2,0);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x800000;
  pauVar5 = (undefined (*) [12])(param_1 + 0x80);
  if ((*(uint *)(param_1 + 0x16c) & 1) == 0) {
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) * 0.9;
    auVar1 = vscl_t(*pauVar5,0x3f666666);
    *(int *)*pauVar5 = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    FUN_088608d8(0x3e4ccccd,param_1,0xd,1,0);
  }
  else {
    fVar7 = *(float *)(param_1 + 0x174);
    fVar6 = (float)FUN_08865d80(param_1);
    *(float *)(param_1 + 0x174) = fVar7 + (fVar6 - *(float *)(param_1 + 0x174)) * 0.2;
    if (iVar3 == 0) {
      FUN_088608d8(0x3e4ccccd,param_1,0xe,1,0);
      fVar7 = (float)FUN_08862608(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),0x3e99999a,0,
                                  param_1);
      fVar6 = ABS(fVar7) + 0.9424779;
      if (3.141593 < ABS(fVar7) + 0.9424779) {
        fVar6 = 3.141593;
      }
      fVar6 = (3.141593 - fVar6) * 0.4774648;
      if (1.0 < fVar6) goto LAB_08872dc8;
      iVar3 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar3 = FUN_08862ca8(param_1);
      FUN_088608d8(0x3e4ccccd,param_1,iVar3 + 0xe,1,0);
LAB_08872dc8:
      fVar6 = 1.0;
      iVar3 = *(int *)(param_1 + 0x14);
    }
    (**(code **)(iVar3 + 0x34))(0x3fa66666,param_1 + *(short *)(iVar3 + 0x30));
    uVar8 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),in_V7C);
    auVar2 = vrot_q(uVar8,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,*(float *)(param_1 + 0x174) * fVar6);
    *(int *)*pauVar5 = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
  }
  iVar3 = FUN_0886002c(param_1);
  if (iVar3 == 0) {
    if ((*(uint *)(param_1 + 0x16c) & 4) == 0) {
      uVar4 = *(uint *)(param_1 + 0x16c);
    }
    else {
      iVar3 = FUN_088886fc(param_1 + 0x434);
      if (iVar3 != 0) {
        FUN_088706f0(param_1,2,0);
        iVar3 = *(int *)(param_1 + 0x170);
        goto LAB_08872fbc;
      }
      uVar4 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar4 & 0x200) == 0) || (iVar3 = FUN_08888170(param_1 + 0x434), iVar3 != 0)) {
      FUN_088706f0(param_1,0x17,0);
      iVar3 = *(int *)(param_1 + 0x170);
    }
    else {
      if (*(float *)(param_1 + 0x84) < 0.0) {
        fVar6 = (float)FUN_08865dc8(param_1);
      }
      else {
        fVar6 = (float)FUN_08865da4(param_1);
      }
      fVar6 = *(float *)(param_1 + 0x84) + fVar6;
      fVar7 = (float)FUN_08865dec(param_1);
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      *(float *)(param_1 + 0x84) = fVar7;
      if ((0.0 < fVar7) &&
         (fVar6 = *(float *)(param_1 + 0x24) -
                  (*(float *)(*(int *)(param_1 + 0x4bc) + 0x3c) + *(float *)(param_1 + 0x1e4)),
         -100.0 < fVar6)) {
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * fVar6 * -0.01;
      }
      iVar3 = *(int *)(param_1 + 0x170);
    }
  }
  else {
    FUN_088715b0(param_1,0);
    iVar3 = *(int *)(param_1 + 0x170);
  }
LAB_08872fbc:
  if (iVar3 != 0) {
    FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xd,1);
  }
  return;
}

