#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f2e84(undefined4 param_1,float *param_2,float *param_3,undefined (*param_4) [16],
                 undefined4 param_5,undefined4 param_6)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = FUN_089f1308();
  uVar3 = FUN_089f202c(uVar3,param_6,1,1);
  puVar4 = (uint *)FUN_089f7110(param_5,uVar3,0);
  auVar1._4_4_ = param_3[1] + param_2[1];
  auVar1._0_4_ = *param_3 + *param_2;
  auVar1._8_4_ = param_3[2] + *param_2;
  auVar1._12_4_ = param_3[3] + param_2[1];
  auVar1 = vf2iz_q(auVar1,0);
  auVar2 = vf2iz_q(*param_4,0);
  puVar6 = puVar4 + 2;
  puVar5 = puVar4 + 7;
  *puVar4 = ((uint)puVar5 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  puVar4[1] = (uint)puVar5 & 0xffffff | 0x8000000;
  *(short *)puVar6 = auVar2._0_2_;
  *(short *)((int)puVar4 + 10) = auVar2._4_2_;
  *(short *)((int)puVar4 + 0x12) = auVar2._8_2_;
  *(short *)(puVar4 + 5) = auVar2._12_2_;
  *(short *)(puVar4 + 3) = auVar1._0_2_;
  *(short *)((int)puVar4 + 0xe) = auVar1._4_2_;
  *(short *)((int)puVar4 + 0x16) = auVar1._8_2_;
  *(short *)(puVar4 + 6) = auVar1._12_2_;
  *(undefined2 *)((int)puVar4 + 0x1a) = 0;
  *(undefined2 *)(puVar4 + 4) = 0;
  *puVar5 = 0x12800102;
  puVar5 = puVar4 + 8;
  if (puVar6 != (uint *)0x0) {
    *puVar5 = ((uint)puVar6 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar4[9] = (uint)puVar6 & 0xffffff | 0x1000000;
    puVar5 = puVar4 + 10;
  }
  *puVar5 = 0x4060002;
  FUN_089f13c8(param_1,puVar5 + 1);
  return;
}

