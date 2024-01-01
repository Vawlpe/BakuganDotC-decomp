#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08874748(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar10;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x4040000;
  iVar5 = *(int *)(param_1 + 0x20c);
  *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) | 1;
  *(undefined4 *)(iVar5 + 0x148) = 8;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + 1;
  *(int *)(param_1 + 0x3d4) = *(int *)(param_1 + 0x3d4) + 1;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) - 3.45;
  pauVar6 = (undefined (*) [12])(param_1 + 0x80);
  local_a0 = *(undefined4 *)*pauVar6;
  uStack_9c = *(undefined4 *)(param_1 + 0x84);
  uStack_98 = *(undefined4 *)(param_1 + 0x88);
  uStack_94 = *(undefined4 *)(param_1 + 0x8c);
  FUN_0886239c(param_1,&local_a0);
  iVar5 = 0;
  if ((*(uint *)(param_1 + 0x144) & 0x40000000) != 0) {
    iVar5 = *(int *)(param_1 + 0x184) + 1;
  }
  *(int *)(param_1 + 0x184) = iVar5;
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 0x3d4) == 0x1e) {
    FUN_08862a84(param_1,0xb,0,0);
  }
  if ((*(int *)(param_1 + 0x3cc) < 0) && (-0x32 < *(int *)(param_1 + 0x3cc))) {
    iVar5 = *(int *)(param_1 + 0x3cc) + -1;
    *(int *)(param_1 + 0x3cc) = iVar5;
    *(float *)(param_1 + 0x80) =
         *(float *)(param_1 + 0x80) +
         (*(float *)(*(int *)(param_1 + 0x20c) + 0x150) - *(float *)(param_1 + 0x20)) * 0.1;
    *(float *)(param_1 + 0x88) =
         *(float *)(param_1 + 0x88) +
         (*(float *)(*(int *)(param_1 + 0x20c) + 0x158) - *(float *)(param_1 + 0x28)) * 0.1;
    if (iVar5 == -0x32) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      uVar8 = FUN_089bedc4(0x40c8f5c3);
      uVar8 = vmul_s(uVar8,in_V7C);
      auVar2 = vrot_q(uVar8,1,0,2,0);
      uStack_84 = auVar2._12_4_;
      auVar1 = vscl_t(auVar2._0_12_,0x3dcccccd);
      local_90 = auVar1._0_4_;
      uStack_8c = auVar1._4_4_;
      uStack_88 = auVar1._8_4_;
      uVar8 = *(undefined4 *)(param_1 + 0x8c);
      auVar1 = vadd_t(*pauVar6,auVar1);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = uVar8;
      uVar8 = vdot_t(*pauVar6,*pauVar6);
      uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar6);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
      uVar8 = vmul_s(uVar8,0x42200000);
      auVar1 = vscl_t(*pauVar6,uVar8);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = in_V7D;
      *(undefined4 *)(param_1 + 0x84) = 0x41f00000;
    }
    else {
      auVar1 = vscl_t(*pauVar6,0x3f547ae1);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(float *)(param_1 + 0x84) =
           *(float *)(param_1 + 0x84) +
           ((float)-*(int *)(param_1 + 0x3cc) - *(float *)(param_1 + 0x84)) * 0.25;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
    }
  }
  puVar4 = (undefined4 *)FUN_088652f8(*(undefined4 *)(param_1 + 0x1c8),0x3f800000,param_1);
  *(float *)(param_1 + 0x1c8) =
       *(float *)(param_1 + 0x1c8) + (0.5 - *(float *)(param_1 + 0x1c8)) * 0.1;
  iVar5 = FUN_088604f4(param_1);
  if (iVar5 == 0) {
    fVar9 = *(float *)(param_1 + 0x84);
  }
  else {
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0x3f000000;
    FUN_0884c25c(0x1e,&local_80);
    if (*(int *)(param_1 + 0x3d0) < 0xc) {
      fVar9 = *(float *)(param_1 + 0x84);
    }
    else {
      if (*(float *)(param_1 + 0x84) <= 0.0) {
        FUN_088706f0(param_1,6,0);
        return;
      }
      fVar9 = *(float *)(param_1 + 0x84);
    }
  }
  uVar3 = DAT_08b001ac;
  uVar10 = DAT_08b001a8;
  uVar8 = DAT_08b001a4;
  puVar7 = (undefined4 *)(param_1 + 0x3f0);
  if ((0.0 <= fVar9) ||
     (((*(int *)(param_1 + 0x3d0) < 0x97 &&
       (*(float *)(param_1 + 0x344) <= *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x84) * 0.8
       )) && ((*(uint *)(param_1 + 0x144) & 0x80000000) != 0x80000000)))) {
    FUN_089dedf8(param_1,&local_60,"Bip01");
    *puVar7 = local_60;
    *(undefined4 *)(param_1 + 0x3f4) = uStack_5c;
    *(undefined4 *)(param_1 + 0x3f8) = uStack_58;
    *(undefined4 *)(param_1 + 0x3fc) = uStack_54;
    if (*(int *)(param_1 + 0x3d4) % 3 == 0) {
      uVar8 = FUN_088244ac(DAT_08ac5c70,0x28,puVar7,puVar4);
      *(undefined4 *)(param_1 + 0x410) = uVar8;
    }
    else if (*(int *)(param_1 + 0x410) != 0) {
      iVar5 = *(int *)(param_1 + 0x410);
      uVar8 = puVar4[1];
      uVar10 = puVar4[2];
      uVar3 = puVar4[3];
      *(undefined4 *)(iVar5 + 0x90) = *puVar4;
      *(undefined4 *)(iVar5 + 0x94) = uVar8;
      *(undefined4 *)(iVar5 + 0x98) = uVar10;
      *(undefined4 *)(iVar5 + 0x9c) = uVar3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x350) = DAT_08b001a0;
    *(undefined4 *)(param_1 + 0x354) = uVar8;
    *(undefined4 *)(param_1 + 0x358) = uVar10;
    *(undefined4 *)(param_1 + 0x35c) = uVar3;
    uVar8 = 0xf5;
    if ((*(int *)(param_1 + 0x1b8) == 0x10000000) && (*(int *)(param_1 + 0x1bc) == 0)) {
      uVar8 = 0xf7;
    }
    FUN_088608d8(0,param_1,uVar8,0,0);
    FUN_08864cb4(param_1,0);
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    FUN_088706f0(param_1,4,0);
    FUN_089dedf8(param_1,&local_70,"Bip01");
    *puVar7 = local_70;
    *(undefined4 *)(param_1 + 0x3f4) = uStack_6c;
    *(undefined4 *)(param_1 + 0x3f8) = uStack_68;
    *(undefined4 *)(param_1 + 0x3fc) = uStack_64;
    FUN_08865154(param_1);
    FUN_08824658(DAT_08ac5c70,0xffffffff,puVar7);
    *(undefined4 *)(param_1 + 0x3cc) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}

