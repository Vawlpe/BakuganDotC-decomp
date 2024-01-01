#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890e874(int param_1,int param_2,undefined4 param_3,int param_4,char param_5,int param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  if (param_5 == '\0') {
    fVar2 = (float)FUN_089f4944(param_2);
    fVar3 = (float)FUN_089f494c(param_2);
    FUN_089f4924(fVar2 * 1.1,fVar3 * 1.1,param_2);
    uVar1 = FUN_089f7720("cus_mi_bo_1");
    *(undefined4 *)(param_2 + 0xd4) = uVar1;
    fVar2 = (float)FUN_089f4944(param_3);
    fVar3 = (float)FUN_089f494c(param_3);
    FUN_089f4924(fVar2 * 1.1,fVar3 * 1.1,param_3);
    fVar2 = (float)FUN_089f4944(param_4);
    fVar3 = (float)FUN_089f494c(param_4);
    FUN_089f4924(fVar2 * 1.1,fVar3 * 1.1,param_4);
    *(uint *)(param_4 + 0xd0) = *(uint *)(param_4 + 0xd0) | 1;
    if (param_6 != -1) {
      *(undefined4 *)(param_4 + 0x60) = *(undefined4 *)(param_1 + param_6 * 4 + 0x88);
    }
  }
  else {
    fVar2 = (float)FUN_089f4944(param_2);
    fVar3 = (float)FUN_089f494c(param_2);
    FUN_089f4924(fVar2 * 0.9090909,fVar3 * 0.9090909,param_2);
    uVar1 = FUN_089f7720("cus_mi_bo_2");
    *(undefined4 *)(param_2 + 0xd4) = uVar1;
    fVar2 = (float)FUN_089f4944(param_3);
    fVar3 = (float)FUN_089f494c(param_3);
    FUN_089f4924(fVar2 * 0.9090909,fVar3 * 0.9090909,param_3);
    fVar2 = (float)FUN_089f4944(param_4);
    fVar3 = (float)FUN_089f494c(param_4);
    FUN_089f4924(fVar2 * 0.9090909,fVar3 * 0.9090909,param_4);
    *(uint *)(param_4 + 0xd0) = *(uint *)(param_4 + 0xd0) & 0xfffffffe;
  }
  return;
}

