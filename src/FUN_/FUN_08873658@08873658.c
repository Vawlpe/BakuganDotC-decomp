#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08873658(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  bool bVar5;
  int iVar6;
  undefined (*pauVar7) [12];
  float fVar8;
  undefined4 uVar9;
  
  bVar2 = false;
  bVar5 = true;
  bVar1 = false;
  pauVar7 = (undefined (*) [12])(param_1 + 0x80);
  if (((*(uint *)(param_1 + 0x16c) & 8) == 0) && (*(int *)(param_1 + 0x39c) == 0)) {
    *(undefined4 *)(param_1 + 0x3cc) = 0;
LAB_08873878:
    iVar6 = FUN_088608b0(param_1,0x103);
    if ((iVar6 == 0) || (iVar6 = FUN_08862c8c(param_1,0x102), iVar6 == 0)) {
      iVar6 = FUN_088608b0(param_1,0x102);
      if (iVar6 == 0) {
        bVar1 = true;
        FUN_08865608(param_1);
      }
      else {
        iVar6 = FUN_089df684(0x3f4ccccd,param_1);
        if (iVar6 != 0) {
          FUN_088608d8(0x3e4ccccd,param_1,0,1,0);
          (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                    (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
        }
        bVar2 = true;
      }
    }
    else {
      FUN_088608d8(0x3e4ccccd,param_1,0x102,0,0);
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      FUN_08865608(param_1);
      bVar2 = true;
    }
  }
  else {
    iVar6 = FUN_088886fc(param_1 + 0x434);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x3cc) = 0;
      goto LAB_08873878;
    }
    if (*(int *)(param_1 + 0x3b0) == 0) {
      *(undefined4 *)(param_1 + 0x3cc) = 0;
      goto LAB_08873878;
    }
    iVar6 = FUN_088602ec(param_1,1);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x3cc) = 0;
      goto LAB_08873878;
    }
    bVar2 = (*(uint *)(param_1 + 0x16c) & 8) != 0;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x200000;
    FUN_0885ff24(param_1,7,0);
    iVar6 = *(int *)(param_1 + 0x3cc);
    *(undefined4 *)(param_1 + 0x4d8) = 0x41700000;
    if (iVar6 < 1) {
      if (-1 < iVar6) {
        iVar6 = FUN_088608b0(param_1,0x101);
        if (iVar6 == 0) {
          iVar6 = FUN_08862c8c(param_1,0x101);
          if (iVar6 == 0) {
            FUN_088608d8(0x3e4ccccd,param_1,0x103,1,0);
            *(undefined4 *)(param_1 + 0x3cc) = 1;
            FUN_08865520(param_1);
          }
          else {
            iVar6 = FUN_088608d8(0x3e4ccccd,param_1,0x101,0,0);
            if (iVar6 != 0) {
              (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                        (0x3fc00000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
              FUN_08865520(param_1);
            }
          }
        }
        else {
          iVar6 = FUN_089df684(0x3f4ccccd,param_1);
          if (iVar6 != 0) {
            FUN_088608d8(0x3e4ccccd,param_1,0x103,1,0);
            (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                      (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
            *(undefined4 *)(param_1 + 0x3cc) = 1;
          }
        }
        bVar5 = false;
      }
    }
    else if ((iVar6 < 2) && (*(float *)(*(int *)(param_1 + 0x130) + 0x24) == 0.0)) {
      bVar5 = false;
    }
  }
  if ((!bVar2) || (!bVar5)) {
    iVar6 = FUN_08871794(param_1,0);
    bVar1 = iVar6 == 0;
    if ((*(int *)(param_1 + 0x140) != 1) && (*(int *)(param_1 + 0x140) != 0)) {
      FUN_08865608(param_1);
    }
  }
  if ((bVar1) && (!bVar2)) {
    FUN_088608d8(0x3e4ccccd,param_1,0,1,0);
    (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
              (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  }
  FUN_088718a4(param_1);
  if ((*(uint *)(param_1 + 0x144) & 0x200000) == 0) {
    auVar3 = vscl_t(*pauVar7,0x3f333333);
    *(int *)*pauVar7 = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
  }
  else {
    auVar3 = vscl_t(*pauVar7,0x3f59999a);
    *(int *)*pauVar7 = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    iVar6 = FUN_08860344(param_1);
    uVar9 = vzero_s();
    auVar3._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar3._4_4_ = uVar9;
    auVar3._0_4_ = *(undefined4 *)*pauVar7;
    auVar4._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar4._4_4_ = uVar9;
    auVar4._0_4_ = *(undefined4 *)*pauVar7;
    uVar9 = vdot_t(auVar3,auVar4);
    fVar8 = (float)vsqrt_s(uVar9);
    if (iVar6 != 0) {
      uVar9 = atan2f(*(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28),
                     *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20));
      FUN_08862608(uVar9,fVar8 * 0.01,0x3f4ccccd,param_1);
    }
    *(int *)(param_1 + 0x3d4) = *(int *)(param_1 + 0x3d4) + 1;
    if (8.0 < fVar8) {
      uVar9 = 3;
      if ((*(uint *)(param_1 + 0x3d4) & 1) != 0) {
        uVar9 = 2;
      }
      FUN_08864e14(0x42200000,0x40000000,param_1,uVar9);
      iVar6 = *(int *)(param_1 + 0x3b0);
      goto LAB_08873b44;
    }
  }
  iVar6 = *(int *)(param_1 + 0x3b0);
LAB_08873b44:
  *(int *)(param_1 + 0x3b0) = iVar6 + 1;
  return;
}

