#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_0886239c(int param_1,undefined (*param_2) [12])

{
  bool bVar1;
  undefined auVar2 [12];
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_V7D;
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
  
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 2;
  fVar6 = *(float *)(*param_2 + 4);
  if (fVar6 <= -180.0) {
    fVar6 = -180.0;
  }
  *(float *)(*param_2 + 4) = fVar6;
  if (0.0 < fVar6) {
    fVar6 = (float)FUN_0889d788();
    fVar6 = *(float *)(param_1 + 0x24) - fVar6;
    if (-100.0 < fVar6) {
      *(float *)(*param_2 + 4) = *(float *)(*param_2 + 4) * fVar6 * -0.01;
    }
  }
  uVar4 = 0;
  bVar1 = (*(uint *)(param_1 + 0x144) & 0x40000000) != 0;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x40000000;
  uVar8 = vdot_t(*param_2,*param_2);
  fVar6 = (float)vsqrt_s(uVar8);
  if (*(float *)(param_1 + 0x260) * 0.8 < fVar6) {
    fVar6 = (float)(int)FLOOR(fVar6 / (*(float *)(param_1 + 0x260) * 0.8)) + 1.0;
    iVar7 = (int)fVar6;
    auVar2 = vscl_t(*param_2,1.0 / fVar6);
    local_80 = auVar2._0_4_;
    uStack_7c = auVar2._4_4_;
    uStack_78 = auVar2._8_4_;
    iVar5 = 0;
    uStack_74 = in_V7D;
    if (0 < iVar7) {
      do {
        local_70 = local_80;
        uStack_6c = uStack_7c;
        uStack_68 = uStack_78;
        uStack_64 = uStack_74;
        uVar3 = FUN_08860b24(param_1,&local_70,bVar1);
        uVar4 = (uint)((uVar4 | uVar3) != 0);
        FUN_08861e98(param_1,&local_80,bVar1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar7);
    }
  }
  else {
    local_60 = *(undefined4 *)*param_2;
    uStack_5c = *(undefined4 *)(*param_2 + 4);
    uStack_58 = *(undefined4 *)(*param_2 + 8);
    uStack_54 = *(undefined4 *)param_2[1];
    uVar4 = FUN_08860b24(param_1,&local_60,bVar1);
    FUN_08861e98(param_1,param_2,bVar1);
  }
  if ((bVar1) && ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0)) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x80000000;
  }
  return uVar4;
}

