#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e7fdc(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  uVar1 = *param_2;
  fVar2 = (float)param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  iVar5 = 0;
  if (0 < param_1[9]) {
    iVar6 = 0;
    fVar8 = fVar2;
    do {
      puVar7 = (undefined4 *)(*param_1 + iVar6);
      *puVar7 = uVar1;
      puVar7[1] = fVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      *(float *)(*param_1 + iVar6 + 4) = fVar8;
      puVar7 = (undefined4 *)(param_1[2] + iVar6);
      *puVar7 = uVar1;
      puVar7[1] = fVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      *(float *)(param_1[2] + iVar6 + 4) = fVar8;
      puVar7 = (undefined4 *)(param_1[1] + iVar6);
      *puVar7 = in_V72;
      puVar7[1] = in_V76;
      puVar7[2] = in_V7A;
      puVar7[3] = in_V7E;
      fVar8 = fVar8 + 0.0001;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar5 < param_1[9]);
  }
  return;
}

