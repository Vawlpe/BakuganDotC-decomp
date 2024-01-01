#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a67c8(int *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 in_V7C;
  uint auStack_5f [20];
  
  puVar9 = (undefined4 *)FUN_089f7110(DAT_08af7fa0,*param_1,0);
  *param_1 = (int)puVar9;
  *puVar9 = 0xdf0000a2;
  puVar9[1] = 0xe0000000;
  puVar9[2] = 0xe1ffffff;
  *param_1 = (int)(puVar9 + 3);
  if (DAT_08af7fa4 == 0) {
    DAT_08af7fa4 = 1;
    DAT_08af7fb4 = 0;
    DAT_08af7fb0 = -4.0;
    DAT_08af7fbc = 0;
  }
  if (DAT_08af7fa8 == 0) {
    DAT_08af7fa8 = 1;
    DAT_08af7fc0 = 0;
    DAT_08af7fc8 = 0x3f800000;
    DAT_08af7fc4 = 0x40400000;
    DAT_08af7fcc = 0;
  }
  DAT_08af7fb8 = param_2[1];
  auVar5 = vmidt_q();
  uVar16 = vmul_s(0x3fc90fdb,in_V7C);
  auVar6 = vrot_q(uVar16,1,0,3,0);
  auVar3 = vidt_q();
  auVar7 = vrot_q(uVar16,2,0,1,0);
  auVar4 = vidt_q();
  auVar8._4_4_ = auVar5._16_4_;
  auVar8._0_4_ = DAT_08af7fc0;
  auVar8._8_4_ = auVar5._32_4_;
  auVar8._12_4_ = auVar5._48_4_;
  auVar8._16_4_ = auVar5._4_4_;
  auVar8._20_4_ = DAT_08af7fc4;
  auVar8._24_4_ = auVar5._36_4_;
  auVar8._28_4_ = auVar5._52_4_;
  auVar8._32_4_ = auVar5._8_4_;
  auVar8._36_4_ = auVar5._24_4_;
  auVar8._40_4_ = DAT_08af7fc8;
  auVar8._44_4_ = auVar5._56_4_;
  auVar8._48_4_ = DAT_08af7fb0 - *param_2;
  auVar8._52_4_ = DAT_08af7fb4;
  auVar8._56_4_ = DAT_08af7fb8;
  auVar8._60_4_ = DAT_08af7fbc;
  auVar5._48_16_ = auVar4;
  auVar5._44_4_ = auVar7._12_4_;
  auVar5._40_4_ = auVar7._8_4_;
  auVar5._36_4_ = auVar7._4_4_;
  auVar5._32_4_ = auVar7._0_4_;
  auVar5._28_4_ = auVar3._12_4_;
  auVar5._24_4_ = auVar3._8_4_;
  auVar5._20_4_ = auVar3._4_4_;
  auVar5._16_4_ = auVar3._0_4_;
  auVar5._12_4_ = auVar6._12_4_;
  auVar5._8_4_ = auVar6._8_4_;
  auVar5._4_4_ = auVar6._4_4_;
  auVar5._0_4_ = auVar6._0_4_;
  vmmul_q(auVar8,auVar5);
  puVar9 = (undefined4 *)*param_1;
  *puVar9 = 0x40000000;
  uVar1 = (uint)auStack_5f & 3;
  uVar10 = -1 << (4 - uVar1) * 8 & 0x41000000U | *(uint *)((int)auStack_5f - uVar1) >> uVar1 * 8;
  uVar1 = (uint)(auStack_5f + 1) & 3;
  uVar12 = -1 << (4 - uVar1) * 8 & 0x41000000U |
           *(uint *)((int)(auStack_5f + 1) - uVar1) >> uVar1 * 8;
  uVar1 = (uint)(auStack_5f + 2) & 3;
  uVar14 = -1 << (4 - uVar1) * 8 & 0x41000000U |
           *(uint *)((int)(auStack_5f + 2) - uVar1) >> uVar1 * 8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar12;
  puVar9[3] = uVar14;
  uVar1 = (uint)(auStack_5f + 4) & 3;
  uVar10 = uVar10 & -1 << (4 - uVar1) * 8 | *(uint *)((int)(auStack_5f + 4) - uVar1) >> uVar1 * 8;
  uVar1 = (uint)(auStack_5f + 5) & 3;
  uVar12 = uVar12 & -1 << (4 - uVar1) * 8 | *(uint *)((int)(auStack_5f + 5) - uVar1) >> uVar1 * 8;
  uVar1 = (uint)(auStack_5f + 6) & 3;
  uVar14 = uVar14 & -1 << (4 - uVar1) * 8 | *(uint *)((int)(auStack_5f + 6) - uVar1) >> uVar1 * 8;
  puVar9[4] = uVar10;
  puVar9[5] = uVar12;
  puVar9[6] = uVar14;
  uVar1 = (uint)(auStack_5f + 8) & 3;
  uVar11 = uVar10 & -1 << (4 - uVar1) * 8 | *(uint *)((int)(auStack_5f + 8) - uVar1) >> uVar1 * 8;
  uVar1 = (uint)(auStack_5f + 9) & 3;
  uVar13 = uVar12 & -1 << (4 - uVar1) * 8 | *(uint *)((int)(auStack_5f + 9) - uVar1) >> uVar1 * 8;
  uVar1 = (uint)(auStack_5f + 10) & 3;
  uVar15 = uVar14 & -1 << (4 - uVar1) * 8 | *(uint *)((int)(auStack_5f + 10) - uVar1) >> uVar1 * 8;
  puVar9[7] = uVar11;
  puVar9[8] = uVar13;
  puVar9[9] = uVar15;
  uVar1 = (uint)(auStack_5f + 0xc) & 3;
  uVar10 = (uint)(auStack_5f + 0xd) & 3;
  uVar14 = *(uint *)((int)(auStack_5f + 0xd) - uVar10);
  uVar12 = (uint)(auStack_5f + 0xe) & 3;
  uVar2 = *(uint *)((int)(auStack_5f + 0xe) - uVar12);
  puVar9[10] = uVar11 & -1 << (4 - uVar1) * 8 |
               *(uint *)((int)(auStack_5f + 0xc) - uVar1) >> uVar1 * 8;
  puVar9[0xb] = uVar13 & -1 << (4 - uVar10) * 8 | uVar14 >> uVar10 * 8;
  puVar9[0xc] = uVar15 & -1 << (4 - uVar12) * 8 | uVar2 >> uVar12 * 8;
  *param_1 = (int)(puVar9 + 0xd);
  puVar9[0xd] = 0xcf000000;
  *(undefined4 *)(*param_1 + 4) = 0x493f8000;
  *(undefined4 *)(*param_1 + 8) = 0x483f8000;
  *(undefined4 *)(*param_1 + 0xc) = 0xde000002;
  *(undefined4 *)(*param_1 + 0x10) = 0xc0000001;
  *param_1 = *param_1 + 0x14;
  return;
}

