#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a06b78(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_v1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_v1_00;
  undefined4 extraout_v1_01;
  undefined4 extraout_v1_02;
  undefined4 extraout_v1_03;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_64;
  uint local_60;
  
  uVar9 = param_4 & 0x7fffffff;
  uVar15 = param_2 & 0x7fffffff;
  if ((uVar9 | param_3) == 0) {
    return 0;
  }
  if (((0x7ff00000 < uVar15) || (((uVar15 == 0x7ff00000 && (param_1 != 0)) || (0x7ff00000 < uVar9)))
      ) || ((uVar9 == 0x7ff00000 && (param_3 != 0)))) {
    uVar9 = __adddf3(param_1,param_2,param_3,param_4);
    return uVar9;
  }
  uVar10 = 0;
  if ((int)param_2 < 0) {
    if (uVar9 < 0x43400000) {
      if (0x3fefffff < uVar9) {
        iVar6 = ((int)uVar9 >> 0x14) + -0x3ff;
        if (iVar6 < 0x15) {
          if (param_3 != 0) goto LAB_08a06ecc;
          uVar1 = (int)uVar9 >> (0x14U - iVar6 & 0x1f);
          if (uVar1 << (0x14U - iVar6 & 0x1f) == uVar9) {
            uVar10 = 2 - (uVar1 & 1);
          }
        }
        else {
          uVar1 = param_3 >> (0x34U - iVar6 & 0x1f);
          if (uVar1 << (0x34U - iVar6 & 0x1f) == param_3) {
            uVar10 = 2 - (uVar1 & 1);
          }
        }
      }
    }
    else {
      uVar10 = 2;
    }
  }
  if (param_3 == 0) {
    if (uVar9 == 0x7ff00000) {
      if ((uVar15 + 0xc0100000 | param_1) == 0) {
        uVar9 = 0;
      }
      else if (uVar15 < 0x3ff00000) {
        if ((int)param_4 < 0) {
          uVar9 = __negdf2(0,param_4);
        }
        else {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 0;
      }
      return uVar9;
    }
    if (uVar9 == 0x3ff00000) {
      if ((int)param_4 < 0) {
        param_1 = FUN_08a0eb10(0,0x3ff00000,param_1,param_2);
      }
      return param_1;
    }
    if (param_4 == 0x40000000) {
      uVar9 = __muldf3(param_1,param_2,param_1,param_2);
      return uVar9;
    }
    if ((param_4 == 0x3fe00000) && (-1 < (int)param_2)) {
      uVar9 = FUN_08a08bb0(param_1,param_2);
      return uVar9;
    }
  }
LAB_08a06ecc:
  uVar16 = fabs(param_1,param_2);
  uVar1 = (uint)uVar16;
  uVar17 = CONCAT44(param_2,uVar1) & 0x7fffffffffffffff;
  if ((param_1 == 0) && (((uVar15 == 0x7ff00000 || (uVar15 == 0)) || (uVar15 == 0x3ff00000)))) {
    if ((int)param_4 < 0) {
      uVar1 = FUN_08a0eb10(0,0x3ff00000);
    }
    if ((int)param_2 < 0) {
      if ((uVar15 + 0xc0100000 | uVar10) == 0) {
        uVar1 = FUN_08a0eb10(0,0,0,0);
      }
      else if (uVar10 == 1) {
        uVar1 = __negdf2();
      }
    }
    return uVar1;
  }
  local_60 = 0xffffffff - ((int)param_2 >> 0x1f);
  if ((local_60 | uVar10) == 0) {
    uVar9 = FUN_08a0eb10(0,0,0,0);
    return uVar9;
  }
  if (uVar9 < 0x41e00001) {
    iVar6 = 0;
    if (uVar15 < 0x100000) {
      uVar17 = __muldf3(uVar1,(int)((ulonglong)uVar16 >> 0x20),0,0x43400000);
      iVar6 = -0x35;
    }
    uVar9 = (uint)(uVar17 >> 0x20);
    local_70 = (undefined4)uVar17;
    iVar6 = iVar6 + ((int)uVar9 >> 0x14);
    uVar9 = uVar9 & 0xfffff;
    iVar7 = iVar6 + -0x3ff;
    uVar15 = uVar9 | 0x3ff00000;
    if (uVar9 < 0x3988f) {
      uVar11 = 0x3ff00000;
      local_7c = 0;
      iVar8 = ((int)uVar15 >> 1 | 0x20000000U) + 0x80000;
      local_80 = 0;
      uVar16 = FUN_08a0ed90(iVar7);
      uVar13 = 0;
      uVar12 = 0;
    }
    else if (uVar9 < 0xbb67a) {
      uVar11 = 0x3ff80000;
      local_7c = 0x3e4cfdeb;
      iVar8 = ((int)uVar15 >> 1 | 0x20000000U) + 0xc0000;
      local_80 = 0x43cfd006;
      uVar16 = FUN_08a0ed90(iVar7);
      uVar13 = 0x3fe2b803;
      uVar12 = 0x40000000;
    }
    else {
      uVar11 = 0x3ff00000;
      uVar15 = uVar15 - 0x100000;
      local_7c = 0;
      iVar8 = ((int)uVar15 >> 1 | 0x20000000U) + 0x80000;
      local_80 = 0;
      uVar16 = FUN_08a0ed90(iVar6 + -0x3fe);
      uVar13 = 0;
      uVar12 = 0;
    }
    uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar18 = __subdf3(local_70,uVar15,0,uVar11);
    uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = __adddf3(local_70,uVar15,0,uVar11);
    uVar19 = FUN_08a0eb10(0,0x3ff00000,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar4 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = __muldf3((int)uVar18,uVar3,(int)uVar19,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uVar2 = (undefined4)uVar20;
    uVar20 = __subdf3(0,iVar8,0,uVar11);
    uVar20 = __subdf3(local_70,uVar15,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar21 = __muldf3(0,uVar5,0,iVar8);
    uVar18 = __subdf3((int)uVar18,uVar3,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
    uVar20 = __muldf3(0,uVar5,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar18 = __subdf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar20,
                      (int)((ulonglong)uVar20 >> 0x20));
    uVar18 = __muldf3((int)uVar19,uVar4,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = __muldf3(uVar2,uVar5,uVar2,uVar5);
    uVar4 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar11 = (undefined4)uVar19;
    uVar19 = __muldf3(uVar11,uVar4,uVar11,uVar4);
    uVar20 = __muldf3(uVar11,uVar4,0x4a454eef,0x3fca7e28);
    uVar20 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x93c9db65,0x3fcd864a);
    uVar20 = __muldf3(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0xa91d4101,0x3fd17460);
    uVar20 = __muldf3(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x518f264d,0x3fd55555);
    uVar20 = __muldf3(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0xdb6fabff,0x3fdb6db6);
    uVar20 = __muldf3(uVar11,uVar4,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0x33333303,0x3fe33333);
    uVar19 = __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                      (int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __adddf3(uVar2,uVar5,0,uVar5);
    uVar20 = __muldf3((int)uVar18,uVar3,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar19 = __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                      (int)((ulonglong)uVar20 >> 0x20));
    uVar11 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = __muldf3(0,uVar5,0,uVar5);
    uVar4 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uVar21 = __adddf3((int)uVar20,uVar4,0,0x40080000);
    __adddf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar19,uVar11);
    uVar21 = __subdf3(0,extraout_v1_00,0,0x40080000);
    uVar20 = __subdf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar20,uVar4);
    uVar19 = __subdf3((int)uVar19,uVar11,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __muldf3(0,uVar5,0,extraout_v1_00);
    uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uVar18 = __muldf3((int)uVar18,uVar3,0,extraout_v1_00);
    uVar19 = __muldf3(uVar2,uVar5,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,
                      (int)((ulonglong)uVar19 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    __adddf3((int)uVar20,uVar11,(int)uVar18,uVar2);
    uVar19 = __subdf3(0,extraout_v1_01,(int)uVar20,uVar11);
    uVar18 = __subdf3((int)uVar18,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar19 = __muldf3(0,extraout_v1_01,0xe0000000,0x3feec709);
    uVar11 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = __muldf3(0,extraout_v1_01,0x145b01f5,0xbe3e2fe0);
    uVar18 = __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0xdc3a03fd,0x3feec709);
    uVar18 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar18,
                      (int)((ulonglong)uVar18 >> 0x20));
    uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),local_80,local_7c);
    uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar20 = __adddf3((int)uVar19,uVar11,(int)uVar18,uVar2);
    uVar20 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar12,uVar13);
    __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar16,uVar14);
    uVar16 = __subdf3(0,extraout_v1_02,(int)uVar16,uVar14);
    uVar16 = __subdf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar12,uVar13);
    uVar16 = __subdf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar19,uVar11);
    uVar16 = __subdf3((int)uVar18,uVar2,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),param_3,param_4);
    uVar11 = extraout_v1_02;
  }
  else {
    if (0x43f00000 < uVar9) {
      if (uVar15 < 0x3ff00000) {
        return 0;
      }
      if (0x3fefffff < uVar15) {
        return 0;
      }
    }
    if (uVar15 < 0x3fefffff) {
      return 0;
    }
    if (0x3ff00000 < uVar15) {
      return 0;
    }
    uVar16 = __subdf3(param_1,param_2,0,0x3ff00000);
    uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar11 = (undefined4)uVar16;
    uVar16 = __muldf3(uVar11,uVar12,uVar11,uVar12);
    uVar18 = __muldf3(uVar11,uVar12,0,0x3fd00000);
    uVar18 = __subdf3(0x55555555,0x3fd55555,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = __muldf3(uVar11,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = __subdf3(0,0x3fe00000,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar18,
                      (int)((ulonglong)uVar18 >> 0x20));
    uVar18 = __muldf3(uVar11,uVar12,0x60000000,0x3ff71547);
    uVar13 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = __muldf3(uVar11,uVar12,0xf85ddf44,0x3e54ae0b);
    uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x652b82fe,0x3ff71547);
    uVar16 = __subdf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar16,
                      (int)((ulonglong)uVar16 >> 0x20));
    uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
    __adddf3((int)uVar18,uVar13,(int)uVar16,uVar11);
    uVar18 = __subdf3(0,extraout_v1,(int)uVar18,uVar13);
    uVar16 = __subdf3((int)uVar16,uVar11,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),param_3,param_4);
    uVar11 = extraout_v1;
  }
  local_74 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_78 = (undefined4)uVar16;
  local_60 = local_60 | uVar10 - 1;
  local_64 = 0x3ff00000;
  if (local_60 == 0) {
    local_64 = 0xbff00000;
  }
  uVar16 = __subdf3(param_3,param_4,0,param_4);
  uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,uVar11);
  uVar16 = __adddf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),local_78,local_74);
  uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar12 = (undefined4)uVar16;
  uVar16 = __muldf3(0,uVar11,0,param_4);
  uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar11 = (undefined4)uVar16;
  lVar22 = __adddf3(uVar11,uVar2,uVar12,uVar13);
  uVar15 = (uint)((ulonglong)lVar22 >> 0x20);
  uVar9 = (uint)lVar22;
  if (lVar22 < 0x4090000000000000) {
    if (0x4090cbff < (uVar15 & 0x7fffffff)) {
      if ((uVar15 + 0x3f6f3400 | uVar9) != 0) {
        uVar16 = __muldf3(0,local_64,0xc2f8f359,0x1a56e1f);
        uVar9 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0xc2f8f359,0x1a56e1f);
        return uVar9;
      }
      uVar18 = __subdf3(uVar9,uVar15,uVar11,uVar2);
      iVar6 = FUN_08a0ed34(uVar12,uVar13,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
      if (iVar6 < 1) {
        uVar16 = __muldf3(0,local_64,0xc2f8f359,0x1a56e1f);
        uVar9 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0xc2f8f359,0x1a56e1f);
        return uVar9;
      }
    }
  }
  else {
    if ((uVar15 + 0xbf700000 | uVar9) != 0) {
      uVar16 = __muldf3(0,local_64,0x8800759c,0x7e37e43c);
      uVar9 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x8800759c,0x7e37e43c);
      return uVar9;
    }
    uVar18 = __adddf3(uVar12,uVar13,0x652b82fe,0x3c971547);
    uVar19 = __subdf3(uVar9,uVar15,uVar11,uVar2);
    iVar6 = FUN_08a0ed34((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,
                         (int)((ulonglong)uVar19 >> 0x20));
    if (0 < iVar6) {
      uVar16 = __muldf3(0,local_64,0x8800759c,0x7e37e43c);
      uVar9 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x8800759c,0x7e37e43c);
      return uVar9;
    }
  }
  iVar6 = 0;
  if (0x3fe00000 < (uVar15 & 0x7fffffff)) {
    uVar15 = uVar15 + (0x100000 >> (((int)(uVar15 & 0x7fffffff) >> 0x14) - 0x3feU & 0x1f));
    uVar9 = ((int)(uVar15 & 0x7fffffff) >> 0x14) - 0x3ff;
    iVar6 = (int)(uVar15 & 0xfffff | 0x100000) >> (0x14 - uVar9 & 0x1f);
    if (lVar22 < 0) {
      iVar6 = -iVar6;
    }
    uVar16 = __subdf3(uVar11,uVar2,0,uVar15 & ~(0xfffff >> (uVar9 & 0x1f)));
  }
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  __adddf3((int)uVar16,uVar11,uVar12,uVar13);
  uVar18 = __muldf3(0,extraout_v1_03,0,0x3fe62e43);
  uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar16 = __subdf3(0,extraout_v1_03,(int)uVar16,uVar11);
  uVar16 = __subdf3(uVar12,uVar13,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0xfefa39ef,0x3fe62e42);
  uVar19 = __muldf3(0,extraout_v1_03,0xca86c39,0xbe205c61);
  uVar16 = __adddf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar19,
                    (int)((ulonglong)uVar19 >> 0x20));
  uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar19 = __adddf3((int)uVar18,uVar2,(int)uVar16,uVar12);
  uVar13 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar11 = (undefined4)uVar19;
  uVar18 = __subdf3(uVar11,uVar13,(int)uVar18,uVar2);
  uVar16 = __subdf3((int)uVar16,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar18 = __muldf3(uVar11,uVar13,uVar11,uVar13);
  uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar12 = (undefined4)uVar18;
  uVar18 = __muldf3(uVar12,uVar3,0x72bea4d0,0x3e663769);
  uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0xc5d26bf1,0xbebbbd41);
  uVar18 = __muldf3(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0xaf25de2c,0x3f11566a);
  uVar18 = __muldf3(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x16bebd93,0xbf66c16c);
  uVar18 = __muldf3(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x5555553e,0x3fc55555);
  uVar18 = __muldf3(uVar12,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar18 = __subdf3(uVar11,uVar13,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar12 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar19 = __muldf3((int)uVar18,uVar12,uVar11,uVar13);
  uVar18 = __subdf3((int)uVar18,uVar12,0,0x40000000);
  uVar18 = FUN_08a0eb10((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,
                        (int)((ulonglong)uVar18 >> 0x20));
  uVar19 = __muldf3((int)uVar16,uVar2,uVar11,uVar13);
  uVar16 = __adddf3((int)uVar16,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
  uVar16 = __subdf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar16,
                    (int)((ulonglong)uVar16 >> 0x20));
  uVar16 = __subdf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar11,uVar13);
  uVar16 = __subdf3(0,0x3ff00000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  iVar8 = iVar7 + iVar6 * 0x100000;
  if (iVar8 >> 0x14 < 1) {
    uVar16 = scalbn((int)uVar16,iVar7,iVar6);
    uVar9 = __muldf3(0,local_64,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  }
  else {
    uVar9 = __muldf3(0,local_64,(int)uVar16,iVar8);
  }
  return uVar9;
}

