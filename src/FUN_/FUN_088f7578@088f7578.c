#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f7578(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  float fVar3;
  float fVar4;
  undefined4 in_V7D;
  undefined8 uVar5;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  if (*(int *)(param_1 + 0x94) != 2) {
    *(undefined4 *)(param_1 + 0x13c) = 0x3fc00000;
    auVar1 = vscl_t(***(undefined (***) [12])(param_1 + 0x104),
                    1.0 - *(float *)(*(int *)(param_1 + 0x104) + 0x20));
    auVar2 = vscl_t(**(undefined (**) [12])(*(int *)(param_1 + 0x104) + 4),
                    *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x20));
    auVar1 = vadd_t(auVar1,auVar2);
    local_80 = auVar1._0_4_;
    uStack_7c = auVar1._4_4_;
    uStack_78 = auVar1._8_4_;
    if (*(float *)(*(int *)(param_1 + 0x104) + 0x24) < *(float *)(param_1 + 0x130)) {
      uVar5 = __extendsfdf2(*(undefined4 *)(param_1 + 0x130));
      uVar5 = pow((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x40000000);
      fVar3 = (float)FUN_08a0efb8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar5 = __extendsfdf2(*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x24));
      uVar5 = pow((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x40000000);
      fVar4 = (float)FUN_08a0efb8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar5 = __extendsfdf2(fVar3 - fVar4);
      uVar5 = sqrt((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      fVar3 = (float)FUN_08a0efb8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      auVar2 = vscl_t(*(undefined (*) [12])(*(int *)(param_1 + 0x104) + 0x10),-fVar3);
      auVar1 = vadd_t(auVar1,auVar2);
      local_80 = auVar1._0_4_;
      uStack_7c = auVar1._4_4_;
      uStack_78 = auVar1._8_4_;
    }
    *(undefined4 *)(param_1 + 0x40) = local_80;
    *(undefined4 *)(param_1 + 0x44) = uStack_7c;
    *(undefined4 *)(param_1 + 0x48) = uStack_78;
    *(undefined4 *)(param_1 + 0x4c) = in_V7D;
    if ((*(int *)(param_1 + 0x104) == 0) || (*(char *)(**(int **)(param_1 + 0x104) + 0x61) != '\0'))
    {
      FUN_088fca60(param_1);
    }
  }
  return;
}

