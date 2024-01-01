#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0cf4(int *param_1,int param_2,char param_3)

{
  undefined auVar1 [16];
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined4 uVar8;
  int local_840 [512];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  piVar2 = local_840;
  piVar6 = local_840;
  if ((param_2 != 0) && (DAT_08ac5c66 == '\0')) {
    local_40 = *(undefined4 *)(DAT_08ac5c90 + 0x50);
    uStack_3c = *(undefined4 *)(DAT_08ac5c90 + 0x54);
    uStack_38 = *(undefined4 *)(DAT_08ac5c90 + 0x58);
    uStack_34 = *(undefined4 *)(DAT_08ac5c90 + 0x5c);
    *(undefined4 *)*param_1 = 0xc6000707;
    *(undefined4 *)(*param_1 + 4) = 0xc7000000;
    local_30 = 0x3f4ccccd;
    *(undefined4 *)(*param_1 + 8) = 0xd03f4ccc;
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0xc) = 0xc8880002;
    *param_1 = iVar4 + 0x10;
    if (param_3 == '\0') {
      if (DAT_08ac5bec == '\0') {
        fVar7 = *(float *)(param_2 + 0x6c);
        while( true ) {
          if (1.0 <= fVar7) {
            (**(code **)(*(int *)(param_2 + 0x14) + 0x44))
                      (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x40),param_1);
            param_2 = *(int *)(param_2 + 4);
          }
          else {
            param_2 = *(int *)(param_2 + 4);
          }
          if (param_2 == 0) break;
          fVar7 = *(float *)(param_2 + 0x6c);
        }
      }
      else {
        DAT_08ac5bf0 = 2;
        iVar4 = param_2;
        do {
          if (1.0 <= *(float *)(iVar4 + 0x6c)) {
            (**(code **)(*(int *)(iVar4 + 0x14) + 0x44))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x40),param_1);
            iVar4 = *(int *)(iVar4 + 4);
          }
          else {
            iVar4 = *(int *)(iVar4 + 4);
          }
        } while (iVar4 != 0);
        DAT_08ac5bf0 = 1;
        fVar7 = *(float *)(param_2 + 0x6c);
        while( true ) {
          if (1.0 <= fVar7) {
            (**(code **)(*(int *)(param_2 + 0x14) + 0x44))
                      (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x40),param_1);
            param_2 = *(int *)(param_2 + 4);
          }
          else {
            param_2 = *(int *)(param_2 + 4);
          }
          if (param_2 == 0) break;
          fVar7 = *(float *)(param_2 + 0x6c);
        }
        DAT_08ac5bf0 = 0;
      }
    }
    else {
      fVar7 = *(float *)(param_2 + 0x6c);
      iVar4 = 0;
      while( true ) {
        if (1.0 <= fVar7) {
          auVar1._4_4_ = uStack_3c;
          auVar1._0_4_ = local_40;
          auVar1._8_4_ = uStack_38;
          auVar1._12_4_ = uStack_34;
          auVar1 = vsub_q(auVar1,*(undefined (*) [16])(*(int *)(param_2 + 0x130) + 0xb0));
          uVar8 = vdot_t(auVar1._0_12_,auVar1._0_12_);
          *(undefined4 *)((int)piVar2 + 4) = uVar8;
          iVar5 = iVar4 + 1;
          piVar2 = (int *)((int)piVar2 + 8);
          local_840[iVar4 * 2] = param_2;
          param_2 = *(int *)(param_2 + 4);
        }
        else {
          param_2 = *(int *)(param_2 + 4);
          iVar5 = iVar4;
        }
        if (param_2 == 0) break;
        fVar7 = *(float *)(param_2 + 0x6c);
        iVar4 = iVar5;
      }
      if (iVar5 != 0) {
        FUN_089bf03c(local_840,iVar5);
        iVar4 = 0;
        if (0 < iVar5) {
          do {
            iVar3 = *(int *)(*piVar6 + 0x14);
            (**(code **)(iVar3 + 0x44))(*piVar6 + (int)*(short *)(iVar3 + 0x40),param_1);
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 2;
          } while (iVar4 < iVar5);
        }
      }
    }
  }
  return;
}

