#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08887710(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 20.0;
  iVar2 = 0;
  iVar1 = 6;
  if (param_1 < 0x20) {
    if (0x1a < param_1) {
      if (param_1 < 0x1d) {
        iVar2 = 3;
        fVar4 = 50.0;
      }
      else if (param_1 < 0x1f) {
        iVar2 = 3;
        fVar4 = 0.0;
      }
      else {
        iVar2 = 3;
        fVar4 = 30.0;
      }
    }
  }
  else if (param_1 < 0xaa) {
    if (param_1 == 0xa7) {
      fVar4 = 150.0;
    }
  }
  else if (param_1 < 0xac) {
    fVar4 = 10.0;
  }
  if (iVar2 == 3) {
    iVar1 = param_1 + -0x1a;
  }
  fVar3 = (float)FUN_0888746c(fVar4,iVar2,iVar1,param_2,param_3);
  return fVar4 * fVar3;
}

