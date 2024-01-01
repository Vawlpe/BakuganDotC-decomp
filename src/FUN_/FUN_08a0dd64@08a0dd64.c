#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 FUN_08a0dd64(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_20;
  uint local_1c;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar2 = 8;
      if (param_3 < 0x100) {
        iVar2 = 0;
      }
      if ((0xffff < param_3) && (iVar2 = 0x10, 0xffffff < param_3)) {
        iVar2 = 0x18;
      }
      uVar5 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_3 >> iVar2] + iVar2);
      uVar4 = param_3 >> 0x10;
      if (uVar5 != 0) {
        param_2 = param_2 << (uVar5 & 0x1f) | param_1 >> (0x20 - uVar5 & 0x1f);
        param_3 = param_3 << (uVar5 & 0x1f);
        param_1 = param_1 << (uVar5 & 0x1f);
        uVar4 = param_3 >> 0x10;
      }
      if (uVar4 == 0) {
        trap(7);
      }
      uVar8 = (param_2 / uVar4) * (param_3 & 0xffff);
      uVar3 = param_2 % uVar4 << 0x10 | param_1 >> 0x10;
      if (uVar3 < uVar8) {
        uVar3 = uVar3 + param_3;
        if (param_3 <= uVar3) {
          if (uVar3 < uVar8) {
            uVar3 = uVar3 + param_3;
          }
          goto LAB_08a0de6c;
        }
        uVar3 = uVar3 - uVar8;
      }
      else {
LAB_08a0de6c:
        uVar3 = uVar3 - uVar8;
      }
      if (uVar4 == 0) {
        trap(7);
      }
      uVar8 = (uVar3 / uVar4) * (param_3 & 0xffff);
      uVar3 = uVar3 % uVar4 << 0x10 | param_1 & 0xffff;
      if (uVar3 < uVar8) {
        uVar3 = uVar3 + param_3;
        uVar4 = uVar3 - uVar8;
        if (uVar3 < param_3) goto LAB_08a0dec8;
        if (uVar3 < uVar8) {
          uVar3 = uVar3 + param_3;
        }
      }
      uVar4 = uVar3 - uVar8;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(7);
      }
      iVar2 = 8;
      if (param_3 < 0x100) {
        iVar2 = 0;
      }
      if ((0xffff < param_3) && (iVar2 = 0x10, 0xffffff < param_3)) {
        iVar2 = 0x18;
      }
      uVar5 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_3 >> iVar2] + iVar2);
      if (uVar5 == 0) {
        param_2 = param_2 - param_3;
        uVar4 = param_3 >> 0x10;
        uVar7 = param_3 & 0xffff;
      }
      else {
        param_3 = param_3 << (uVar5 & 0x1f);
        uVar4 = param_3 >> 0x10;
        uVar8 = param_2 >> (0x20 - uVar5 & 0x1f);
        uVar7 = param_3 & 0xffff;
        uVar3 = param_2 << (uVar5 & 0x1f) | param_1 >> (0x20 - uVar5 & 0x1f);
        if (uVar4 == 0) {
          trap(7);
        }
        param_1 = param_1 << (uVar5 & 0x1f);
        uVar9 = (uVar8 / uVar4) * uVar7;
        uVar8 = uVar8 % uVar4 << 0x10 | uVar3 >> 0x10;
        if (uVar8 < uVar9) {
          uVar8 = uVar8 + param_3;
          if (param_3 <= uVar8) {
            if (uVar8 < uVar9) {
              uVar8 = uVar8 + param_3;
            }
            goto LAB_08a0e0b8;
          }
          uVar8 = uVar8 - uVar9;
        }
        else {
LAB_08a0e0b8:
          uVar8 = uVar8 - uVar9;
        }
        if (uVar4 == 0) {
          trap(7);
        }
        uVar9 = (uVar8 / uVar4) * uVar7;
        param_2 = uVar8 % uVar4 << 0x10 | uVar3 & 0xffff;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          if (param_2 < param_3) {
            param_2 = param_2 - uVar9;
            goto LAB_08a0df88;
          }
          if (param_2 < uVar9) {
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
      }
LAB_08a0df88:
      if (uVar4 == 0) {
        trap(7);
      }
      uVar8 = (param_2 / uVar4) * uVar7;
      uVar3 = param_2 % uVar4 << 0x10 | param_1 >> 0x10;
      if (uVar3 < uVar8) {
        uVar3 = uVar3 + param_3;
        if (param_3 <= uVar3) {
          if (uVar3 < uVar8) {
            uVar3 = uVar3 + param_3;
          }
          goto LAB_08a0dfdc;
        }
        uVar3 = uVar3 - uVar8;
      }
      else {
LAB_08a0dfdc:
        uVar3 = uVar3 - uVar8;
      }
      if (uVar4 == 0) {
        trap(7);
      }
      uVar7 = (uVar3 / uVar4) * uVar7;
      uVar4 = uVar3 % uVar4 << 0x10 | param_1 & 0xffff;
      if (uVar4 < uVar7) {
        uVar4 = uVar4 + param_3;
        if (param_3 <= uVar4) {
          if (uVar4 < uVar7) {
            uVar4 = uVar4 + param_3;
          }
          goto LAB_08a0e034;
        }
        uVar4 = uVar4 - uVar7;
      }
      else {
LAB_08a0e034:
        uVar4 = uVar4 - uVar7;
      }
    }
