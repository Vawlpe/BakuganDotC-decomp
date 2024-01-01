#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e3a50(int param_1,ushort *param_2,int param_3,float *param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined (*pauVar5) [12];
  float fVar6;
  float fVar7;
  
  pauVar5 = (undefined (*) [12])(*(int *)(param_1 + 0xc) + (uint)param_2[3] * 0x10);
  fVar6 = (float)vdot_t(*pauVar5,*(undefined (*) [12])(param_3 + 0x20));
  if (fVar6 < -0.0001) {
    fVar7 = (float)vdot_t(*pauVar5,*(undefined (*) [12])(param_3 + 0x10));
    fVar6 = (*(float *)pauVar5[1] - fVar7) / fVar6;
    if ((0.0 <= fVar6) && (fVar6 < *param_4)) {
      auVar3._4_4_ = fVar6;
      auVar3._0_4_ = fVar6;
      auVar3._8_4_ = fVar6;
      auVar3 = vmul_t(*(undefined (*) [12])(param_3 + 0x20),auVar3);
      DAT_08af839c = *(undefined4 *)(param_3 + 0x1c);
      auVar3 = vadd_t(*(undefined (*) [12])(param_3 + 0x10),auVar3);
      DAT_08af8390 = auVar3._0_4_;
      DAT_08af8394 = auVar3._4_4_;
      DAT_08af8398 = auVar3._8_4_;
      auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 4) + (uint)param_2[2] * 0x10),auVar3)
      ;
      auVar2 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 4) + (uint)param_2[1] * 0x10),auVar3)
      ;
      auVar3 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 4) + (uint)*param_2 * 0x10),auVar3);
      auVar4 = vcrsp_t(auVar2,auVar3);
      auVar3 = vcrsp_t(auVar3,auVar1);
      fVar7 = (float)vdot_t(auVar4,auVar3);
      if (0.0 <= fVar7) {
        auVar3 = vcrsp_t(auVar1,auVar2);
        fVar7 = (float)vdot_t(auVar4,auVar3);
        if (0.0 <= fVar7) {
          *param_4 = fVar6;
          return 1;
        }
      }
    }
  }
  return 0;
}

