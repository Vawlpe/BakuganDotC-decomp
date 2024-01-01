#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ba19c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar16 = CONCAT44(param_2,param_1);
  iVar14 = 0;
  if ((int)param_2 < 0x100000) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      uVar1 = FUN_08a0eb10(0,0xc3500000,0,0);
      return uVar1;
    }
    if ((int)param_2 < 0) {
      uVar1 = FUN_08a0eb10(0,0,0,0);
      return uVar1;
    }
    iVar14 = -0x36;
    lVar16 = __muldf3(param_1,param_2,0,0x43500000);
  }
  uVar13 = (uint)((ulonglong)lVar16 >> 0x20);
  if (0x7fefffffffffffff < lVar16) {
    uVar1 = __adddf3((int)lVar16,uVar13);
    return uVar1;
  }
  uVar15 = uVar13 & 0xfffff;
  uVar12 = uVar15 + 0x95f64 & 0x100000;
  iVar14 = iVar14 + ((int)uVar13 >> 0x14) + -0x3ff + ((int)uVar12 >> 0x14);
  uVar17 = __subdf3((int)lVar16,uVar15 | uVar12 ^ 0x3ff00000,0,0x3ff00000);
  uVar5 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar1 = (undefined4)uVar17;
  if (2 < (uVar15 + 2 & 0xfffff)) {
    uVar17 = __adddf3(uVar1,uVar5,0,0x40000000);
    uVar17 = FUN_08a0eb10(uVar1,uVar5,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar6 = (undefined4)uVar17;
    uVar17 = FUN_08a0ed90(iVar14);
    uVar9 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar7 = (undefined4)uVar17;
    uVar17 = __muldf3(uVar6,uVar8,uVar6,uVar8);
    uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar3 = (undefined4)uVar17;
    uVar17 = __muldf3(uVar3,uVar10,uVar3,uVar10);
    uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar4 = (undefined4)uVar17;
    uVar17 = __muldf3(uVar4,uVar11,0xd078c69f,0x3fc39a09);
    uVar17 = __adddf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0x1d8e78af,0x3fcc71c5);
    uVar17 = __muldf3(uVar4,uVar11,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    uVar17 = __adddf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0x9997fa04,0x3fd99999);
    uVar17 = __muldf3(uVar4,uVar11,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    uVar18 = __muldf3(uVar4,uVar11,0xdf3e5244,0x3fc2f112);
    uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x96cb03de,0x3fc74664);
    uVar18 = __muldf3(uVar4,uVar11,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x94229359,0x3fd24924);
    uVar18 = __muldf3(uVar4,uVar11,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x55555593,0x3fe55555);
    uVar18 = __muldf3(uVar3,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar17 = __adddf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                      (int)((ulonglong)uVar18 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if (0 < (int)(uVar15 - 0x6147a | 0x6b851 - uVar15)) {
      uVar18 = __muldf3(uVar1,uVar5,0,0x3fe00000);
      uVar18 = __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar1,uVar5);
      uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar4 = (undefined4)uVar18;
      uVar17 = __adddf3((int)uVar17,uVar3,uVar4,uVar10);
      uVar17 = __muldf3(uVar6,uVar8,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
      if (iVar14 == 0) {
        uVar17 = __subdf3(uVar4,uVar10,(int)uVar17,uVar6);
        uVar1 = __subdf3(uVar1,uVar5,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      }
      else {
        uVar18 = __muldf3(uVar7,uVar9,0xfee00000,0x3fe62e42);
        uVar19 = __muldf3(uVar7,uVar9,0x35793c76,0x3dea39ef);
        uVar17 = __adddf3((int)uVar17,uVar6,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
        uVar17 = __subdf3(uVar4,uVar10,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        uVar17 = __subdf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar1,uVar5);
        uVar1 = __subdf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                         (int)((ulonglong)uVar17 >> 0x20));
      }
      return uVar1;
    }
    uVar17 = __subdf3(uVar1,uVar5,(int)uVar17,uVar3);
    uVar17 = __muldf3(uVar6,uVar8,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if (iVar14 == 0) {
      uVar1 = __subdf3(uVar1,uVar5,(int)uVar17,uVar6);
    }
    else {
      uVar18 = __muldf3(uVar7,uVar9,0xfee00000,0x3fe62e42);
      uVar19 = __muldf3(uVar7,uVar9,0x35793c76,0x3dea39ef);
      uVar17 = __subdf3((int)uVar17,uVar6,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
      uVar17 = __subdf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar1,uVar5);
      uVar1 = __subdf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                       (int)((ulonglong)uVar17 >> 0x20));
    }
    return uVar1;
  }
  iVar2 = FUN_08a0ed34(uVar1,uVar5,0,0);
  if (iVar2 == 0) {
    if (iVar14 == 0) {
      return 0;
    }
    uVar17 = FUN_08a0ed90(iVar14);
    uVar1 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar18 = __muldf3((int)uVar17,uVar1,0xfee00000,0x3fe62e42);
    uVar17 = __muldf3((int)uVar17,uVar1,0x35793c76,0x3dea39ef);
    uVar1 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                     (int)((ulonglong)uVar17 >> 0x20));
    return uVar1;
  }
  uVar17 = __muldf3(uVar1,uVar5,uVar1,uVar5);
  uVar18 = __muldf3(uVar1,uVar5,0x55555555,0x3fd55555);
  uVar18 = __subdf3(0,0x3fe00000,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                    (int)((ulonglong)uVar18 >> 0x20));
  uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
  if (iVar14 == 0) {
    uVar1 = __subdf3(uVar1,uVar5,(int)uVar17,uVar6);
    return uVar1;
  }
  uVar18 = FUN_08a0ed90(iVar14);
  uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar19 = __muldf3((int)uVar18,uVar7,0xfee00000,0x3fe62e42);
  uVar18 = __muldf3((int)uVar18,uVar7,0x35793c76,0x3dea39ef);
  uVar17 = __subdf3((int)uVar17,uVar6,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar17 = __subdf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar1,uVar5);
  uVar1 = __subdf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,
                   (int)((ulonglong)uVar17 >> 0x20));
  return uVar1;
}