LAB_08a0dec8:
    param_2 = 0;
    param_1 = uVar4 >> (uVar5 & 0x1f);
LAB_08a0ded0:
    uVar5 = local_20;
    uVar4 = local_1c;
    if (&stack0x00000000 == (undefined *)0x20) goto LAB_08a0dee0;
  }
  else {
    uVar5 = param_1;
    uVar4 = param_2;
    if (param_2 < param_4) goto LAB_08a0dee0;
    iVar2 = 8;
    if (param_4 < 0x100) {
      iVar2 = 0;
    }
    if ((0xffff < param_4) && (iVar2 = 0x10, 0xffffff < param_4)) {
      iVar2 = 0x18;
    }
    uVar3 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_4 >> iVar2] + iVar2);
    uVar8 = 0x20 - uVar3;
    if (uVar3 == 0) {
      if (param_4 < param_2 || param_3 <= param_1) {
        param_2 = (param_2 - param_4) - (uint)(param_1 < param_1 - param_3);
        param_1 = param_1 - param_3;
      }
      goto LAB_08a0ded0;
    }
    uVar5 = param_4 << (uVar3 & 0x1f) | param_3 >> (uVar8 & 0x1f);
    uVar7 = uVar5 >> 0x10;
    uVar9 = param_2 >> (uVar8 & 0x1f);
    uVar10 = uVar9 / uVar7;
    uVar4 = param_2 << (uVar3 & 0x1f) | param_1 >> (uVar8 & 0x1f);
    if (uVar7 == 0) {
      trap(7);
    }
    param_3 = param_3 << (uVar3 & 0x1f);
    param_1 = param_1 << (uVar3 & 0x1f);
    uVar11 = uVar10 * (uVar5 & 0xffff);
    uVar6 = uVar9 % uVar7 << 0x10 | uVar4 >> 0x10;
    uVar9 = uVar10;
    if (uVar6 < uVar11) {
      uVar6 = uVar6 + uVar5;
      uVar9 = uVar10 - 1;
      if (uVar6 < uVar5) goto LAB_08a0e254;
      if (uVar6 < uVar11) {
        uVar9 = uVar10 - 2;
        uVar6 = uVar6 + uVar5;
        goto LAB_08a0e254;
      }
      uVar6 = uVar6 - uVar11;
    }
    else {
LAB_08a0e254:
      uVar6 = uVar6 - uVar11;
    }
    uVar10 = uVar6 / uVar7;
    if (uVar7 == 0) {
      trap(7);
    }
    uVar11 = uVar10 * (uVar5 & 0xffff);
    uVar7 = uVar6 % uVar7 << 0x10 | uVar4 & 0xffff;
    uVar4 = uVar10;
    if (uVar7 < uVar11) {
      uVar7 = uVar7 + uVar5;
      uVar4 = uVar10 - 1;
      if ((uVar5 <= uVar7) && (uVar7 < uVar11)) {
        uVar4 = uVar10 - 2;
        uVar7 = uVar7 + uVar5;
      }
    }
    uVar7 = uVar7 - uVar11;
    lVar1 = (ulonglong)(uVar9 << 0x10 | uVar4) * (ulonglong)param_3;
    uVar9 = (uint)lVar1;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    param_3 = uVar9 - param_3;
    if ((uVar7 < uVar4) || (uVar4 == uVar7 && param_1 < uVar9)) {
      lVar1 = CONCAT44((uVar4 - uVar5) - (uint)(uVar9 < param_3),param_3);
    }
    uVar9 = param_1 - (int)lVar1;
    uVar5 = local_20;
    uVar4 = local_1c;
    if (&stack0x00000000 == (undefined *)0x20) goto LAB_08a0dee0;
    param_2 = (uVar7 - (int)((ulonglong)lVar1 >> 0x20)) - (uint)(param_1 < uVar9);
    param_1 = param_2 << (uVar8 & 0x1f) | uVar9 >> (uVar3 & 0x1f);
    param_2 = param_2 >> (uVar3 & 0x1f);
  }
  uVar5 = param_1;
  uVar4 = param_2;
LAB_08a0dee0:
  local_1c = uVar4;
  local_20 = uVar5;
  return CONCAT44(local_1c,local_20);
}

