#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e4f6c(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [36];
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    auVar2._24_12_ = *(undefined (*) [12])(puVar3 + 8);
    auVar2._20_4_ = puVar3[6];
    auVar2._16_4_ = puVar3[5];
    auVar2._12_4_ = puVar3[4];
    auVar2._8_4_ = puVar3[2];
    auVar2._4_4_ = puVar3[1];
    auVar2._0_4_ = *puVar3;
    auVar1 = vtfm3_t(auVar2,*(undefined (*) [12])
                             (*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_2 + 6) * 0x10));
    return auVar1._4_4_ < 0.9;
  }
  return *(float *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_2 + 6) * 0x10 + 4) < 0.9;
}

