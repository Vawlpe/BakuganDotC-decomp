#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint scalbn(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  iVar2 = (int)(param_2 & 0x7ff00000) >> 0x14;
  if (iVar2 == 0) {
    if ((param_1 | param_2 & 0x7fffffff) == 0) {
      return param_1;
    }
    uVar5 = __muldf3(param_1,param_2,0,0x43500000);
    uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
    iVar2 = ((int)(uVar1 & 0x7ff00000) >> 0x14) + -0x36;
    if (param_3 < -50000) {
      uVar1 = __muldf3((int)uVar5,uVar1,0xc2f8f359,0x1a56e1f);
      return uVar1;
    }
  }
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  iVar3 = iVar2 + param_3;
  if (iVar2 == 0x7ff) {
    uVar1 = __adddf3(uVar1,uVar4,uVar1,uVar4);
    return uVar1;
  }
  if (0x7fe < iVar3) {
    uVar5 = copysign(0x8800759c,0x7e37e43c,uVar1,uVar4);
    uVar1 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x8800759c,0x7e37e43c);
    return uVar1;
  }
  if (0 < iVar3) {
    return uVar1;
  }
  if (iVar3 < -0x35) {
    if (param_3 < 0xc351) {
      uVar5 = copysign(0xc2f8f359,0x1a56e1f,uVar1,uVar4);
      uVar1 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xc2f8f359,0x1a56e1f);
    }
    else {
      uVar5 = copysign(0x8800759c,0x7e37e43c,uVar1,uVar4);
      uVar1 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x8800759c,0x7e37e43c);
    }
    return uVar1;
  }
  uVar1 = __muldf3(uVar1,uVar4 & 0x800fffff | (iVar3 + 0x36) * 0x100000,0,0x3c900000);
  return uVar1;
}

