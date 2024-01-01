#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0888ec9c(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  int iVar5;
  int iVar6;
  char cVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float local_98 [2];
  undefined4 local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *local_30;
  
  iVar6 = 0;
  *(undefined *)(param_1 + 0xa14) = 0;
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  cVar7 = false;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    local_90 = *param_2;
    uStack_88 = param_2[2];
    uStack_84 = param_2[3];
    fStack_8c = (float)param_2[1] + DAT_08abd0bc;
    local_80 = *param_3;
    uStack_7c = param_3[1];
    uStack_78 = param_3[2];
    uStack_74 = param_3[3];
    local_70 = local_90;
    local_6c = fStack_8c;
    uStack_68 = uStack_88;
    uStack_64 = uStack_84;
    iVar6 = FUN_088ab71c(&local_90,&local_80,local_98);
    if (iVar6 == 0) {
      local_98[0] = INFINITY;
    }
    else {
      cVar7 = iVar6 == 2;
      if (param_4 != (float *)0x0) {
        *param_4 = local_98[0];
      }
    }
    local_30 = &DAT_08b00410;
    DAT_08b00410 = *param_2;
    DAT_08b00418 = param_2[2];
    DAT_08b0041c = param_2[3];
    DAT_08b00414 = (float)param_2[1] + DAT_08abd0b8;
    DAT_08b00420 = *param_3;
    DAT_08b00424 = param_3[1];
    DAT_08b00428 = param_3[2];
    DAT_08b0042c = param_3[3];
    local_70 = DAT_08b00410;
    local_6c = DAT_08b00414;
    uStack_68 = DAT_08b00418;
    uStack_64 = DAT_08b0041c;
    (**(code **)(DAT_08b00404 + 0x4c))((int)&DAT_08b00400 + (int)*(short *)(DAT_08b00404 + 0x48));
    iVar5 = FUN_0881a83c(0x3fbf2700,&DAT_08b00430,0);
    if (iVar5 != 0) {
      auVar4._4_4_ = local_6c;
      auVar4._0_4_ = local_70;
      auVar4._8_4_ = uStack_68;
      auVar4._12_4_ = uStack_64;
      auVar1._12_4_ = DAT_08b0028c;
      auVar1._8_4_ = DAT_08b00288;
      auVar1._4_4_ = DAT_08b00284;
      auVar1._0_4_ = DAT_08b00280;
      auVar1 = vsub_q(auVar4,auVar1);
      uVar9 = vdot_t(auVar1._0_12_,auVar1._0_12_);
      fVar10 = (float)vsqrt_s(uVar9);
      if (iVar6 != 0) {
        local_98[0] = local_98[0] * 0.8;
      }
      if (fVar10 < local_98[0]) {
        cVar7 = '\x02';
        if (param_4 != (float *)0x0) {
          *param_4 = fVar10;
        }
        iVar6 = 0xff;
      }
    }
    if (cVar7 != '\0') {
      fVar8 = *(float *)(*(int *)(param_1 + 0x1a0) + 0x344) +
              *(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 4) + DAT_08abd0c4;
      param_2[1] = fVar8;
      fVar10 = (float)FUN_0889d788();
      if (fVar8 < fVar10) {
        uVar9 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        *local_30 = *param_2;
        local_30[1] = uVar9;
        local_30[2] = uVar2;
        local_30[3] = uVar3;
        (**(code **)(DAT_08b00404 + 0x4c))
                  ((int)&DAT_08b00400 + (int)*(short *)(DAT_08b00404 + 0x48));
        iVar5 = FUN_0881a83c(0x3fbf2700,&DAT_08b00430,0);
        if (iVar5 == 0) {
          *(undefined *)(param_1 + 0xa14) = 1;
        }
      }
    }
  }
  return iVar6;
}

