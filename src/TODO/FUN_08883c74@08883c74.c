#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08883c74(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined (*pauVar3) [12];
  undefined4 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_38;
  
  if (0x96 < *(int *)(param_1 + 0xf4)) {
    local_a0 = *(undefined4 *)(param_1 + 0x60);
    local_9c = *(float *)(param_1 + 100);
    uStack_98 = *(undefined4 *)(param_1 + 0x68);
    local_94 = *(undefined4 *)(param_1 + 0x9c);
    iVar2 = FUN_089c9b48(5,DAT_08ac58c8);
    if (DAT_08aba988 != DAT_08aba784) {
      if (iVar2 == 0) {
        iVar2 = _DONE_NotZero_DAT_08AC5258();
        if (iVar2 != 0) {
          uVar6 = _DONE_Get_DAT_08AC5258();
          FUN_089c00c4(uVar6,0x200258,(undefined4 *)(param_1 + 0x60),0,1);
        }
      }
      else {
        iVar2 = _DONE_NotZero_DAT_08AC5874();
        if (iVar2 != 0) {
          uVar6 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar6,0x200258,0,0);
        }
      }
    }
    local_90 = local_a0;
    uStack_8c = local_9c;
    uStack_88 = uStack_98;
    uStack_84 = local_94;
    local_80 = *(undefined4 *)(param_1 + 0xa0);
    uStack_7c = *(undefined4 *)(param_1 + 0xa4);
    uStack_78 = *(undefined4 *)(param_1 + 0xa8);
    uStack_74 = *(undefined4 *)(param_1 + 0xac);
    DAT_08aba988 = DAT_08aba784;
    FUN_088a3d4c(&local_90,*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100),
                 (int)*(float *)(param_1 + 0x90),(int)*(float *)(param_1 + 0x94),
                 (int)*(float *)(param_1 + 0x98));
    FUN_08876ee0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x114) == '\0') {
    pauVar3 = (undefined (*) [12])(param_1 + 0x70);
    if (*(int *)(param_1 + 0xf4) == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0x14);
      (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 0xbc) + (int)*(short *)(iVar2 + 0x10));
      iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0x14);
      (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 0xbc) + (int)*(short *)(iVar2 + 0x10));
      auVar1 = vscl_t(*pauVar3,0x41b00000);
      *(int *)*pauVar3 = auVar1._0_4_;
      *(int *)(param_1 + 0x74) = auVar1._4_4_;
      *(int *)(param_1 + 0x78) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x7c) = in_V7D;
      local_a0 = *(undefined4 *)*pauVar3;
      local_9c = *(float *)(param_1 + 0x74);
      uStack_98 = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x104) = 0x3da0d97c;
      *(undefined4 *)(param_1 + 0x108) = 0x3fc90fdb;
    }
    else {
      local_a0 = *(undefined4 *)*pauVar3;
      uStack_98 = *(undefined4 *)(param_1 + 0x78);
      local_94 = *(undefined4 *)(param_1 + 0x7c);
      fVar5 = *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = fVar5;
      puVar4 = (undefined4 *)(param_1 + 0x60);
      if (6.283185 < fVar5) {
        *(undefined4 *)(param_1 + 0x108) = 0x40c90fdb;
      }
      uVar6 = vmul_s(*(undefined4 *)(param_1 + 0x108),in_V7C);
      local_38 = (float)vsin_s(uVar6);
      local_9c = *(float *)(param_1 + 0x74) + local_38 * 16.0;
      iVar2 = *(int *)(param_1 + 0xbc);
      *(undefined4 *)(iVar2 + 0x90) = local_a0;
      *(float *)(iVar2 + 0x94) = local_9c;
      *(undefined4 *)(iVar2 + 0x98) = uStack_98;
      *(undefined4 *)(iVar2 + 0x9c) = local_94;
      DAT_08aba940 = 0;
      uVar6 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb0) + 0x20c) + 0x134);
      iVar2 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,puVar4,&local_a0,0xa3,3,0,
                           0x3fbf2700);
      if ((iVar2 != 0) || (*(float *)(param_1 + 100) < -100.0)) {
        local_a0 = *puVar4;
        local_9c = *(float *)(param_1 + 100);
        uStack_98 = *(undefined4 *)(param_1 + 0x68);
        local_94 = *(undefined4 *)(param_1 + 0x9c);
        iVar2 = FUN_089c9b48(5,DAT_08ac58c8);
        if (DAT_08aba988 != DAT_08aba784) {
          if (iVar2 == 0) {
            iVar2 = _DONE_NotZero_DAT_08AC5258();
            if (iVar2 != 0) {
              uVar6 = _DONE_Get_DAT_08AC5258();
              FUN_089c00c4(uVar6,0x200258,puVar4,0,1);
            }
          }
          else {
            iVar2 = _DONE_NotZero_DAT_08AC5874();
            if (iVar2 != 0) {
              uVar6 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,0x200258,0,0);
            }
          }
        }
        local_70 = local_a0;
        uStack_6c = local_9c;
        uStack_68 = uStack_98;
        uStack_64 = local_94;
        local_60 = *(undefined4 *)(param_1 + 0xa0);
        uStack_5c = *(undefined4 *)(param_1 + 0xa4);
        uStack_58 = *(undefined4 *)(param_1 + 0xa8);
        uStack_54 = *(undefined4 *)(param_1 + 0xac);
        DAT_08aba988 = DAT_08aba784;
        FUN_088a3d4c(&local_70,*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100),
                     (int)*(float *)(param_1 + 0x90),(int)*(float *)(param_1 + 0x94),
                     (int)*(float *)(param_1 + 0x98));
        FUN_08876ee0(param_1);
        return;
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb0) + 0x20c) + 0x134) = uVar6;
    }
    if (0 < *(int *)(param_1 + 0xf4)) {
      uVar6 = *(undefined4 *)(param_1 + 0x6c);
      auVar1._4_4_ = local_9c;
      auVar1._0_4_ = local_a0;
      auVar1._8_4_ = uStack_98;
      auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x60),auVar1);
      *(int *)*(undefined (*) [12])(param_1 + 0x60) = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar6;
    }
    return;
  }
  FUN_08823f5c(DAT_08abd5b0,0x55,param_1 + 0x60);
  FUN_08876ee0(param_1);
  return;
}

