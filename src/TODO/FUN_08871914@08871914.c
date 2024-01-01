#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08871914(int param_1)

{
  bool bVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  
  iVar4 = FUN_08862780(param_1,0);
  if (((((*(uint *)(param_1 + 0x16c) & 8) == 0) && (*(int *)(param_1 + 0x39c) == 0)) ||
      (iVar5 = FUN_088886fc(param_1 + 0x434), iVar5 == 0)) ||
     ((*(int *)(param_1 + 0x3b0) == 0 || (iVar5 = FUN_088602ec(param_1,1), iVar5 != 0)))) {
    FUN_08865608(param_1);
    uVar6 = *(uint *)(param_1 + 0x16c);
  }
  else {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x200000;
    FUN_0885ff24(param_1,7,0);
    *(undefined4 *)(param_1 + 0x4d8) = 0x41700000;
    FUN_08865520(param_1);
    uVar6 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar6 & 1) == 0) {
    FUN_088706f0(param_1,0,0);
  }
  else {
    if (iVar4 == 0) {
      FUN_088608d8(0x3e4ccccd,param_1,1,1,0);
      fVar7 = (float)FUN_08862608(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),0x3e99999a,0,
                                  param_1);
      bVar1 = (*(uint *)(param_1 + 0x144) & 0x200000) != 0;
      iVar4 = *(int *)(param_1 + 0x14);
      fVar10 = ABS(fVar7) + 0.9424779;
      if (3.141593 < ABS(fVar7) + 0.9424779) {
        fVar10 = 3.141593;
      }
      fVar10 = (3.141593 - fVar10) * 0.4774648;
      if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
    }
    else {
      iVar4 = FUN_08862ca8(param_1);
      iVar5 = FUN_088608b0(param_1,iVar4 + 1);
      if (iVar5 == 0) {
        fVar7 = (float)FUN_089df49c(param_1);
        FUN_089df400(0x3e4ccccd,param_1,*(undefined2 *)(*(int *)(param_1 + 0x164) + (iVar4 + 1) * 2)
                     ,1);
        fVar10 = (float)FUN_089df51c(param_1);
        if (fVar7 <= fVar10) {
          fVar10 = fVar7;
        }
        FUN_089df450(fVar10,param_1);
        uVar6 = *(uint *)(param_1 + 0x144);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x144);
      }
      fVar10 = 1.0;
      iVar4 = *(int *)(param_1 + 0x14);
      bVar1 = (uVar6 & 0x200000) != 0;
    }
    if (bVar1) {
      (**(code **)(iVar4 + 0x34))(0x3f000000,param_1 + *(short *)(iVar4 + 0x30));
      fVar9 = *(float *)(param_1 + 0x174);
      fVar7 = (float)FUN_089e10c0();
      fVar8 = (float)FUN_08865a64(param_1);
      iVar4 = *(int *)(param_1 + 0x168);
      fVar9 = fVar9 + (fVar8 * 0.5 - *(float *)(param_1 + 0x174)) * 0.2 * fVar7;
      *(float *)(param_1 + 0x174) = fVar9;
    }
    else {
      bVar1 = false;
      if (*(char *)(param_1 + 0x391) != '\0') {
        iVar5 = (**(code **)(iVar4 + 0xa4))(param_1 + *(short *)(iVar4 + 0xa0));
        iVar4 = *(int *)(param_1 + 0x14);
        if (iVar5 != 2) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        (**(code **)(iVar4 + 0x34))(0x3f333333,param_1 + *(short *)(iVar4 + 0x30));
        fVar9 = *(float *)(param_1 + 0x174);
      }
      else {
        (**(code **)(iVar4 + 0x34))(0x3f800000,param_1 + *(short *)(iVar4 + 0x30));
        fVar9 = *(float *)(param_1 + 0x174);
      }
      fVar7 = (float)FUN_089e10c0();
      fVar8 = (float)FUN_08865a64(param_1);
      iVar4 = *(int *)(param_1 + 0x168);
      fVar9 = fVar9 + (fVar8 - *(float *)(param_1 + 0x174)) * 0.2 * fVar7;
      *(float *)(param_1 + 0x174) = fVar9;
    }
    uVar11 = vmul_s(*(undefined4 *)(iVar4 + 4),in_V7C);
    auVar3 = vrot_q(uVar11,1,0,2,0);
    auVar2 = vscl_t(auVar3._0_12_,fVar9 * fVar10);
    *(int *)(param_1 + 0x80) = auVar2._0_4_;
    *(int *)(param_1 + 0x88) = auVar2._8_4_;
  }
  FUN_088718a4(param_1);
  iVar4 = FUN_0886002c(param_1);
  if (iVar4 == 0) {
    if ((*(uint *)(param_1 + 0x16c) & 2) == 0) {
      uVar6 = *(uint *)(param_1 + 0x16c);
    }
    else {
      iVar4 = FUN_088886fc(param_1 + 0x434);
      if (iVar4 != 0) {
        FUN_088706f0(param_1,0xc,0);
        iVar4 = *(int *)(param_1 + 0x140);
        goto LAB_08871d44;
      }
      uVar6 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar6 & 4) == 0) || (iVar4 = FUN_088886fc(param_1 + 0x434), iVar4 == 0)) {
      iVar4 = FUN_088602ec(param_1,1);
      if (iVar4 != 0) {
        FUN_088706f0(param_1,0x17,0);
      }
      iVar4 = *(int *)(param_1 + 0x140);
    }
    else {
      FUN_088706f0(param_1,2,0);
      iVar4 = *(int *)(param_1 + 0x140);
    }
  }
  else {
    FUN_088715b0(param_1,0);
    iVar4 = *(int *)(param_1 + 0x140);
  }
LAB_08871d44:
  if (iVar4 != 1) {
    uVar11 = FUN_08865a64(param_1);
    *(undefined4 *)(param_1 + 0x174) = uVar11;
    iVar4 = *(int *)(param_1 + 0x140);
  }
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x3b0);
      goto LAB_08871d94;
    }
    FUN_08865608(param_1);
  }
  iVar4 = *(int *)(param_1 + 0x3b0);
LAB_08871d94:
  *(int *)(param_1 + 0x3b0) = iVar4 + 1;
  return;
}

