#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fc408(undefined4 param_1,float param_2,int param_3,undefined (*param_4) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined (*pauVar6) [12];
  float fVar7;
  
  uVar5 = DAT_08abfd3c;
  uVar4 = DAT_08abfd38;
  uVar3 = DAT_08abfd34;
  pauVar6 = (undefined (*) [12])(param_3 + 0x20);
  if (*(char *)(*(int *)(param_3 + 4) + 0x4a) != '\0') {
    *(undefined4 *)*pauVar6 = DAT_08abfd30;
    *(undefined4 *)(param_3 + 0x24) = uVar3;
    *(undefined4 *)(param_3 + 0x28) = uVar4;
    *(undefined4 *)(param_3 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = *(undefined4 *)(param_3 + 0x48);
    uVar5 = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)*param_4 = *(undefined4 *)*(undefined (*) [12])(param_3 + 0x40);
    *(undefined4 *)(*param_4 + 4) = uVar3;
    *(undefined4 *)(*param_4 + 8) = uVar4;
    *(undefined4 *)param_4[1] = uVar5;
    return;
  }
  auVar1 = vsub_t(*(undefined (*) [12])(param_3 + 0x40),*param_4);
  fVar7 = *(float *)(param_3 + 0x10) / (param_2 * 2.0);
  fVar7 = fVar7 * fVar7;
  *(float *)(param_3 + 0xc) = fVar7;
  auVar1 = vscl_t(auVar1,fVar7);
  auVar2 = vscl_t(*pauVar6,*(undefined4 *)(param_3 + 0x10));
  auVar1 = vsub_t(auVar1,auVar2);
  auVar1 = vscl_t(auVar1,param_1);
  uVar3 = *(undefined4 *)(param_3 + 0x2c);
  auVar1 = vadd_t(*pauVar6,auVar1);
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(param_3 + 0x24) = auVar1._4_4_;
  *(int *)(param_3 + 0x28) = auVar1._8_4_;
  *(undefined4 *)(param_3 + 0x2c) = uVar3;
  return;
}

