#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a0f25c)
// WARNING: Removing unreachable block (ram,0x08a0f39c)

undefined8 FUN_08a0f12c(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *param_1;
  uVar5 = param_1[4];
  uVar7 = param_1[5];
  uVar4 = 0;
  if (uVar3 < 2) {
    uVar7 = uVar7 | 0x80000;
    uVar4 = 0x7ff;
    goto LAB_08a0f164;
  }
  if (uVar3 == 4) {
    uVar4 = 0x7ff;
  }
  else if (uVar3 != 2) {
    if ((uVar5 | uVar7) == 0) goto LAB_08a0f164;
    uVar3 = param_1[2];
    if ((int)uVar3 < -0x3fe) {
      uVar3 = -uVar3 - 0x3fe;
      if ((int)uVar3 < 0x39) {
        if ((int)(uVar3 * 0x4000000) < 0) {
          uVar4 = 1 << (uVar3 & 0x1f);
          iVar2 = 0;
        }
        else {
          uVar4 = 0 << (uVar3 & 0x1f);
          if (uVar3 * 0x4000000 != 0) {
            uVar4 = uVar4 | 1U >> (-uVar3 & 0x1f);
          }
          iVar2 = 1 << (uVar3 & 0x1f);
        }
        uVar4 = uVar7 & (uVar4 - 1) + (uint)(iVar2 - 1U != 0xffffffff);
        if ((int)(uVar3 * 0x4000000) < 0) {
          uVar6 = uVar7 >> (uVar3 & 0x1f);
          uVar7 = 0;
        }
        else {
          uVar6 = uVar5 >> (uVar3 & 0x1f);
          if (uVar3 * 0x4000000 != 0) {
            uVar6 = uVar6 | uVar7 << (-uVar3 & 0x1f);
          }
          uVar7 = uVar7 >> (uVar3 & 0x1f);
        }
        uVar6 = uVar6 | (uVar5 & iVar2 - 1U | uVar4) != 0;
      }
      else {
        uVar6 = 0;
        uVar7 = 0;
      }
      if ((uVar6 & 0xff) == 0x80) {
        if ((uVar6 & 0x100) != 0) {
          uVar6 = uVar6 + 0x80;
          bVar1 = uVar6 < 0x80;
          goto LAB_08a0f230;
        }
      }
      else {
        uVar6 = uVar6 + 0x7f;
        bVar1 = uVar6 < 0x7f;
LAB_08a0f230:
        uVar7 = uVar7 + bVar1;
      }
      uVar4 = (uint)(0xfffffff < uVar7);
      uVar5 = uVar6 >> 8 | uVar7 << 0x18;
    }
    else {
      uVar4 = 0x7ff;
      if (0x3ff < (int)uVar3) goto LAB_08a0f32c;
      uVar4 = uVar3 + 0x3ff;
      if ((uVar5 & 0xff) == 0x80) {
        if ((uVar5 & 0x100) != 0) {
          uVar5 = uVar5 + 0x80;
          bVar1 = uVar5 < 0x80;
          goto LAB_08a0f360;
        }
      }
      else {
        uVar5 = uVar5 + 0x7f;
        bVar1 = uVar5 < 0x7f;
LAB_08a0f360:
        uVar7 = uVar7 + bVar1;
      }
      if (0x1fffffff < uVar7) {
        uVar5 = uVar5 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar7 >> 1;
        uVar4 = uVar3 + 0x400;
      }
      uVar5 = uVar5 >> 8 | uVar7 << 0x18;
    }
    uVar7 = uVar7 >> 8;
    goto LAB_08a0f164;
  }
LAB_08a0f32c:
  uVar5 = 0;
  uVar7 = 0;
LAB_08a0f164:
  return CONCAT44(uVar7 & 0xfffff | (uVar4 & 0x7ff) << 0x14 | param_1[1] << 0x1f,uVar5);
}

