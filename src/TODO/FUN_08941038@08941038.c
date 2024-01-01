#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08941038(int *param_1,char param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  iVar3 = param_1[1];
  bVar2 = true;
  if ((iVar3 != 0) && (param_1[2] != 0)) {
    if (param_2 != '\0') {
      *param_1 = 0;
      return bVar2;
    }
    fVar7 = 0.0;
    iVar4 = *param_1 + 1;
    *param_1 = iVar4;
    if (0x13 >= iVar4) {
      fVar7 = 1.0 - (float)*param_1 * 0.05;
    }
    if (param_1[5] == 1) {
      *(float *)(iVar3 + 0xbc) = *(float *)(iVar3 + 0xbc) * fVar7;
      iVar5 = *param_1;
      sVar1 = *(short *)param_1[2];
      iVar3 = param_1[1];
      iVar6 = param_1[4];
    }
    else {
      *(float *)(iVar3 + 0xbc) = fVar7;
      iVar5 = *param_1;
      sVar1 = *(short *)param_1[2];
      iVar3 = param_1[1];
      iVar6 = param_1[4];
    }
    fVar7 = 0.0;
    if (iVar5 < 0x18) {
      fVar7 = 1.0 - (float)iVar5 * 0.04166667;
      uVar8 = vmul_s(fVar7 * fVar7 * 3.141593,in_V7C);
      fVar7 = (float)vcos_s(uVar8);
      fVar7 = (1.0 - fVar7) * 0.5;
    }
    bVar2 = iVar5 >= 0x18 && 0x13 < iVar4;
    *(float *)(iVar3 + 0x60) = (float)(int)sVar1 + (float)iVar6 * (1.0 - fVar7);
  }
  return bVar2;
}

