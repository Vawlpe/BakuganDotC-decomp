#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8
FUN_08a0b888(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (((param_2 & 0x7fffffff) < 0x3e400000) && (iVar1 = FUN_08a0ee6c(param_1,param_2), iVar1 == 0))
  {
    return CONCAT44(param_2,param_1);
  }
  uVar7 = __muldf3(param_1,param_2,param_1,param_2);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = __muldf3(param_1,param_2,uVar2,uVar4);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  uVar7 = __muldf3(uVar2,uVar4,0x5acfd57c,0x3de5d93a);
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x8a2b9ceb,0xbe5ae5e6);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x57b1fe7d,0x3ec71de3);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x19c161d5,0xbf2a01a0);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x1110f8a6,0x3f811111);
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_5 == 0) {
    uVar7 = __muldf3((int)uVar7,uVar6,uVar2,uVar4);
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x55555549,0xbfc55555);
    uVar7 = __muldf3(uVar3,uVar5,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __adddf3(param_1,param_2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  }
  else {
    uVar8 = __muldf3(param_3,param_4,0,0x3fe00000);
    uVar7 = __muldf3((int)uVar7,uVar6,uVar3,uVar5);
    uVar7 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                     (int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_3,param_4);
    uVar8 = __muldf3(uVar3,uVar5,0x55555549,0xbfc55555);
    uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                     (int)((ulonglong)uVar8 >> 0x20));
    uVar7 = __subdf3(param_1,param_2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  }
  return uVar7;
}

