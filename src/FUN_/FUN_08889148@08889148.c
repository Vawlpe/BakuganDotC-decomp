#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08889148(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  uVar2 = *(uint *)(param_1 + 0xe0);
  if (uVar2 != 0xffffffff) {
    iVar3 = 0;
    iVar4 = param_1;
    do {
      if ((*(uint *)(iVar4 + 0xd4) == uVar2) && (10000.0 <= *(float *)(iVar4 + 0xbc))) {
        fVar5 = 1.0;
        if ((int)uVar2 < 0) {
          uVar2 = -(-uVar2 & 3);
        }
        else {
          uVar2 = uVar2 & 3;
        }
        fVar6 = 1.0;
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x88) + uVar2 * 0xc + 0xe4);
        iVar3 = FUN_08886d3c(0x3f800000,param_1,0x13);
        if (iVar3 != 0) {
          fVar6 = fVar5 + 0.5;
        }
        iVar3 = FUN_08886d3c(param_1,0x14);
        if (iVar3 != 0) {
          fVar6 = fVar6 + fVar5;
        }
        iVar3 = FUN_0888906c(param_1);
        if (iVar3 != 0) {
          uVar1 = FUN_088890d8(param_1);
          *(undefined4 *)(iVar4 + 0xe8) = uVar1;
          uVar1 = FUN_088890d8(param_1);
          iVar3 = FUN_08889104(param_1);
          FUN_088887f8(param_1,uVar1,(int)((float)iVar3 * fVar6));
        }
        *(undefined4 *)(iVar4 + 200) = uVar7;
        *(undefined4 *)(iVar4 + 0xbc) = 0;
        *(undefined4 *)(param_1 + 0x100) = 0;
        return;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 3);
  }
  return;
}

