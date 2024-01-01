#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 FUN_08a0d21c(uint param_1,uint param_2,uint param_3,uint param_4)

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
  
  uVar8 = 0;
  if ((int)param_2 < 0) {
    param_1 = -param_1;
    param_2 = -(uint)(param_1 != 0) - param_2;
    uVar8 = 0xffffffff;
  }
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
    uVar8 = ~uVar8;
  }
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
        uVar5 = 1;
        uVar7 = param_3 >> 0x10;
        uVar9 = param_3 & 0xffff;
      }
      else {
        param_3 = param_3 << (uVar4 & 0x1f);
        uVar7 = param_3 >> 0x10;
        uVar3 = param_2 >> (0x20 - uVar4 & 0x1f);
        uVar6 = uVar3 / uVar7;
        uVar9 = param_3 & 0xffff;
        uVar5 = param_2 << (uVar4 & 0x1f) | param_1 >> (0x20 - uVar4 & 0x1f);
        param_1 = param_1 << (uVar4 & 0x1f);
        if (uVar7 == 0) {
          trap(7);
        }
        uVar10 = uVar6 * uVar9;
        uVar3 = uVar3 % uVar7 << 0x10 | uVar5 >> 0x10;
        uVar4 = uVar6;
        if (uVar3 < uVar10) {
          uVar3 = uVar3 + param_3;
          uVar4 = uVar6 - 1;
          if (uVar3 < param_3) goto LAB_08a0d59c;
          if (uVar3 < uVar10) {
            uVar4 = uVar6 - 2;
            uVar3 = uVar3 + param_3;
            goto LAB_08a0d59c;
          }
          uVar3 = uVar3 - uVar10;
        }
        else {
LAB_08a0d59c:
          uVar3 = uVar3 - uVar10;
        }
        uVar6 = uVar3 / uVar7;
        if (uVar7 == 0) {
          trap(7);
        }
        uVar10 = uVar6 * uVar9;
        param_2 = uVar3 % uVar7 << 0x10 | uVar5 & 0xffff;
        uVar5 = uVar6;
        if (param_2 < uVar10) {
          param_2 = param_2 + param_3;
          uVar5 = uVar6 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar10)) {
            uVar5 = uVar6 - 2;
            param_2 = param_2 + param_3;
          }
        }
        uVar5 = uVar4 << 0x10 | uVar5;
        param_2 = param_2 - uVar10;
      }
      uVar4 = param_2 / uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      uVar10 = uVar4 * uVar9;
      uVar6 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
      uVar3 = uVar4;
      if (uVar6 < uVar10) {
        uVar6 = uVar6 + param_3;
        uVar3 = uVar4 - 1;
        if (uVar6 < param_3) goto LAB_08a0d4b4;
        if (uVar6 < uVar10) {
          uVar3 = uVar4 - 2;
          uVar6 = uVar6 + param_3;
          goto LAB_08a0d4b4;
        }
        uVar6 = uVar6 - uVar10;
      }
      else {
LAB_08a0d4b4:
        uVar6 = uVar6 - uVar10;
      }
      uVar4 = uVar6 / uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      uVar9 = uVar4 * uVar9;
      uVar7 = uVar6 % uVar7 << 0x10 | param_1 & 0xffff;
      if (uVar7 < uVar9) {
        uVar7 = uVar7 + param_3;
        uVar4 = uVar4 - 1;
        if (param_3 <= uVar7) {
          uVar4 = uVar4 - (uVar7 < uVar9);
        }
      }
      uVar4 = uVar3 << 0x10 | uVar4;
      goto LAB_08a0d398;
    }
    iVar2 = 8;
    if (param_3 < 0x100) {
      iVar2 = 0;
    }
    if ((0xffff < param_3) && (iVar2 = 0x10, 0xffffff < param_3)) {
      iVar2 = 0x18;
    }
    uVar4 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_3 >> iVar2] + iVar2);
    if (uVar4 != 0) {
      param_2 = param_2 << (uVar4 & 0x1f) | param_1 >> (0x20 - uVar4 & 0x1f);
      param_1 = param_1 << (uVar4 & 0x1f);
      param_3 = param_3 << (uVar4 & 0x1f);
    }
    uVar5 = param_3 >> 0x10;
    uVar4 = param_2 / uVar5;
    if (uVar5 == 0) {
      trap(7);
    }
    uVar9 = uVar4 * (param_3 & 0xffff);
    uVar3 = param_2 % uVar5 << 0x10 | param_1 >> 0x10;
    uVar7 = uVar4;
    if (uVar3 < uVar9) {
      uVar3 = uVar3 + param_3;
      uVar7 = uVar4 - 1;
      if (uVar3 < param_3) goto LAB_08a0d334;
      if (uVar3 < uVar9) {
        uVar7 = uVar4 - 2;
        uVar3 = uVar3 + param_3;
        goto LAB_08a0d334;
      }
      uVar3 = uVar3 - uVar9;
    }
    else {
LAB_08a0d334:
      uVar3 = uVar3 - uVar9;
    }
    uVar4 = uVar3 / uVar5;
    if (uVar5 == 0) {
      trap(7);
    }
    uVar9 = uVar4 * (param_3 & 0xffff);
    uVar5 = uVar3 % uVar5 << 0x10 | param_1 & 0xffff;
    if (uVar5 < uVar9) {
      uVar5 = uVar5 + param_3;
      uVar4 = uVar4 - 1;
      if (param_3 <= uVar5) {
        uVar4 = uVar4 - (uVar5 < uVar9);
      }
    }
    uVar4 = uVar7 << 0x10 | uVar4;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    if (param_2 < param_4) goto LAB_08a0d398;
    iVar2 = 8;
    if (param_4 < 0x100) {
      iVar2 = 0;
    }
    if ((0xffff < param_4) && (iVar2 = 0x10, 0xffffff < param_4)) {
      iVar2 = 0x18;
    }
    uVar7 = 0x20 - ((uint)(byte)(&DAT_08aa5018)[param_4 >> iVar2] + iVar2);
    uVar4 = 0x20 - uVar7;
    if (uVar7 == 0) {
      uVar4 = (uint)(param_4 < param_2 || param_3 <= param_1);
    }
    else {
      uVar5 = param_4 << (uVar7 & 0x1f) | param_3 >> (uVar4 & 0x1f);
      uVar3 = uVar5 >> 0x10;
      uVar9 = param_2 >> (uVar4 & 0x1f);
      uVar6 = uVar9 / uVar3;
      uVar4 = param_2 << (uVar7 & 0x1f) | param_1 >> (uVar4 & 0x1f);
      if (uVar3 == 0) {
        trap(7);
      }
      uVar11 = uVar6 * (uVar5 & 0xffff);
      uVar10 = uVar9 % uVar3 << 0x10 | uVar4 >> 0x10;
      uVar9 = uVar6;
      if (uVar10 < uVar11) {
        uVar10 = uVar10 + uVar5;
        uVar9 = uVar6 - 1;
        if (uVar10 < uVar5) goto LAB_08a0d71c;
        if (uVar10 < uVar11) {
          uVar9 = uVar6 - 2;
          uVar10 = uVar10 + uVar5;
          goto LAB_08a0d71c;
        }
        uVar10 = uVar10 - uVar11;
      }
      else {
LAB_08a0d71c:
        uVar10 = uVar10 - uVar11;
      }
      uVar6 = uVar10 / uVar3;
      if (uVar3 == 0) {
        trap(7);
      }
      uVar11 = uVar6 * (uVar5 & 0xffff);
      uVar3 = uVar10 % uVar3 << 0x10 | uVar4 & 0xffff;
      uVar4 = uVar6;
      if (uVar3 < uVar11) {
        uVar3 = uVar3 + uVar5;
        uVar4 = uVar6 - 1;
        if ((uVar5 <= uVar3) && (uVar3 < uVar11)) {
          uVar3 = uVar3 + uVar5;
          uVar4 = uVar6 - 2;
        }
      }
      uVar4 = uVar9 << 0x10 | uVar4;
      lVar1 = (ulonglong)uVar4 * (ulonglong)(param_3 << (uVar7 & 0x1f));
      uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
      if (uVar9 <= uVar3 - uVar11) {
        uVar5 = 0;
        if (uVar9 == uVar3 - uVar11 && param_1 << (uVar7 & 0x1f) < (uint)lVar1) {
          uVar4 = uVar4 - 1;
        }
        goto LAB_08a0d398;
      }
      uVar4 = uVar4 - 1;
    }
  }
  uVar5 = 0;
LAB_08a0d398:
  if (uVar8 != 0) {
    uVar4 = -uVar4;
    uVar5 = -(uint)(uVar4 != 0) - uVar5;
  }
  return CONCAT44(uVar5,uVar4);
}

