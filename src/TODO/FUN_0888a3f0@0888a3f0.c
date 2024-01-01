#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_0888a3f0(float param_1,float param_2,float param_3,float param_4,int param_5,
                   undefined4 *param_6,undefined (*param_7) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [12];
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined4 in_V74;
  
  iVar7 = (int)(short)(int)param_3;
  if (iVar7 - (short)(int)param_1 < 2) {
    iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
  }
  *param_6 = 0xdf000032;
  param_6[1] = 0xe0000000;
  param_6[2] = 0xe1000000;
  auVar1 = vsat0_q(*param_7);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar13 = vi2uc_q(auVar1);
  param_6[3] = uVar13 & 0xffffff | 0x55000000;
  param_6[4] = uVar13 >> 0x18 | 0x58000000;
  param_6[5] = 0x1e000001;
  param_6[6] = 0x23000000;
  param_6[7] = 0x483f8000;
  param_6[8] = 0x493f8000;
  param_6[9] = 0x4a000000;
  param_6[10] = 0x4b000000;
  puVar4 = (uint *)FUN_089f7110(*(undefined4 *)(param_5 + 0x30),param_6 + 0xb,0);
  fVar11 = *(float *)(param_5 + 0x44);
  fVar12 = (float)(int)*(float *)(param_5 + 0x40) + (float)(int)(short)(int)param_1;
  fVar9 = (float)(int)*(float *)(param_5 + 0x40) + (float)iVar7;
  fVar8 = (float)FUN_0888a158(param_5);
  fVar10 = ((fVar9 - fVar12) / fVar8) * 128.0;
  fVar8 = (float)FUN_0888a3a0(param_5);
  auVar1._4_4_ = (float)(int)fVar11 + (float)(int)(short)(int)param_2;
  auVar1._0_4_ = fVar12;
  auVar1._8_4_ = fVar9;
  auVar1._12_4_ = (float)(int)fVar11 + (float)(int)(short)(int)param_4;
  auVar1 = vf2iz_q(auVar1,0);
  auVar3._4_8_ = 0;
  auVar3._0_4_ = fVar10 * (*(float *)(param_5 + 0x70) / fVar8);
  auVar2._12_4_ = 0x41800000;
  auVar2._0_12_ = auVar3 << 0x40;
  auVar2 = vf2iz_q(auVar2,0);
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
  puVar5[1] = 0x1e000000;
  puVar5[2] = 0x483f8000;
  puVar5[3] = 0x493f8000;
  puVar5[4] = 0x4a000000;
  puVar5[5] = 0x4b000000;
  return puVar5 + 6;
}

