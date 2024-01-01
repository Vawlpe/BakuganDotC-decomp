#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_088debc4(float param_1,float param_2,int param_3,undefined (*param_4) [16],float *param_5)

{
  undefined auVar1 [16];
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined auStack_40 [20];
  
  *(undefined *)(param_3 + 0xb8) = 1;
  if ((*(int *)(DAT_08ac58c4 + 4) == 1) &&
     ((*(int *)(param_3 + 8) == 7 || (*(int *)(param_3 + 8) == 0x1f)))) {
    *param_5 = 1.0;
    return 0;
  }
  if (*(int *)(DAT_08ac5c90 + 0x2ac) == 5) {
    *param_5 = 1.0;
    return 0;
  }
  auVar1 = vsub_q(*(undefined (*) [16])(DAT_08ac5c90 + 0x50),*param_4);
  uVar4 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar5 = (float)vsqrt_s(uVar4);
  if (param_1 <= fVar5) {
    iVar2 = FUN_088e1948();
    fVar3 = fVar5;
    if (iVar2 != 0) {
      auVar1 = vsub_q(*(undefined (*) [16])(iVar2 + 0x20),*param_4);
      uVar4 = vdot_t(auVar1._0_12_,auVar1._0_12_);
      fVar3 = (float)vsqrt_s(uVar4);
      if (fVar5 <= fVar3) {
        fVar3 = fVar5;
      }
    }
    if (param_2 < fVar3) {
      *(undefined *)(param_3 + 0xb8) = 0;
      *param_5 = 0.0;
      return 1;
    }
    if (50.0 < fVar3) {
      FUN_089e34f0(DAT_08ac5c90,auStack_40,param_4);
      iVar2 = FUN_089bef68(0x42800000,auStack_40);
      if (iVar2 == 0) {
        *(undefined *)(param_3 + 0xb8) = 0;
        *param_5 = 0.0;
        return 1;
      }
    }
    if (fVar3 <= param_2 * 0.9) {
      fVar5 = *param_5;
      *param_5 = fVar5 + 0.2;
      if (1.0 < fVar5 + 0.2) {
        *param_5 = 1.0;
      }
    }
    else {
      fVar5 = *param_5;
      *param_5 = fVar5 - 0.2;
      if (fVar5 - 0.2 < 0.0) {
        *param_5 = 0.0;
      }
    }
  }
  else {
    fVar3 = *param_5;
    fVar5 = 1.0 - (param_1 - fVar5) / param_1;
    *param_5 = fVar3 - 0.2;
    if (fVar3 - 0.2 < 0.0) {
      *param_5 = 0.0;
    }
    else if (fVar5 < *param_5) {
      *param_5 = fVar5;
    }
  }
  return 0;
}

