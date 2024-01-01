#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b1270(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined4 in_V7D;
  undefined4 local_e0;
  float local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  float local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_38;
  
  puVar12 = (undefined4 *)(param_1 + 0x20);
  switch(*(undefined4 *)(param_1 + 0x328)) {
  case 0:
    if (*(int *)(param_1 + 0x334) == 0) {
      local_38 = 0;
      FUN_089d8634();
      uVar8 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar9 = FUN_089d7d74(0x170,0,0);
      FUN_089d816c(uVar8);
      FUN_089d866c();
      iVar10 = local_38;
      if (iVar9 != 0) {
        FUN_089e681c(iVar9);
        iVar10 = iVar9;
      }
      *(int *)(param_1 + 0x334) = iVar10;
    }
    uVar11 = *(undefined4 *)(param_1 + 0x334);
    iVar10 = *(int *)(param_1 + 0x130);
    uVar8 = FUN_088a9614(param_1);
    FUN_089e7974(uVar11,iVar10 + 0x80,uVar8,1);
    *(undefined *)(*(int *)(param_1 + 0x334) + 0x114) = 0;
    *(undefined *)(*(int *)(param_1 + 0x334) + 0x115) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x334) + 0x10c) = 0x40000000;
    iVar10 = *(int *)(param_1 + 0x334);
    iVar9 = *(int *)(param_1 + 0x130);
    uVar8 = *(undefined4 *)(iVar9 + 0xb4);
    uVar11 = *(undefined4 *)(iVar9 + 0xb8);
    uVar3 = *(undefined4 *)(iVar9 + 0xbc);
    *(undefined4 *)(iVar10 + 0xa0) = *(undefined4 *)(iVar9 + 0xb0);
    *(undefined4 *)(iVar10 + 0xa4) = uVar8;
    *(undefined4 *)(iVar10 + 0xa8) = uVar11;
    *(undefined4 *)(iVar10 + 0xac) = uVar3;
    FUN_088b119c(param_1,**(undefined4 **)(param_1 + 0x144));
    iVar10 = *(int *)(param_1 + 0x130);
    local_e0 = *(undefined4 *)(iVar10 + 0xb0);
    uStack_d8 = *(undefined4 *)(iVar10 + 0xb8);
    uStack_d4 = *(undefined4 *)(iVar10 + 0xbc);
    local_dc = *(float *)(iVar10 + 0xb4) + 9999.0;
    iVar10 = FUN_0889d57c(&local_e0,&local_e0);
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x130);
    }
    else if (20.0 < ABS(*(float *)(*(int *)(param_1 + 0x334) + 0x104) - local_dc)) {
      *(float *)(*(int *)(param_1 + 0x334) + 0x104) = local_dc;
      iVar10 = *(int *)(param_1 + 0x130);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x130);
    }
    uStack_d4 = *(undefined4 *)(iVar10 + 0xbc);
    auVar1 = vsub_t(*(undefined (*) [12])(iVar10 + 0xb0),*(undefined (*) [12])(param_1 + 0x360));
    local_e0 = auVar1._0_4_;
    local_dc = auVar1._4_4_;
    uStack_d8 = auVar1._8_4_;
    iVar10 = FUN_088acda0(param_1);
    if (iVar10 == 0) {
      auVar7._4_4_ = local_dc;
      auVar7._0_4_ = local_e0;
      auVar7._8_4_ = uStack_d8;
      auVar2._4_4_ = local_dc;
      auVar2._0_4_ = local_e0;
      auVar2._8_4_ = uStack_d8;
      auVar1._4_4_ = local_dc;
      auVar1._0_4_ = local_e0;
      auVar1._8_4_ = uStack_d8;
      uVar8 = vdot_t(auVar1,auVar2);
      uVar11 = vcmp_s(8,uVar8,local_e0);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      uVar8 = vmul_s(uVar8,0x3e99999a);
      auVar1 = vscl_t(auVar7,uVar8);
      auVar2 = vscl_t(*(undefined (*) [12])(param_1 + 0x370),0x3e19999a);
      local_c0 = auVar2._0_4_;
      uStack_bc = auVar2._4_4_;
      uStack_b8 = auVar2._8_4_;
      auVar1 = vadd_t(auVar1,auVar2);
      local_e0 = auVar1._0_4_;
      local_dc = auVar1._4_4_;
      uStack_d8 = auVar1._8_4_;
      if (local_dc < 0.0) {
        local_dc = 0.0;
      }
      local_dc = local_dc + 10.0;
    }
    else {
      auVar6._4_4_ = local_dc;
      auVar6._0_4_ = local_e0;
      auVar6._8_4_ = uStack_d8;
      auVar5._4_4_ = local_dc;
      auVar5._0_4_ = local_e0;
      auVar5._8_4_ = uStack_d8;
      auVar4._4_4_ = local_dc;
      auVar4._0_4_ = local_e0;
      auVar4._8_4_ = uStack_d8;
      uVar8 = vdot_t(auVar4,auVar5);
      uVar11 = vcmp_s(8,uVar8,local_e0);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      uVar8 = vmul_s(uVar8,0x3d4ccccd);
      auVar1 = vscl_t(auVar6,uVar8);
      auVar2 = vscl_t(*(undefined (*) [12])(param_1 + 0x370),0x3e99999a);
      local_d0 = auVar2._0_4_;
      uStack_cc = auVar2._4_4_;
      uStack_c8 = auVar2._8_4_;
      auVar1 = vadd_t(auVar1,auVar2);
      local_e0 = auVar1._0_4_;
      uStack_d8 = auVar1._8_4_;
      local_dc = 10.0;
    }
    FUN_089e68d4(0x3f800000,*(undefined4 *)(param_1 + 0x334),&local_e0,
                 (undefined (*) [12])(param_1 + 0x360));
    *(undefined4 *)(*(int *)(param_1 + 0x334) + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x330) = 0;
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    break;
  case 1:
    iVar10 = FUN_088b10a0(param_1);
    if (iVar10 == 0) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x334) + 0x164);
      fVar13 = (float)(**(code **)(iVar10 + 0x14))
                                (*(int *)(param_1 + 0x334) + (int)*(short *)(iVar10 + 0x10));
      if (fVar13 < 0.1) {
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      }
      else {
        if (*(int *)(*(int *)(param_1 + 0x334) + 0x110) == 0) {
          iVar10 = *(int *)(param_1 + 0x130);
          goto LAB_088b1a6c;
        }
        FUN_088b119c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x144) + 8));
        local_b0 = *puVar12;
        fVar13 = *(float *)(param_1 + 0x24);
        uStack_a8 = *(undefined4 *)(param_1 + 0x28);
        uStack_a4 = *(undefined4 *)(param_1 + 0x2c);
        local_ac = fVar13;
        iVar10 = FUN_088a9614(param_1);
        local_ac = fVar13 + *(float *)(iVar10 + 4);
        FUN_08824594(DAT_08abd5b0,0x1d,&local_b0,param_1);
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x328) = 10;
    }
    break;
  case 2:
    iVar10 = FUN_088b10a0(param_1);
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x218);
      if (0x57 < iVar10) {
        if (iVar10 < 0x8b) {
          if (iVar10 < 0x5a) {
LAB_088b1754:
            iVar10 = *(int *)(param_1 + 0x330);
            goto LAB_088b1758;
          }
          if (iVar10 < 0x6a) {
            if (0x68 < iVar10) {
              iVar10 = *(int *)(param_1 + 0x330);
              goto LAB_088b1758;
            }
            iVar10 = *(int *)(param_1 + 0x334);
          }
          else {
            if (0x7a < iVar10) {
                    // WARNING: Could not recover jumptable at 0x088b1724. Too many branches
                    // WARNING: Treating indirect jump as call
              (**(code **)(&DAT_08a85138 + (iVar10 + -0x7b) * 4))();
              return;
            }
            iVar10 = *(int *)(param_1 + 0x334);
          }
        }
        else if (iVar10 < 0xa9) {
          if (0xa7 < iVar10) {
            iVar10 = *(int *)(param_1 + 0x330);
            goto LAB_088b1758;
          }
          iVar10 = *(int *)(param_1 + 0x334);
        }
        else {
          if (iVar10 == 0xb2) goto LAB_088b1754;
          iVar10 = *(int *)(param_1 + 0x334);
        }
        goto LAB_088b17e8;
      }
      if (iVar10 < 0x20) {
        if (iVar10 < 0x14) {
          if (0x12 < iVar10) {
            iVar10 = *(int *)(param_1 + 0x330);
            goto LAB_088b1758;
          }
          iVar10 = *(int *)(param_1 + 0x334);
        }
        else {
          if (0x1d < iVar10) {
            iVar10 = *(int *)(param_1 + 0x330);
LAB_088b1758:
            *(int *)(param_1 + 0x330) = iVar10 + 1;
            iVar10 = *(int *)(*(int *)(param_1 + 0x334) + 0x164);
            fVar13 = (float)(**(code **)(iVar10 + 0x14))
                                      (*(int *)(param_1 + 0x334) + (int)*(short *)(iVar10 + 0x10));
            if ((0.1 <= fVar13) && (*(int *)(param_1 + 0x330) != 0xf)) {
              iVar10 = *(int *)(param_1 + 0x130);
              goto LAB_088b1a6c;
            }
            FUN_089e0a70(param_1,&LAB_088b09e8,0);
            FUN_08824594(DAT_08abd5b0,7,puVar12,param_1);
            *(undefined4 *)(param_1 + 0x228) = 0x3f000000;
            *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
            break;
          }
          iVar10 = *(int *)(param_1 + 0x334);
        }
      }
      else if (iVar10 < 0x3a) {
        if (0x37 < iVar10) {
          iVar10 = *(int *)(param_1 + 0x330);
          goto LAB_088b1758;
        }
        iVar10 = *(int *)(param_1 + 0x334);
      }
      else {
        if (iVar10 == 0x3c) {
          iVar10 = *(int *)(param_1 + 0x330);
          goto LAB_088b1758;
        }
        iVar10 = *(int *)(param_1 + 0x334);
      }
