#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881dc20(float param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  bool bVar3;
  undefined auVar4 [12];
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined (*pauVar8) [12];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7D;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  iVar6 = DAT_08b00794;
  puVar7 = (undefined4 *)(param_3 + 0x60);
  local_60 = in_V72;
  local_5c = in_V76;
  local_58 = in_V7A;
  if ((((param_6 < 5) && (local_60 = param_2, param_6 != 1)) &&
      (local_60 = in_V72, local_5c = param_2, param_6 != 2)) &&
     ((local_5c = in_V76, local_58 = param_2, param_6 != 3 && (local_58 = in_V7A, param_6 == 4)))) {
    pauVar8 = (undefined (*) [12])(param_3 + 0x90);
    uVar9 = vdot_t(*pauVar8,*pauVar8);
    uVar10 = vcmp_s(8,uVar9,*(undefined4 *)*pauVar8);
    vrsq_s(uVar9);
    uVar9 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
    uVar9 = vmul_s(uVar9,param_2);
    auVar1 = vscl_t(*pauVar8,uVar9);
    local_60 = auVar1._0_4_;
    local_5c = auVar1._4_4_;
    local_58 = auVar1._8_4_;
  }
  if (DAT_08af70fc == 0) {
    DAT_08af70fc = 1;
    DAT_08ab9dd0 = DAT_08b007d0;
    DAT_08ab9dd4 = DAT_08b007d4;
    DAT_08ab9dd8 = DAT_08b007d8;
    DAT_08ab9ddc = DAT_08b007dc;
  }
  if (param_6 == 0) {
    DAT_08b00540 = *puVar7;
    DAT_08b00544 = *(undefined4 *)(param_3 + 100);
    DAT_08b00548 = *(undefined4 *)(param_3 + 0x68);
    DAT_08b0054c = param_1 * param_1;
    DAT_08ab9de4 = &DAT_08b00560;
    DAT_08b00550 = param_1;
  }
  else {
    DAT_08b00680 = *puVar7;
    DAT_08b00684 = *(undefined4 *)(param_3 + 100);
    DAT_08b00688 = *(undefined4 *)(param_3 + 0x68);
    DAT_08b00690 = local_60;
    DAT_08b00694 = local_5c;
    DAT_08b00698 = local_58;
    DAT_08b0068c = param_1 * param_1;
    auVar4._4_4_ = local_5c;
    auVar4._0_4_ = local_60;
    auVar4._8_4_ = local_58;
    auVar1._4_4_ = local_5c;
    auVar1._0_4_ = local_60;
    auVar1._8_4_ = local_58;
    uVar9 = vdot_t(auVar1,auVar4);
    DAT_08b0069c = vsqrt_s(uVar9);
    DAT_08ab9de4 = &DAT_08b006b0;
    uVar9 = *(undefined4 *)(param_3 + 100);
    uVar10 = *(undefined4 *)(param_3 + 0x68);
    uVar2 = *(undefined4 *)(param_3 + 0x6c);
    DAT_08b006a0 = param_1;
    *(undefined4 *)(DAT_08b00794 + 0x20) = *puVar7;
    *(undefined4 *)(iVar6 + 0x24) = uVar9;
    *(undefined4 *)(iVar6 + 0x28) = uVar10;
    *(undefined4 *)(iVar6 + 0x2c) = uVar2;
  }
  bVar3 = false;
  uVar9 = 0x31bf337e;
  if (0x19 < param_5) {
    if (0x1f < param_5) {
      iVar6 = *(int *)(param_3 + 0x1fc);
      goto LAB_0881ddd4;
    }
    uVar9 = 0x3e;
    bVar3 = true;
  }
  iVar6 = *(int *)(param_3 + 0x1fc);
LAB_0881ddd4:
  uVar10 = 0;
  if ((iVar6 == 0) || (iVar6 = FUN_08860188(*(undefined4 *)(param_3 + 0x1fc)), iVar6 == 0)) {
    DAT_08ab9de8 = 0;
    DAT_08ab9df0 = 4;
  }
  else {
    DAT_08ab9de8 = *(int *)(param_3 + 0x1fc);
    uVar10 = *(undefined4 *)(DAT_08ab9de8 + 0x20c);
    DAT_08ab9df0 = 3;
  }
  DAT_08ab9dec = 0;
  DAT_08ab9df4 = 0;
  DAT_08ab9df8 = param_5;
  DAT_08ab9dfc = FUN_0881dbcc(param_3,param_5);
  DAT_08ab9e00 = param_4;
  DAT_08ab9dc0 = FUN_0881aa28(uVar9,&DAT_08ab9dd0,1,uVar10);
  if ((((DAT_08ab9dc0 != '\0') && (DAT_08ab02fc != 0)) && (DAT_08ab9de8 != 0)) &&
     ((0x22 < param_5 && (iVar6 = param_5 + -0x23, param_5 < 0xb3)))) {
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0x8d < iVar6) {
      iVar6 = 0x8d;
    }
    uVar9 = *(undefined4 *)(DAT_08ab02fc + 0x138);
    iVar5 = FUN_08860188(uVar9);
    if (iVar5 != 0) {
      FUN_088631c4(uVar9,iVar6,*(undefined4 *)(param_3 + 0x1fc));
    }
  }
  if (bVar3) {
    if (DAT_08ab9dc0 == '\0') {
      DAT_08ab9dc0 = '\0';
    }
    else if (DAT_08ab9de0 == 0) {
      DAT_08ab9dc0 = '\0';
    }
    else if ((*(int *)(DAT_08ab9de0 + 0x134) < 1) || (4 < *(int *)(DAT_08ab9de0 + 0x134))) {
      DAT_08ab9dc0 = '\0';
    }
    else {
      iVar6 = *(int *)(DAT_08ab9de0 + 0x138);
      if (iVar6 == 0) {
        DAT_08ab9dc0 = '\0';
      }
      else {
        iVar5 = (**(code **)(*(int *)(iVar6 + 0x14) + 0x5c))
                          (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x58));
        if ((iVar5 != 0) ||
           (iVar6 = (**(code **)(*(int *)(iVar6 + 0x14) + 0xa4))
                              (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0xa0)),
           iVar6 == param_5 + -0x1a)) {
          DAT_08ab9dc0 = '\0';
        }
      }
    }
  }
  else {
    DAT_08ab9dc0 = '\0';
  }
  return;
}

