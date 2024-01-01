#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088bee94(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined4 **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 **ppuVar9;
  int iVar10;
  float fVar11;
  undefined4 *local_250;
  int local_24c [131];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  ppuVar5 = &local_250;
  ppuVar9 = &local_250;
  iVar8 = *param_3;
  if (iVar8 != 0) {
    local_250 = param_2;
    FUN_088bdf6c(&local_40);
    DAT_08b00d30 = local_40;
    DAT_08b00d34 = uStack_3c;
    DAT_08b00d38 = uStack_38;
    DAT_08b00d3c = uStack_34;
    local_250 = (undefined4 *)FUN_089e3014(DAT_08ac5c90,local_250,1);
    *local_250 = 0xc6000707;
    local_250[1] = 0xc7000000;
    local_30 = 0x3f4ccccd;
    local_250[2] = 0xd03f4ccc;
    local_250[3] = 0xc8880002;
    local_250 = local_250 + 4;
    fVar11 = *(float *)(iVar8 + 0x6c);
    iVar6 = 0;
    while( true ) {
      iVar7 = iVar6;
      if (1.0 <= fVar11) {
        if (*(char *)(iVar8 + 0xb8) == '\0') {
          iVar8 = *(int *)(iVar8 + 4);
        }
        else {
          auVar2._4_4_ = uStack_3c;
          auVar2._0_4_ = local_40;
          auVar2._8_4_ = uStack_38;
          auVar2._12_4_ = uStack_34;
          auVar2 = vsub_q(auVar2,*(undefined (*) [16])(*(int *)(iVar8 + 0x130) + 0xb0));
          uVar4 = vdot_t(auVar2._0_12_,auVar2._0_12_);
          *(undefined4 *)((int)ppuVar5 + 8) = uVar4;
          iVar7 = iVar6 + 1;
          ppuVar5 = (undefined4 **)((int)ppuVar5 + 8);
          local_24c[iVar6 * 2] = iVar8;
          iVar8 = *(int *)(iVar8 + 4);
        }
      }
      else {
        iVar8 = *(int *)(iVar8 + 4);
      }
      if (iVar8 == 0) break;
      fVar11 = *(float *)(iVar8 + 0x6c);
      iVar6 = iVar7;
    }
    if (iVar7 != 0) {
      FUN_089bf03c(local_24c,iVar7);
      iVar8 = 0;
      if (0 < iVar7) {
        do {
          iVar10 = *(int *)((int)ppuVar9 + 4);
          iVar6 = *(int *)(iVar10 + 0x130);
          uVar4 = *(undefined4 *)(iVar6 + 0xbc);
          auVar1._4_4_ = uStack_3c;
          auVar1._0_4_ = local_40;
          auVar1._8_4_ = uStack_38;
          auVar1 = vsub_t(*(undefined (*) [12])(iVar6 + 0xb0),auVar1);
          *(int *)*(undefined (*) [12])(iVar6 + 0xb0) = auVar1._0_4_;
          *(int *)(iVar6 + 0xb4) = auVar1._4_4_;
          *(int *)(iVar6 + 0xb8) = auVar1._8_4_;
          *(undefined4 *)(iVar6 + 0xbc) = uVar4;
          (**(code **)(*(int *)(iVar10 + 0x14) + 0x44))
                    (iVar10 + *(short *)(*(int *)(iVar10 + 0x14) + 0x40),&local_250);
          iVar6 = *(int *)(iVar10 + 0x130);
          uVar4 = *(undefined4 *)(iVar6 + 0xbc);
          auVar3._4_4_ = uStack_3c;
          auVar3._0_4_ = local_40;
          auVar3._8_4_ = uStack_38;
          auVar1 = vadd_t(*(undefined (*) [12])(iVar6 + 0xb0),auVar3);
          *(int *)*(undefined (*) [12])(iVar6 + 0xb0) = auVar1._0_4_;
          *(int *)(iVar6 + 0xb4) = auVar1._4_4_;
          *(int *)(iVar6 + 0xb8) = auVar1._8_4_;
          *(undefined4 *)(iVar6 + 0xbc) = uVar4;
          iVar8 = iVar8 + 1;
          ppuVar9 = (undefined4 **)((int)ppuVar9 + 8);
        } while (iVar8 < iVar7);
      }
    }
    FUN_088bdfc4(&local_40);
    uVar4 = FUN_089e3014(DAT_08ac5c90,local_250,1);
    return uVar4;
  }
  return param_2;
}

