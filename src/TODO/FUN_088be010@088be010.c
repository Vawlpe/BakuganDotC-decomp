#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088be010(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 local_50 [4];
  undefined local_40 [12];
  
  iVar6 = *param_2;
  if (iVar6 != 0) {
    local_50[0] = param_1;
    FUN_088bdf6c(local_40);
    local_50[0] = FUN_089e3014(DAT_08ac5c90,local_50[0],1);
    FUN_089e1084(param_3);
    fVar7 = *(float *)(iVar6 + 0x6c);
    while( true ) {
      if (0.0 < fVar7) {
        iVar5 = *(int *)(iVar6 + 0x130);
        uVar4 = *(undefined4 *)(iVar5 + 0xbc);
        auVar1 = vsub_t(*(undefined (*) [12])(iVar5 + 0xb0),local_40);
        *(int *)*(undefined (*) [12])(iVar5 + 0xb0) = auVar1._0_4_;
        *(int *)(iVar5 + 0xb4) = auVar1._4_4_;
        *(int *)(iVar5 + 0xb8) = auVar1._8_4_;
        *(undefined4 *)(iVar5 + 0xbc) = uVar4;
        (**(code **)(*(int *)(iVar6 + 0x14) + 0x44))
                  (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x40),local_50);
        iVar5 = *(int *)(iVar6 + 0x130);
        uVar4 = *(undefined4 *)(iVar6 + 0x24);
        uVar2 = *(undefined4 *)(iVar6 + 0x28);
        uVar3 = *(undefined4 *)(iVar6 + 0x2c);
        *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(iVar5 + 0xb4) = uVar4;
        *(undefined4 *)(iVar5 + 0xb8) = uVar2;
        *(undefined4 *)(iVar5 + 0xbc) = uVar3;
        iVar6 = *(int *)(iVar6 + 4);
      }
      else {
        iVar6 = *(int *)(iVar6 + 4);
      }
      if (iVar6 == 0) break;
      fVar7 = *(float *)(iVar6 + 0x6c);
    }
    FUN_088bdfc4(local_40);
    uVar4 = FUN_089e3014(DAT_08ac5c90,local_50[0],1);
    return uVar4;
  }
  return param_1;
}

