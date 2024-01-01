#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dd910(float param_1,float param_2,float param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  undefined auVar1 [16];
  ushort uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_40 [4];
  
  pfVar4 = local_40;
  if (param_5 == param_6) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (param_1 - param_2) / (param_3 - param_2);
  }
  uVar2 = *(ushort *)(param_4 + 8) & 0xf;
  if ((*(ushort *)(param_4 + 8) & 0xf) != 0) {
    if (uVar2 == 1) {
      auVar1 = vsub_q(*(undefined (*) [16])(param_6 + 4),*(undefined (*) [16])(param_5 + 4));
      auVar1 = vscl_q(auVar1,fVar5);
      vadd_q(*(undefined (*) [16])(param_5 + 4),auVar1);
    }
    else if (uVar2 == 2) {
      FUN_089dac50(param_5,param_6);
    }
    else if (uVar2 == 4) {
      FUN_089dd850(fVar5,param_5,param_6);
    }
    else {
      iVar3 = 0;
      if (param_7 != '\0') {
        do {
          fVar5 = (float)FUN_089dada0(param_2,param_2 + *(float *)(param_5 + 0x10),
                                      param_3 + *(float *)(param_6 + 8),param_3,param_1);
          fVar6 = 1.0 - fVar5;
          fVar7 = fVar6 * fVar6 * fVar5 * 3.0;
          fVar8 = fVar6 * fVar5 * fVar5 * 3.0;
          *pfVar4 = *(float *)(param_5 + 4) * (fVar6 * fVar6 * fVar6 + fVar7) +
                    *(float *)(param_5 + 0x14) * fVar7 + *(float *)(param_6 + 0xc) * fVar8 +
                    *(float *)(param_6 + 4) * (fVar5 * fVar5 * fVar5 + fVar8);
          param_5 = param_5 + 0x14;
          param_6 = param_6 + 0x14;
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 1;
        } while (iVar3 < 4);
      }
    }
  }
  return;
}

