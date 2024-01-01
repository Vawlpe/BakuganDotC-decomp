#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08940f04(int *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 in_V7C;
  
  iVar2 = param_1[1];
  bVar1 = true;
  if ((iVar2 != 0) && (param_1[2] != 0)) {
    if (param_2 != '\0') {
      *param_1 = 0;
      *(undefined4 *)(iVar2 + 0xbc) = 0;
      return bVar1;
    }
    iVar3 = *param_1 + 1;
    *param_1 = iVar3;
    fVar4 = 1.0;
    if (0x13 >= iVar3) {
      fVar4 = (float)*param_1 * 0.05;
    }
    *(float *)(iVar2 + 0xbc) = fVar4;
    iVar2 = *param_1;
    fVar4 = 1.0;
    if (iVar2 < 0x10) {
      fVar4 = (float)iVar2 * 0.04166667 - 1.0;
      uVar5 = vmul_s((1.0 - fVar4 * fVar4) * 3.141593,in_V7C);
      fVar4 = (float)vcos_s(uVar5);
      fVar4 = (1.0 - fVar4) * 0.5;
    }
    bVar1 = iVar2 >= 0x10 && 0x13 < iVar3;
    *(float *)(param_1[1] + 0x60) =
         (float)(int)*(short *)param_1[2] + (float)param_1[4] * (1.0 - fVar4);
  }
  return bVar1;
}

