#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_0881d8d8(int param_1,int param_2,int *param_3,ushort *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_V7F;
  
  iVar2 = *param_3;
  if ((int)(uint)*(byte *)(param_4 + 1) <= iVar2) {
    return 0.0;
  }
  uVar4 = (int)(uint)*param_4 >> (iVar2 * 3 & 0x1fU) & 7;
  pfVar3 = (float *)(param_2 + iVar2 * 4);
  iVar1 = iVar2 + 1;
  if (uVar4 < 3) {
    if (1 < uVar4) {
      fVar5 = *pfVar3;
      *param_3 = iVar1;
      fVar6 = *(float *)(param_2 + iVar1 * 4);
      *param_3 = iVar2 + 2;
      uVar7 = vrndf1_s();
      fVar8 = (float)vsub_s(uVar7,in_V7F);
      return fVar5 + (fVar6 - fVar5) * fVar8;
    }
    fVar5 = *pfVar3;
  }
  else {
    if (uVar4 == 4) {
      fVar5 = *(float *)(param_1 + (int)*pfVar3 * 4 + 0x1d0);
      *param_3 = iVar1;
      return fVar5;
    }
    fVar5 = *pfVar3;
  }
  *param_3 = iVar1;
  return fVar5;
}

