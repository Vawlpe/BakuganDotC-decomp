#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e6a90(int *param_1)

{
  undefined auVar1 [16];
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_V72;
  int in_V76;
  int in_V7A;
  int in_V7E;
  
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  iVar4 = 0;
  pbVar3 = &DAT_08aa33e8;
  piVar2 = param_1;
  do {
    auVar1 = vsub_q(*(undefined (*) [16])(*param_1 + (uint)pbVar3[1] * 0x10),
                    *(undefined (*) [16])(*param_1 + (uint)*pbVar3 * 0x10));
    uVar5 = vdot_t(auVar1._0_12_,auVar1._0_12_);
    iVar6 = vsqrt_s(uVar5);
    piVar2[3] = iVar6;
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 2;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x1c);
  param_1[0x41] = 0;
  param_1[0x30] = in_V72;
  param_1[0x31] = in_V76;
  param_1[0x32] = in_V7A;
  param_1[0x33] = in_V7E;
  *(undefined *)(param_1 + 0x45) = 0;
  *(undefined *)((int)param_1 + 0x115) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0x3e99999a;
  return;
}

