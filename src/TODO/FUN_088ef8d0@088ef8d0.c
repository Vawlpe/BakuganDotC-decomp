#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088ef8d0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 in_V7C;
  
  fVar1 = (float)param_1 * 6.283185 * 1.525902e-05;
  fVar2 = -(fVar1 - 1.570796);
  if (3.141593 < fVar2) {
    fVar2 = fVar2 - 6.283185;
  }
  else if (fVar2 <= -3.141593) {
    fVar2 = fVar2 + 6.283185;
  }
  uVar3 = vmul_s(fVar2,in_V7C);
  fVar2 = (float)vcos_s(uVar3);
  if (0.0 < fVar2) {
    fVar1 = -(fVar1 - 1.570796);
    if (3.141593 < fVar1) {
      fVar1 = fVar1 - 6.283185;
    }
    else if (fVar1 <= -3.141593) {
      fVar1 = fVar1 + 6.283185;
    }
    uVar3 = vmul_s(fVar1,in_V7C);
    fVar1 = (float)vcos_s(uVar3);
    return (int)(short)(int)(fVar1 * 4096.0 + 0.5);
  }
  fVar1 = -(fVar1 - 1.570796);
  if (3.141593 < fVar1) {
    fVar1 = fVar1 - 6.283185;
  }
  else if (fVar1 <= -3.141593) {
    fVar1 = fVar1 + 6.283185;
  }
  uVar3 = vmul_s(fVar1,in_V7C);
  fVar1 = (float)vcos_s(uVar3);
  return (int)(short)(int)(fVar1 * 4096.0 - 0.5);
}

