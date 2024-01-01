#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 FUN_08a061ec(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = param_2 & 0x7fffffff;
  if (0x3fefffff < uVar4) {
    if ((uVar4 + 0xc0100000 | param_1) == 0) {
      if ((int)param_2 < 1) {
        uVar2 = 0x400921fb;
        uVar1 = 0x54442d18;
      }
      else {
        uVar2 = 0;
        uVar1 = 0;
      }
      return CONCAT44(uVar2,uVar1);
    }
    uVar5 = FUN_08a0eb10(0,0,0,0);
    return uVar5;
  }
  if (0x3fdfffff < uVar4) {
    if ((int)param_2 < 0) {
      uVar5 = __adddf3(param_1,param_2,0,0x3ff00000);
      uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x3fe00000);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar1 = (undefined4)uVar5;
      uVar5 = __muldf3(uVar1,uVar2,0xdfdf709,0x3f023de1);
      uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x7501b288,0x3f49efe0);
      uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xb5688f3b,0xbfa48228);
      uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe884455,0x3fc9c155);
      uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x3eb6f7d,0xbfd4d612);
      uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x55555555,0x3fc55555);
      uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar6 = __muldf3(uVar1,uVar2,0xb12e9282,0x3fb3b8c5);
      uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1b8d0159,0xbfe6066c);
      uVar6 = __muldf3(uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x9c598ac8,0x40002ae5);
      uVar6 = __muldf3(uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1c8a2d4b,0xc0033a27);
      uVar6 = __muldf3(uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x3ff00000);
      uVar7 = FUN_08a08bb0(uVar1,uVar2);
      uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar5 = FUN_08a0eb10((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                           (int)((ulonglong)uVar6 >> 0x20));
      uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar7,uVar1);
      uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x33145c07,0x3c91a626);
      uVar5 = __adddf3((int)uVar7,uVar1,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x40000000);
      uVar5 = __subdf3(0x54442d18,0x400921fb,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      return uVar5;
    }
    uVar5 = __subdf3(0,0x3ff00000,param_1,param_2);
    uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x3fe00000);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar1 = (undefined4)uVar5;
    uVar5 = FUN_08a08bb0(uVar1,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar6 = __muldf3(0,uVar3,0,uVar3);
    uVar6 = __subdf3(uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar7 = __adddf3(0,uVar3,(int)uVar5,uVar3);
    uVar6 = FUN_08a0eb10((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __muldf3(uVar1,uVar2,0xdfdf709,0x3f023de1);
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x7501b288,0x3f49efe0);
    uVar7 = __muldf3(uVar1,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0xb5688f3b,0xbfa48228);
    uVar7 = __muldf3(uVar1,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0xe884455,0x3fc9c155);
    uVar7 = __muldf3(uVar1,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x3eb6f7d,0xbfd4d612);
    uVar7 = __muldf3(uVar1,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x55555555,0x3fc55555);
    uVar7 = __muldf3(uVar1,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar8 = __muldf3(uVar1,uVar2,0xb12e9282,0x3fb3b8c5);
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x1b8d0159,0xbfe6066c);
    uVar8 = __muldf3(uVar1,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x9c598ac8,0x40002ae5);
    uVar8 = __muldf3(uVar1,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x1c8a2d4b,0xc0033a27);
    uVar8 = __muldf3(uVar1,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,0x3ff00000);
    uVar7 = FUN_08a0eb10((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                         (int)((ulonglong)uVar8 >> 0x20));
    uVar5 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar5,uVar3);
    uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                     (int)((ulonglong)uVar6 >> 0x20));
    uVar5 = __adddf3(0,uVar3,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x40000000);
    return uVar5;
  }
  if (0x3c600000 < uVar4) {
    uVar5 = __muldf3(param_1,param_2,param_1,param_2);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar1 = (undefined4)uVar5;
    uVar5 = __muldf3(uVar1,uVar2,0xdfdf709,0x3f023de1);
    uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x7501b288,0x3f49efe0);
    uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xb5688f3b,0xbfa48228);
    uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe884455,0x3fc9c155);
    uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x3eb6f7d,0xbfd4d612);
    uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __adddf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x55555555,0x3fc55555);
    uVar5 = __muldf3(uVar1,uVar2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar6 = __muldf3(uVar1,uVar2,0xb12e9282,0x3fb3b8c5);
    uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1b8d0159,0xbfe6066c);
    uVar6 = __muldf3(uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x9c598ac8,0x40002ae5);
    uVar6 = __muldf3(uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1c8a2d4b,0xc0033a27);
    uVar6 = __muldf3(uVar1,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x3ff00000);
    uVar5 = FUN_08a0eb10((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                         (int)((ulonglong)uVar6 >> 0x20));
    uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_1,param_2);
    uVar5 = __subdf3(0x33145c07,0x3c91a626,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __subdf3(param_1,param_2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar5 = __subdf3(0x54442d18,0x3ff921fb,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    return uVar5;
  }
  return 0x3ff921fb54442d18;
}

