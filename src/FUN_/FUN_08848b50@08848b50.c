#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08848b50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  int iVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar11;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_44;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af1884;
  iVar7 = param_1 + 0x10;
  FUN_089e2910(iVar7);
  *(undefined4 *)(param_1 + 0x2b4) = param_2;
  *(undefined4 *)(param_1 + 0x2e4) = param_3;
  *(undefined4 *)(param_1 + 0x2ec) = param_4;
  FUN_089e29e4(iVar7);
  *(undefined4 *)(param_1 + 0x50) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x54) = 0x4708b800;
  *(undefined4 *)(param_1 + 0x168) = 0x42480000;
  pauVar6 = (undefined (*) [12])(param_1 + 0x2c0);
  uVar10 = vmul_s(*(float *)(*(int *)(param_1 + 0x2b4) + 0x34) + 1.570796,in_V7C);
  auVar2 = vrot_q(uVar10,1,0,2,0);
  *(int *)*pauVar6 = auVar2._0_4_;
  *(int *)(param_1 + 0x2c4) = auVar2._4_4_;
  *(int *)(param_1 + 0x2c8) = auVar2._8_4_;
  *(int *)(param_1 + 0x2cc) = auVar2._12_4_;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3ecccccd;
  uVar10 = vdot_t(*pauVar6,*pauVar6);
  uVar11 = vcmp_s(8,uVar10,*(undefined4 *)*pauVar6);
  vrsq_s(uVar10);
  uVar10 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar6,uVar10);
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(param_1 + 0x2c4) = auVar1._4_4_;
  *(int *)(param_1 + 0x2c8) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x2cc) = in_V7D;
  *(undefined4 *)(param_1 + 0x2d0) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  iVar5 = *(int *)(param_1 + 0x2ec);
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      iVar8 = *(int *)(param_1 + 0x2b4);
      FUN_089dedf8(iVar8,&local_60,"Bip01");
      local_70 = local_60;
      local_6c = fStack_5c;
      uStack_68 = uStack_58;
      uStack_64 = uStack_54;
      iVar5 = *(int *)(iVar8 + 0x3b4);
      uVar10 = 0;
      if (iVar5 != 0) {
        uVar10 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xa4))
                           (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0xa0));
      }
      iVar4 = FUN_088243d8(DAT_08ac5c70,0x82,(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(iVar4 + 0xd8) = uVar10;
      FUN_088608d8(0,iVar8,0xee,0,1);
      if (iVar5 != 0) {
        iVar8 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x5c))
                          (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x58));
        if (iVar8 != 0) {
          iVar5 = 0;
        }
        if (iVar5 != 0) {
          fVar9 = (float)FUN_089df49c(iVar5);
          uVar10 = vmin_s(fVar9 - 2.0,in_V7F);
          local_44 = vmax_s(uVar10,in_V7D);
          *(undefined4 *)(param_1 + 0x300) = local_44;
        }
      }
    }
  }
  else if (iVar5 < 2) {
    iVar5 = *(int *)(param_1 + 0x2b4);
    local_70 = *(undefined4 *)(iVar5 + 0x20);
    uStack_68 = *(undefined4 *)(iVar5 + 0x28);
    uStack_64 = *(undefined4 *)(iVar5 + 0x2c);
    local_6c = *(float *)(iVar5 + 0x24) + 100.0;
  }
  auVar1 = vscl_t(*pauVar6,*(undefined4 *)(param_1 + 0x2d0));
  auVar3._4_4_ = local_6c;
  auVar3._0_4_ = local_70;
  auVar3._8_4_ = uStack_68;
  auVar1 = vadd_t(auVar3,auVar1);
  *(int *)(param_1 + 0x60) = auVar1._0_4_;
  *(int *)(param_1 + 100) = auVar1._4_4_;
  *(int *)(param_1 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x6c) = uStack_64;
  *(undefined4 *)(param_1 + 0x70) = local_70;
  *(float *)(param_1 + 0x74) = local_6c;
  *(undefined4 *)(param_1 + 0x78) = uStack_68;
  *(undefined4 *)(param_1 + 0x7c) = uStack_64;
  FUN_089e2b14(iVar7,0xffffffff);
  *(undefined *)(param_1 + 0x2f0) = 0;
  *(int *)(param_1 + 0x2b0) = DAT_08ac5c90;
  DAT_08ac5c90 = iVar7;
  return param_1;
}

