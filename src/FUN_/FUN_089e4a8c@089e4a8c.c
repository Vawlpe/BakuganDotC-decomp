#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e4a8c(int param_1,ushort *param_2,int param_3,float *param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 in_V7D;
  undefined4 uVar9;
  undefined4 local_80 [4];
  undefined auStack_70 [80];
  
  local_80[0] = 0;
  uVar5 = 0;
  iVar4 = FUN_089e48e0(*(int *)(param_1 + 0xc) + (uint)param_2[3] * 0x10,param_3,local_80,auStack_70
                      );
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 4);
    DAT_08af8388 = FUN_089e41b8(iVar4 + (uint)*param_2 * 0x10,iVar4 + (uint)param_2[1] * 0x10,
                                iVar4 + (uint)param_2[2] * 0x10,auStack_70,&DAT_08af8390);
    auVar2 = vneg_t(*(undefined (*) [12])(param_3 + 0x30));
    uVar6 = vdot_t(auVar2,auVar2);
    uVar9 = vcmp_s(8,uVar6,auVar2._0_4_);
    vrsq_s(uVar6);
    uVar6 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar2,uVar6);
    auVar2._8_4_ = DAT_08af8398;
    auVar2._4_4_ = DAT_08af8394;
    auVar2._0_4_ = DAT_08af8390;
    auVar2 = vsub_t(auVar2,*(undefined (*) [12])(param_3 + 0x20));
    fVar8 = (float)vdot_t(auVar2,auVar1);
    fVar7 = (float)vdot_t(auVar2,auVar2);
    fVar7 = fVar7 - *(float *)(param_3 + 0x2c);
    if ((fVar7 <= 0.0) || (fVar8 <= 0.0)) {
      fVar7 = fVar8 * fVar8 - fVar7;
      if (fVar7 < 0.0) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        *param_4 = -fVar8 - SQRT(fVar7);
      }
    }
    else {
      bVar3 = false;
    }
    if (((bVar3) && (*param_4 < *(float *)(param_3 + 0x3c))) && (*param_4 < DAT_08b002a0)) {
      DAT_08af838c = local_80[0];
      uVar5 = 1;
    }
  }
  return uVar5;
}

