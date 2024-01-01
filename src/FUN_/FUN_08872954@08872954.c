#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08872954(int param_1)

{
  undefined auVar1 [12];
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined (*pauVar5) [12];
  undefined4 uVar6;
  float fVar7;
  
  uVar4 = *(uint *)(param_1 + 0x144);
  *(uint *)(param_1 + 0x144) = uVar4 | 0x4000000;
  *(int *)(param_1 + 0x3d4) = *(int *)(param_1 + 0x3d4) + 1;
  bVar2 = false;
  pauVar5 = (undefined (*) [12])(param_1 + 0x80);
  if ((uVar4 & 0x100000) == 0) {
    iVar3 = FUN_089df684(0x3f59999a,param_1);
    if (iVar3 != 0) {
      if ((*(uint *)(param_1 + 0x148) & 0x800) == 0) {
        uVar4 = *(uint *)(param_1 + 0x148);
      }
      else {
        if (*(int *)(param_1 + 0x3d0) < 2) {
          *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + 1;
          FUN_088608d8(0x3e4ccccd,param_1,0xff,1,0);
          goto LAB_08872b70;
        }
        uVar4 = *(uint *)(param_1 + 0x148);
      }
      bVar2 = true;
      *(uint *)(param_1 + 0x148) = uVar4 & 0xfffff7ff;
    }
  }
  else {
    iVar3 = FUN_088608b0(param_1,0xff);
    if (iVar3 == 0) {
      iVar3 = FUN_089df684(0x3f666666,param_1);
      if (iVar3 != 0) {
        FUN_088608d8(0x3e4ccccd,param_1,0xff,1,0);
        iVar3 = FUN_0885fc80(param_1);
        if (iVar3 != 0) {
          FUN_08862b64(param_1,0x2001f5,0,0);
        }
        if ((*(uint *)(param_1 + 0x148) & 1) == 0) {
          uVar6 = FUN_088243d8(DAT_08ac5c70,0x44,param_1 + 0x250);
          FUN_08823804(uVar6);
        }
        else {
          uVar6 = FUN_088243d8(DAT_08ac5c70,0x45,param_1 + 0x250);
          FUN_08823804(uVar6);
        }
      }
    }
    else {
      *(int *)(param_1 + 0x578) = *(int *)(param_1 + 0x3cc);
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + -1;
      if ((*(uint *)(param_1 + 0x16c) & 0x8000) != 0) {
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + -0x1e;
      }
      if (*(int *)(param_1 + 0x3cc) < 1) {
        FUN_088659b8(param_1,1);
        bVar2 = true;
      }
    }
    iVar3 = FUN_088602ec(param_1,1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x18);
    }
  }
LAB_08872b70:
  iVar3 = FUN_088718a4(param_1);
  if (((iVar3 == 0) && (iVar3 = FUN_088602ec(param_1,1), iVar3 == 0)) &&
     (fVar7 = (float)vdot_t(*pauVar5,*pauVar5), 256.0 < fVar7)) {
    uVar6 = 3;
    if ((*(uint *)(param_1 + 0x3d4) & 1) != 0) {
      uVar6 = 2;
    }
    FUN_08864e14(0x42200000,0x40000000,param_1,uVar6);
  }
  if (bVar2) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffefffff;
    FUN_08871308(param_1);
    iVar3 = FUN_08871794(param_1,0);
    if (iVar3 == 0) {
      FUN_088706f0(param_1,0,0);
    }
  }
  uVar6 = FUN_08863b94(0x3f59999a,param_1);
  auVar1 = vscl_t(*pauVar5,uVar6);
  *(int *)*pauVar5 = auVar1._0_4_;
  *(int *)(param_1 + 0x88) = auVar1._8_4_;
  return;
}

