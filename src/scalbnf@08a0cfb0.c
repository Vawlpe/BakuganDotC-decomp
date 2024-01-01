#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float scalbnf(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = (int)((uint)param_1 & 0x7f800000) >> 0x17;
  if (iVar1 == 0) {
    if (((uint)param_1 & 0x7fffffff) == 0) {
      return param_1;
    }
    param_1 = param_1 * 3.355443e+07;
    iVar1 = ((int)((uint)param_1 & 0x7f800000) >> 0x17) + -0x19;
    if (param_2 < -50000) {
      return param_1 * 1e-30;
    }
  }
  iVar2 = iVar1 + param_2;
  if (iVar1 == 0xff) {
    return param_1 + param_1;
  }
  if (0xfe < iVar2) {
    fVar3 = (float)copysignf(0x7149f2ca,param_1);
    return fVar3 * 1e+30;
  }
  if (0 < iVar2) {
    return (float)((uint)param_1 & 0x807fffff | iVar2 * 0x800000);
  }
  if (-0x19 < iVar2) {
    return (float)((uint)param_1 & 0x807fffff | (iVar2 + 0x19) * 0x800000) * 2.980232e-08;
  }
  if (param_2 < 0xc351) {
    fVar3 = (float)copysignf(0xda24260,param_1);
    fVar3 = fVar3 * 1e-30;
  }
  else {
    fVar3 = (float)copysignf(0x7149f2ca,param_1);
    fVar3 = fVar3 * 1e+30;
  }
  return fVar3;
}

