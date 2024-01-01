#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 FUN_08a0d7f0(uint param_1,uint param_2,uint param_3,uint param_4)

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
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
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
      uVar4 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_3 >> iVar2] + iVar2);
      if (uVar4 == 0) {
        param_2 = param_2 - param_3;
        uVar4 = 1;
        uVar6 = param_3 >> 0x10;
        uVar8 = param_3 & 0xffff;
      }
      else {
        param_3 = param_3 << (uVar4 & 0x1f);
        uVar6 = param_3 >> 0x10;
        uVar3 = param_2 >> (0x20 - uVar4 & 0x1f);
        uVar5 = uVar3 / uVar6;
        uVar8 = param_3 & 0xffff;
        uVar7 = param_2 << (uVar4 & 0x1f) | param_1 >> (0x20 - uVar4 & 0x1f);
        param_1 = param_1 << (uVar4 & 0x1f);
        if (uVar6 == 0) {
          trap(7);
        }
        uVar9 = uVar5 * uVar8;
        uVar4 = uVar3 % uVar6 << 0x10 | uVar7 >> 0x10;
        uVar3 = uVar5;
        if (uVar4 < uVar9) {
          uVar4 = uVar4 + param_3;
          uVar3 = uVar5 - 1;
          if (uVar4 < param_3) goto LAB_08a0db40;
          if (uVar4 < uVar9) {
            uVar3 = uVar5 - 2;
            uVar4 = uVar4 + param_3;
            goto LAB_08a0db40;
          }
          uVar4 = uVar4 - uVar9;
        }
        else {
LAB_08a0db40:
          uVar4 = uVar4 - uVar9;
        }
        uVar5 = uVar4 / uVar6;
        if (uVar6 == 0) {
          trap(7);
        }
        uVar9 = uVar5 * uVar8;
        param_2 = uVar4 % uVar6 << 0x10 | uVar7 & 0xffff;
        uVar4 = uVar5;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          uVar4 = uVar5 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar9)) {
            uVar4 = uVar5 - 2;
            param_2 = param_2 + param_3;
          }
        }
        uVar4 = uVar3 << 0x10 | uVar4;
        param_2 = param_2 - uVar9;
      }
      uVar7 = param_2 / uVar6;
      if (uVar6 == 0) {
        trap(7);
      }
      uVar9 = uVar7 * uVar8;
      uVar5 = param_2 % uVar6 << 0x10 | param_1 >> 0x10;
      uVar3 = uVar7;
      if (uVar5 < uVar9) {
        uVar5 = uVar5 + param_3;
        uVar3 = uVar7 - 1;
        if (uVar5 < param_3) goto LAB_08a0da58;
        if (uVar5 < uVar9) {
          uVar3 = uVar7 - 2;
          uVar5 = uVar5 + param_3;
          goto LAB_08a0da58;
        }
        uVar5 = uVar5 - uVar9;
      }
      else {
LAB_08a0da58:
        uVar5 = uVar5 - uVar9;
      }
      uVar7 = uVar5 / uVar6;
      if (uVar6 == 0) {
        trap(7);
      }
      uVar8 = uVar7 * uVar8;
      uVar6 = uVar5 % uVar6 << 0x10 | param_1 & 0xffff;
      if (uVar6 < uVar8) {
        uVar6 = uVar6 + param_3;
        uVar7 = uVar7 - 1;
        if (param_3 <= uVar6) {
          uVar7 = uVar7 - (uVar6 < uVar8);
        }
      }
      uVar7 = uVar3 << 0x10 | uVar7;
      goto LAB_08a0d958;
    }
    iVar2 = 8;
    if (param_3 < 0x100) {
      iVar2 = 0;
    }
    if ((0xffff < param_3) && (iVar2 = 0x10, 0xffffff < param_3)) {
      iVar2 = 0x18;
    }
    uVar4 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_3 >> iVar2] + iVar2);
    if (uVar4 == 0) {
      uVar4 = param_3 >> 0x10;
    }
    else {
      param_2 = param_2 << (uVar4 & 0x1f) | param_1 >> (0x20 - uVar4 & 0x1f);
      param_1 = param_1 << (uVar4 & 0x1f);
      param_3 = param_3 << (uVar4 & 0x1f);
      uVar4 = param_3 >> 0x10;
    }
    uVar7 = param_2 / uVar4;
    if (uVar4 == 0) {
      trap(7);
    }
    uVar8 = uVar7 * (param_3 & 0xffff);
    uVar3 = param_2 % uVar4 << 0x10 | param_1 >> 0x10;
    uVar6 = uVar7;
    if (uVar3 < uVar8) {
      uVar3 = uVar3 + param_3;
      uVar6 = uVar7 - 1;
      if (uVar3 < param_3) goto LAB_08a0d8f4;
      if (uVar3 < uVar8) {
        uVar6 = uVar7 - 2;
        uVar3 = uVar3 + param_3;
        goto LAB_08a0d8f4;
      }
      uVar3 = uVar3 - uVar8;
    }
    else {
LAB_08a0d8f4:
      uVar3 = uVar3 - uVar8;
    }
    uVar7 = uVar3 / uVar4;
    if (uVar4 == 0) {
      trap(7);
    }
    uVar8 = uVar7 * (param_3 & 0xffff);
    uVar4 = uVar3 % uVar4 << 0x10 | param_1 & 0xffff;
    if (uVar4 < uVar8) {
      uVar4 = uVar4 + param_3;
      uVar7 = uVar7 - 1;
      if (param_3 <= uVar4) {
        uVar7 = uVar7 - (uVar4 < uVar8);
      }
    }
    uVar7 = uVar6 << 0x10 | uVar7;
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    if (param_2 < param_4) goto LAB_08a0d958;
    iVar2 = 8;
    if (param_4 < 0x100) {
      iVar2 = 0;
    }
    if ((0xffff < param_4) && (iVar2 = 0x10, 0xffffff < param_4)) {
      iVar2 = 0x18;
    }
    uVar6 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_4 >> iVar2] + iVar2);
    uVar4 = 0x20 - uVar6;
    if (uVar6 == 0) {
      uVar7 = (uint)(param_4 < param_2 || param_3 <= param_1);
    }
    else {
      uVar3 = param_4 << (uVar6 & 0x1f) | param_3 >> (uVar4 & 0x1f);
      uVar7 = uVar3 >> 0x10;
      uVar8 = param_2 >> (uVar4 & 0x1f);
      uVar5 = uVar8 / uVar7;
      uVar4 = param_2 << (uVar6 & 0x1f) | param_1 >> (uVar4 & 0x1f);
      if (uVar7 == 0) {
        trap(7);
      }
      uVar10 = uVar5 * (uVar3 & 0xffff);
      uVar9 = uVar8 % uVar7 << 0x10 | uVar4 >> 0x10;
      uVar8 = uVar5;
      if (uVar9 < uVar10) {
        uVar9 = uVar9 + uVar3;
        uVar8 = uVar5 - 1;
        if (uVar9 < uVar3) goto LAB_08a0dcc0;
        if (uVar9 < uVar10) {
          uVar8 = uVar5 - 2;
          uVar9 = uVar9 + uVar3;
          goto LAB_08a0dcc0;
        }
        uVar9 = uVar9 - uVar10;
      }
      else {
LAB_08a0dcc0:
        uVar9 = uVar9 - uVar10;
      }
      uVar5 = uVar9 / uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      uVar10 = uVar5 * (uVar3 & 0xffff);
      uVar9 = uVar9 % uVar7 << 0x10 | uVar4 & 0xffff;
      uVar7 = uVar5;
      if (uVar9 < uVar10) {
        uVar9 = uVar9 + uVar3;
        uVar7 = uVar5 - 1;
        if ((uVar3 <= uVar9) && (uVar9 < uVar10)) {
          uVar9 = uVar9 + uVar3;
          uVar7 = uVar5 - 2;
        }
      }
      uVar7 = uVar8 << 0x10 | uVar7;
      lVar1 = (ulonglong)uVar7 * (ulonglong)(param_3 << (uVar6 & 0x1f));
      uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
      if (uVar3 <= uVar9 - uVar10) {
        uVar4 = 0;
        if (uVar3 == uVar9 - uVar10 && param_1 << (uVar6 & 0x1f) < (uint)lVar1) {
          uVar7 = uVar7 - 1;
        }
        goto LAB_08a0d958;
      }
      uVar7 = uVar7 - 1;
    }
  }
  uVar4 = 0;
LAB_08a0d958:
  return CONCAT44(uVar4,uVar7);
}

