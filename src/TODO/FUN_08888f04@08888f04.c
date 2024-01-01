#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08888f04(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x8d) == '\0') {
    iVar5 = 0;
    fVar2 = 10000.0;
    fVar7 = (float)param_2 * 100.0 + 1000.0;
    iVar4 = param_1;
    do {
      iVar1 = FUN_08888c1c(param_1,iVar5,0);
      if ((iVar1 != 0) && (uVar3 = *(uint *)(iVar4 + 0xd4), -1 < (int)uVar3)) {
        if ((int)uVar3 < 0) {
          uVar3 = -(-uVar3 & 3);
        }
        else {
          uVar3 = uVar3 & 3;
        }
        fVar6 = *(float *)(iVar4 + 0xbc) +
                fVar7 * *(float *)(*(int *)(param_1 + 0x88) + uVar3 * 0xc + 0xe8);
        *(float *)(iVar4 + 0xbc) = fVar6;
        if (fVar2 < fVar6) {
          *(float *)(iVar4 + 0xbc) = fVar2;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 2);
  }
  return;
}

