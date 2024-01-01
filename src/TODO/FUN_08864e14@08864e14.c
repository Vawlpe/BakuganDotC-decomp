#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08864e14(float param_1,float param_2,int param_3,undefined4 param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (*(int *)(param_3 + 8) == 10) {
    puVar4 = (undefined4 *)FUN_088606ac(param_3,param_4,0);
    local_70 = *puVar4;
    uStack_68 = puVar4[2];
    uStack_64 = puVar4[3];
    local_6c = *(float *)(param_3 + 0x344);
  }
  else {
    puVar4 = (undefined4 *)FUN_088606ac(param_3,param_4,0);
    local_70 = *puVar4;
    uStack_68 = puVar4[2];
    uStack_64 = puVar4[3];
    local_6c = *(float *)(param_3 + 0x344);
  }
  if (param_1 != 0.0) {
    auVar1 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x70),param_1);
    local_60 = auVar1._0_4_;
    uStack_5c = auVar1._4_4_;
    uStack_58 = auVar1._8_4_;
    auVar2._4_4_ = local_6c;
    auVar2._0_4_ = local_70;
    auVar2._8_4_ = uStack_68;
    auVar1 = vsub_t(auVar2,auVar1);
    local_70 = auVar1._0_4_;
    local_6c = auVar1._4_4_;
    uStack_68 = auVar1._8_4_;
  }
  uVar6 = 3;
  if (param_2 != 0.0) {
    auVar1 = vscl_t(*(undefined (*) [12])(param_3 + 0x80),param_2);
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    auVar3._4_4_ = local_6c;
    auVar3._0_4_ = local_70;
    auVar3._8_4_ = uStack_68;
    auVar1 = vadd_t(auVar3,auVar1);
    local_70 = auVar1._0_4_;
    local_6c = auVar1._4_4_;
    uStack_68 = auVar1._8_4_;
  }
  iVar5 = FUN_0885fcf8(param_3);
  if (iVar5 == 0) {
    if ((DAT_08abd488 == 0xc || DAT_08abd488 == 0xe) || DAT_08abd488 == 0xf) {
      uVar6 = 8;
    }
    FUN_08823f5c(DAT_08ac5c70,uVar6,&local_70);
  }
  else {
    uVar6 = 8;
    iVar5 = FUN_0885fd54(param_3);
    if (iVar5 != 0) {
      fVar7 = (float)FUN_0889d654();
      fVar7 = *(float *)(param_3 + 0x344) + fVar7;
      if (*(float *)(param_3 + 0x24) < fVar7) {
        uVar6 = 0x105;
        local_6c = fVar7;
      }
      FUN_08823f5c(DAT_08ac5c70,uVar6,&local_70);
    }
  }
  return;
}

