#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08875804(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_44;
  float local_38;
  float local_34;
  float local_30;
  
  iVar7 = *(int *)(param_1 + 8);
  if (((iVar7 != 0x14) && (iVar7 != 0x12)) && (iVar7 != 8)) {
    iVar7 = *(int *)(param_1 + 0x3cc);
    goto LAB_08875908;
  }
  bVar5 = false;
  iVar7 = FUN_089bf93c(0x65,1);
  if ((iVar7 != 0) && (iVar7 = FUN_089bfa40(0x65), iVar7 != 0)) {
    iVar8 = *(int *)(iVar7 + 0x654);
    if (iVar8 == 100) {
LAB_088758a4:
      bVar5 = true;
    }
    else if (iVar8 == 0x5e) {
      iVar7 = FUN_088ff4a0(iVar7);
      if (0x95 < iVar7) {
        bVar5 = true;
      }
    }
    else if (iVar8 == 0x36) {
      iVar7 = FUN_088ff4a0(iVar7);
      if (0x4a < iVar7) {
        bVar5 = true;
      }
    }
    else if (iVar8 == 0x34) goto LAB_088758a4;
  }
  if (!bVar5) {
    if (DAT_08abff80 != 0) {
      iVar7 = *(int *)(param_1 + 0x3cc);
      goto LAB_08875908;
    }
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000000;
  }
  iVar7 = *(int *)(param_1 + 0x3cc);
LAB_08875908:
  if (iVar7 < 0xdeae) {
    if (iVar7 < 0xdead) {
      return;
    }
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0x3f000000;
    FUN_088ff3a4(0x23,&local_70);
    *(undefined4 *)(param_1 + 0x3d0) = 0x23;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
  }
  else if (0xdeae < iVar7) {
    return;
  }
  puVar6 = (undefined4 *)FUN_0886642c(param_1);
  local_50 = *puVar6;
  uStack_4c = puVar6[1];
  uStack_48 = puVar6[2];
  uVar11 = vmin_s((float)(0x23 - *(int *)(param_1 + 0x3d0)) * 0.03,in_V7F);
  local_38 = (float)vmax_s(uVar11,in_V7D);
  fVar10 = local_38 * 3.141593;
  uVar11 = vmul_s(fVar10,in_V7C);
  local_34 = (float)vcos_s(uVar11);
  local_44 = (1.0 - local_34) * 0.5;
  (**(code **)(*(int *)(param_1 + 0x14) + 0x24))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x20),&local_50);
  uVar11 = vmul_s(fVar10,in_V7C);
  local_30 = (float)vcos_s(uVar11);
  fVar10 = 1.0 - local_30;
  iVar7 = FUN_089ded60(param_1,"Bip01_Pelvis");
  auVar2 = vscl_t(*(undefined (*) [12])(iVar7 + 0x70),1.0 - fVar10 * 0.5 * 0.3);
  *(int *)*(undefined (*) [12])(iVar7 + 0x70) = auVar2._0_4_;
  *(int *)(iVar7 + 0x74) = auVar2._4_4_;
  *(int *)(iVar7 + 0x78) = auVar2._8_4_;
  *(undefined4 *)(iVar7 + 0x7c) = in_V7D;
  if (*(int *)(param_1 + 0x3d0) < 0x10) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - 0.0625;
  }
  iVar7 = *(int *)(param_1 + 0x3d0);
  *(int *)(param_1 + 0x3d0) = iVar7 + -1;
  if (iVar7 < 1) {
    *(undefined *)(param_1 + 0xb9) = 0;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    iVar7 = FUN_089ded60(param_1,"Bip01_Pelvis");
    *(undefined4 *)(iVar7 + 0x70) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x74) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x78) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    DAT_08aba780 = 1;
  }
  pauVar9 = (undefined (*) [16])(param_1 + 0x3f0);
  uVar11 = *(undefined4 *)(DAT_08ac5c90 + 0x54);
  uVar3 = *(undefined4 *)(DAT_08ac5c90 + 0x58);
  uVar4 = *(undefined4 *)(DAT_08ac5c90 + 0x5c);
  *(undefined4 *)*pauVar9 = *(undefined4 *)(DAT_08ac5c90 + 0x50);
  *(undefined4 *)(param_1 + 0x3f4) = uVar11;
  *(undefined4 *)(param_1 + 0x3f8) = uVar3;
  *(undefined4 *)(param_1 + 0x3fc) = uVar4;
  auVar2 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x70),0x438c0000);
  uVar11 = *(undefined4 *)(param_1 + 0x3fc);
  auVar2 = vadd_t(*(undefined (*) [12])*pauVar9,auVar2);
  *(int *)*pauVar9 = auVar2._0_4_;
  *(int *)(param_1 + 0x3f4) = auVar2._4_4_;
  *(int *)(param_1 + 0x3f8) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x3fc) = uVar11;
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x250),*pauVar9);
  auVar1 = vscl_q(auVar1,0x3ecccccd);
  auVar1 = vadd_q(*pauVar9,auVar1);
  *(int *)*pauVar9 = auVar1._0_4_;
  *(int *)(param_1 + 0x3f4) = auVar1._4_4_;
  *(int *)(param_1 + 0x3f8) = auVar1._8_4_;
  *(int *)(param_1 + 0x3fc) = auVar1._12_4_;
  return;
}