LAB_088b17e8:
      fVar13 = (float)(**(code **)(*(int *)(iVar10 + 0x164) + 0x14))
                                (iVar10 + *(short *)(*(int *)(iVar10 + 0x164) + 0x10));
      if (fVar13 < 0.1) {
        FUN_089e0a70(param_1,&LAB_088b09e8,0);
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x328) = 10;
    }
    break;
  case 3:
    iVar10 = FUN_088b10a0(param_1);
    if (iVar10 == 0) {
      fVar13 = *(float *)(param_1 + 0x228) - 0.08;
      *(float *)(param_1 + 0x228) = fVar13;
      if (fVar13 <= 0.0) {
        *(undefined4 *)(param_1 + 0x228) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        FUN_088ac4a0(param_1);
        iVar10 = *(int *)(param_1 + 0x218);
        if (iVar10 < 0x58) {
          if (iVar10 != 0x13) {
            iVar10 = *(int *)(param_1 + 0x14);
            goto LAB_088b18a0;
          }
          iVar10 = *(int *)(param_1 + 0x334);
        }
        else if (iVar10 < 0xa8) {
          if (0x59 < iVar10) {
            iVar10 = *(int *)(param_1 + 0x14);
            goto LAB_088b18a0;
          }
          iVar10 = *(int *)(param_1 + 0x334);
        }
        else {
          if (0xa8 < iVar10) {
            iVar10 = *(int *)(param_1 + 0x14);
LAB_088b18a0:
            (**(code **)(iVar10 + 0x5c))(param_1 + *(short *)(iVar10 + 0x58));
            iVar10 = *(int *)(param_1 + 0x130);
            goto LAB_088b1a6c;
          }
          iVar10 = *(int *)(param_1 + 0x334);
        }
        (**(code **)(*(int *)(iVar10 + 0x164) + 0x14))
                  (iVar10 + *(short *)(*(int *)(iVar10 + 0x164) + 0x10));
        (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
        iVar10 = *(int *)(param_1 + 0x130);
        goto LAB_088b1a6c;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x328) = 10;
    }
    break;
  case 10:
    iVar10 = *(int *)(*(int *)(param_1 + 0x334) + 0x164);
    (**(code **)(iVar10 + 0x14))(*(int *)(param_1 + 0x334) + (int)*(short *)(iVar10 + 0x10));
    local_a0 = *puVar12;
    fVar13 = *(float *)(param_1 + 0x24);
    uStack_98 = *(undefined4 *)(param_1 + 0x28);
    uStack_94 = *(undefined4 *)(param_1 + 0x2c);
    local_9c = fVar13;
    iVar10 = FUN_088a9614(param_1);
    local_9c = fVar13 + *(float *)(iVar10 + 4);
    FUN_08824594(DAT_08abd5b0,0xb,&local_a0,param_1);
    local_90 = *puVar12;
    local_8c = *(undefined4 *)(param_1 + 0x24);
    uStack_88 = *(undefined4 *)(param_1 + 0x28);
    uStack_84 = *(undefined4 *)(param_1 + 0x2c);
    local_8c = FUN_0889d6e4();
    FUN_08824594(DAT_08abd5b0,0xc,&local_90,param_1);
    FUN_088b119c(param_1,0x20000f);
    *(undefined4 *)(param_1 + 0x330) = 0;
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    break;
  case 0xb:
    iVar10 = *(int *)(*(int *)(param_1 + 0x334) + 0x164);
    fVar13 = (float)(**(code **)(iVar10 + 0x14))
                              (*(int *)(param_1 + 0x334) + (int)*(short *)(iVar10 + 0x10));
    if (fVar13 < 0.1) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    }
    else if (*(int *)(param_1 + 0x330) < 0xf) {
      *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1;
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
    }
  }
  iVar10 = *(int *)(param_1 + 0x130);
LAB_088b1a6c:
  uVar8 = *(undefined4 *)(iVar10 + 0xb4);
  uVar11 = *(undefined4 *)(iVar10 + 0xb8);
  uVar3 = *(undefined4 *)(iVar10 + 0xbc);
  *puVar12 = *(undefined4 *)(iVar10 + 0xb0);
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  return;
}

