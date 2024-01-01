#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 FUN_08a0a804(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = param_2 & 0x7fffffff;
  if ((uVar6 < 0x3e400000) && (iVar1 = FUN_08a0ee6c(param_1,param_2), iVar1 == 0)) {
    return 0x3ff0000000000000;
  }
  uVar7 = __muldf3(param_1,param_2,param_1,param_2);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = __muldf3(uVar2,uVar4,0xbe8838d4,0xbda8fae9);
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0xbdb4b1c4,0x3e21ee9e);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x809c52ad,0xbe927e4f);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x19cb1590,0x3efa01a0);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x16c15177,0xbf56c16c);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x5555554c,0x3fa55555);
  uVar7 = __muldf3(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar8 = __muldf3(uVar2,uVar4,0,0x3fe00000);
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar3 = (undefined4)uVar8;
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2,uVar4);
  uVar8 = __muldf3(param_1,param_2,param_3,param_4);
  uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                   (int)((ulonglong)uVar8 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (0x3fd33332 < uVar6) {
    if (uVar6 < 0x3fe90001) {
      uVar8 = __subdf3(uVar3,uVar5,0,uVar6 - 0x200000);
      uVar9 = __subdf3(0,0x3ff00000,0,uVar6 - 0x200000);
    }
    else {
      uVar8 = __subdf3(uVar3,uVar5,0,0x3fd20000);
      uVar9 = __subdf3(0,0x3ff00000,0,0x3fd20000);
    }
    uVar7 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,uVar2);
    uVar7 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar7,
                     (int)((ulonglong)uVar7 >> 0x20));
    return uVar7;
  }
  uVar7 = __subdf3(uVar3,uVar5,(int)uVar7,uVar2);
  uVar7 = __subdf3(0,0x3ff00000,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  return uVar7;
}

