#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884a804(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [12];
  int iVar6;
  undefined4 uVar7;
  undefined (*pauVar8) [16];
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 in_V72;
  float in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_34;
  
  iVar9 = 0;
  iVar10 = 0;
  iVar6 = FUN_0880d354();
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x2ec);
  }
  else {
    iVar6 = _DONE_NotZero_DAT_08AAC9E0();
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x2ec);
    }
    else {
      uVar7 = _DONE_Get_DAT_08AAC9E0();
      iVar6 = FUN_0880d7e0(uVar7,0x4880);
      if (iVar6 != 0) {
        uVar7 = FUN_089bfa40(100);
        FUN_089bf300(uVar7,1);
        FUN_089bf7a8(param_1,1);
        return;
      }
      iVar6 = *(int *)(param_1 + 0x2ec);
    }
  }
  if (iVar6 == 0) {
    iVar9 = FUN_08860188(*(undefined4 *)(param_1 + 0x2b4));
    if (iVar9 != 0) {
      iVar10 = *(int *)(iVar9 + 0x3b4);
    }
    if (iVar10 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x2dc);
    }
    else {
      iVar6 = (**(code **)(*(int *)(iVar10 + 0x14) + 0x5c))
                        (iVar10 + *(short *)(*(int *)(iVar10 + 0x14) + 0x58));
      if (iVar6 == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x2dc);
      }
      else {
        iVar10 = 0;
        uVar7 = *(undefined4 *)(param_1 + 0x2dc);
      }
    }
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x2dc);
  }
  switch(uVar7) {
  case 0:
    FUN_0884914c(param_1);
    iVar6 = *(int *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = iVar6 + 1;
    if (0x14 < iVar6) {
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
      pauVar8 = (undefined (*) [16])(param_1 + 0x2c0);
      uVar7 = vmul_s(0x4005e842,in_V7C);
      auVar2 = vmov_q(*pauVar8);
      auVar3 = vrot_q(uVar7,1,0,3,0);
      auVar4 = vrot_q(uVar7,2,0,1,0);
      uVar7 = vdot_t(*(undefined (*) [12])*pauVar8,auVar3._0_12_);
      uVar12 = vdot_t(*(undefined (*) [12])*pauVar8,auVar4._0_12_);
      *(undefined4 *)*pauVar8 = uVar7;
      *(int *)(param_1 + 0x2c4) = auVar2._4_4_;
      *(undefined4 *)(param_1 + 0x2c8) = uVar12;
      *(int *)(param_1 + 0x2cc) = auVar2._12_4_;
      *(undefined4 *)(param_1 + 0x2d0) = 0x447a0000;
      *(undefined4 *)(param_1 + 0x2d4) = 0x3f000000;
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      if (iVar9 != 0) {
        FUN_088608d8(0,iVar9,0xee,0,1);
      }
      if (iVar10 != 0) {
        FUN_089df450(*(undefined4 *)(param_1 + 0x300),iVar10);
      }
      iVar6 = _DONE_NotZero_DAT_08AC5874();
      if (iVar6 != 0) {
        uVar7 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,0x200133,0,0);
      }
    }
    break;
  case 1:
  case 2:
    FUN_0884914c(param_1);
    iVar6 = *(int *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = iVar6 + 1;
    if (0xf < iVar6) {
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      iVar6 = *(int *)(param_1 + 0x2dc) + 1;
      *(int *)(param_1 + 0x2dc) = iVar6;
      pauVar8 = (undefined (*) [16])(param_1 + 0x2c0);
      if (iVar6 < 3) {
        uVar7 = vmul_s(0x4005e842,in_V7C);
        auVar2 = vmov_q(*pauVar8);
        auVar3 = vrot_q(uVar7,1,0,3,0);
        auVar4 = vrot_q(uVar7,2,0,1,0);
        uVar7 = vdot_t(*(undefined (*) [12])*pauVar8,auVar3._0_12_);
        uVar12 = vdot_t(*(undefined (*) [12])*pauVar8,auVar4._0_12_);
        *(undefined4 *)*pauVar8 = uVar7;
        *(int *)(param_1 + 0x2c4) = auVar2._4_4_;
        *(undefined4 *)(param_1 + 0x2c8) = uVar12;
        *(int *)(param_1 + 0x2cc) = auVar2._12_4_;
        *(undefined4 *)(param_1 + 0x2d0) = 0x447a0000;
        if (iVar9 != 0) {
          FUN_088608d8(0,iVar9,0xee,0,1);
        }
        if (iVar10 != 0) {
          FUN_089df450(*(undefined4 *)(param_1 + 0x300),iVar10);
        }
        *(undefined4 *)(param_1 + 0x2d8) = 0;
        *(undefined4 *)(param_1 + 0x2d4) = 0x3f000000;
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,0x200133,0,0);
        }
      }
    }
    break;
  case 3:
    iVar6 = *(int *)(param_1 + 0x2e0) + 1;
    *(int *)(param_1 + 0x2e0) = iVar6;
    if (iVar6 == 1) {
      iVar6 = FUN_0884b268();
      *(undefined4 *)(iVar6 + 0x4e0) = 0;
      FUN_089e10cc(0x3d8f5c29);
    }
    else if (0x32 < *(int *)(param_1 + 0x2e0)) {
      FUN_0882c2cc(3,1);
      FUN_08824658(DAT_08ac5c70,0x82,0);
      FUN_08824658(DAT_08ac5c70,0x1e4,0);
      uVar7 = FUN_089bfa40(100);
      FUN_089bf300(uVar7,1);
      DAT_08aba77f = 1;
      if (iVar9 != 0) {
        FUN_088608d8(0x3e4ccccd,iVar9,0xf2,1,0);
        FUN_08862d70(iVar9);
      }
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      iVar6 = FUN_089bf93c(0x1e1,1);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x2e0) = 0xffffffec;
      }
      *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
      FUN_089e10cc(0x3f800000);
      FUN_0884b558(1);
    }
    break;
  case 4:
    iVar6 = *(int *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = iVar6 + 1;
    if (iVar6 < 0x2e) {
      if ((0x23 < *(int *)(param_1 + 0x2e0)) && (iVar6 = FUN_0884b248(), iVar6 != 0)) {
        uVar7 = FUN_0884b268();
        iVar6 = FUN_0884c830(uVar7);
        if (iVar6 != 0) {
          iVar6 = FUN_0884b268();
          *(float *)(iVar6 + 0x4fc) = *(float *)(iVar6 + 0x4fc) + 0.1;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
    }
    break;
  case 5:
    iVar6 = FUN_088feb48();
    if (iVar6 == 0) {
      FUN_08823838();
      FUN_08824914(DAT_08ac5c70,0x82,0);
      FUN_08824914(DAT_08ac5c70,0x1e4,0);
      FUN_08824914(DAT_08ac5c70,0x1f,0);
      FUN_08824914(DAT_08ac5c70,0x20,0);
      FUN_08824914(DAT_08ac5c70,0xa9,0);
      FUN_088259a4();
      DAT_08ac5c74 = FUN_0889d4c0();
      return;
    }
    *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
    goto LAB_0884ad50;
  case 6:
LAB_0884ad50:
    DAT_08abff85 = 1;
    FUN_0882c2cc(2,1);
    FUN_089bf7a8(param_1,1);
    return;
  }
  if (iVar9 != 0) {
    FUN_089dfc04(iVar9);
    FUN_089dfdb0(iVar9);
  }
  if (iVar10 != 0) {
    FUN_089dfc04(iVar10);
    FUN_089dfdb0(iVar10);
  }
  iVar6 = *(int *)(param_1 + 0x2ec);
  local_a0 = in_V72;
  local_9c = in_V76;
  uStack_98 = in_V7A;
  uStack_94 = in_V7E;
  if (iVar6 < 1) {
    if (iVar6 < 0) {
      iVar6 = *(int *)(param_1 + 0x2ec);
      goto LAB_0884ae80;
    }
    if (iVar9 != 0) {
      FUN_089dedf8(iVar9,&local_80,"Bip01");
      local_a0 = local_80;
      local_9c = fStack_7c;
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      iVar6 = *(int *)(param_1 + 0x2ec);
      goto LAB_0884ae80;
    }
  }
  else if (iVar6 < 2) {
    iVar6 = *(int *)(param_1 + 0x2b4);
    local_a0 = *(undefined4 *)(iVar6 + 0x20);
    uStack_98 = *(undefined4 *)(iVar6 + 0x28);
    uStack_94 = *(undefined4 *)(iVar6 + 0x2c);
    local_9c = *(float *)(iVar6 + 0x24) + 100.0;
  }
  else if (iVar6 < 3) {
    FUN_089deeb0(*(undefined4 *)(param_1 + 0x2b4),&local_90,0);
    local_a0 = local_90;
    uStack_98 = uStack_88;
    uStack_94 = uStack_84;
    local_9c = fStack_8c + 200.0;
  }
  iVar6 = *(int *)(param_1 + 0x2ec);
LAB_0884ae80:
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x2ec) == 0) {
      uVar7 = 0x43960000;
    }
    else {
      uVar7 = 0x442f0000;
    }
    *(undefined4 *)(param_1 + 0x2d0) = uVar7;
    uVar7 = vmul_s(*(float *)(param_1 + 0x2d4) * *(float *)(param_1 + 0x2d4) * 3.141593,in_V7C);
    local_34 = (float)vcos_s(uVar7);
    fVar11 = 1.15 - (1.0 - local_34) * 0.5 * 0.4;
    if (iVar9 != 0) {
      fVar11 = *(float *)(iVar9 + 0x17c) * 0.008333334 * fVar11;
    }
    *(float *)(param_1 + 0x214) = fVar11;
    iVar6 = *(int *)(param_1 + 0x2dc);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x2dc);
  }
  if (iVar6 < 4) {
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2d0));
    local_60 = auVar1._0_4_;
    uStack_5c = auVar1._4_4_;
    uStack_58 = auVar1._8_4_;
    auVar5._4_4_ = local_9c;
    auVar5._0_4_ = local_a0;
    auVar5._8_4_ = uStack_98;
    auVar1 = vadd_t(auVar5,auVar1);
    local_70 = auVar1._0_4_;
    uStack_6c = auVar1._4_4_;
    uStack_68 = auVar1._8_4_;
    uStack_64 = uStack_94;
    *(undefined4 *)(param_1 + 0x60) = local_70;
    *(undefined4 *)(param_1 + 100) = uStack_6c;
    *(undefined4 *)(param_1 + 0x68) = uStack_68;
    *(undefined4 *)(param_1 + 0x6c) = uStack_94;
    *(undefined4 *)(param_1 + 0x70) = local_a0;
    *(float *)(param_1 + 0x74) = local_9c;
    *(undefined4 *)(param_1 + 0x78) = uStack_98;
    *(undefined4 *)(param_1 + 0x7c) = uStack_94;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = local_a0;
    *(float *)(param_1 + 0x74) = local_9c;
    *(undefined4 *)(param_1 + 0x78) = uStack_98;
    *(undefined4 *)(param_1 + 0x7c) = uStack_94;
  }
  FUN_089e2b14(param_1 + 0x10,3);
  if ((*(int *)(param_1 + 0x2ec) == 0) && (*(int *)(param_1 + 0x2dc) < 4)) {
    FUN_08823838();
    FUN_08824914(DAT_08ac5c70,0x82,0);
    FUN_08824914(DAT_08ac5c70,0x1e4,0);
    FUN_08824914(DAT_08ac5c70,0x1f,0);
    FUN_08824914(DAT_08ac5c70,0x20,0);
    FUN_08824914(DAT_08ac5c70,0xa9,0);
    FUN_088259a4();
    DAT_08ac5c74 = FUN_0889d4c0();
  }
  return;
}

