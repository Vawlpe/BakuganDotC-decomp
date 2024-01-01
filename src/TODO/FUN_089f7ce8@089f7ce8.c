#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f7ce8(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  puVar7 = *(uint **)(param_1 + 0xb0);
  *(uint **)(param_1 + 0x4c) = puVar7;
  iVar6 = *(int *)(param_1 + 0xa0);
  *(uint **)(param_1 + 100) = puVar7;
  iVar4 = (int)*(char *)(iVar6 + 0x11);
  if (4 < iVar4) {
    *(undefined *)(iVar6 + 0x11) = 4;
    iVar6 = *(int *)(param_1 + 0xa0);
    puVar7 = *(uint **)(param_1 + 0xb0);
    iVar4 = (int)*(char *)(iVar6 + 0x11);
  }
  *puVar7 = (iVar4 + -1) * 0x10000 | 0xc2000000U | *(uint *)(iVar6 + 0x2c) & 1;
  uVar2 = FUN_089f70dc(param_1);
  *(uint *)(*(int *)(param_1 + 0xb0) + 4) = uVar2 | 0xc3000000;
  uVar2 = 0x1f - LZCOUNT(param_2);
  uVar14 = 0x1f - LZCOUNT(param_3);
  iVar4 = (1 << (uVar2 & 0x1f)) * (1 << (uVar14 & 0x1f));
  *(int *)(param_1 + 0x11c) =
       *(int *)(param_1 + 0xa0) + (int)*(short *)(*(int *)(param_1 + 0xa0) + 0xc);
  uVar3 = FUN_089f70dc(param_1);
  switch(uVar3) {
  case 0:
  case 1:
  case 2:
  case 6:
    iVar4 = iVar4 * 2;
    break;
  case 3:
  case 7:
    iVar4 = iVar4 * 4;
    break;
  case 4:
    iVar4 = iVar4 / 2;
  }
  if (DAT_08ac6164 != '\0') {
    iVar11 = iVar4 + ((uint)(iVar4 >> 2) >> 0x1e);
    iVar8 = (int)*(char *)(*(int *)(param_1 + 0xa0) + 0x11);
    iVar12 = 1;
    iVar6 = iVar4;
    if (1 < iVar8) {
      do {
        iVar6 = iVar6 + (iVar11 >> 2);
        iVar11 = (iVar11 >> 2) + ((uint)(iVar11 >> 4) >> 0x1e);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar8);
    }
    iVar8 = FUN_089ceda8(DAT_08ac5934,iVar6);
    if (iVar8 == 0) {
      iVar8 = FUN_089cec88(DAT_08ac5934,iVar6,0,0);
    }
    if (iVar8 != 0) {
      memcpy_jak(iVar8,*(undefined4 *)(param_1 + 0x11c),iVar6);
      *(int *)(param_1 + 0x11c) = iVar8;
      *(int *)(param_1 + 0x114) = iVar8;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x11c);
  iVar6 = *(int *)(param_1 + 0xa0);
  iVar8 = 0;
  iVar12 = 2;
  iVar11 = 8;
  puVar7 = (uint *)(*(int *)(param_1 + 0xb0) + 8);
  if ('\0' < *(char *)(iVar6 + 0x11)) {
    do {
      *puVar7 = (iVar8 + 0xa8) * 0x1000000 | (uVar9 >> 0x18 & 0xf) << 0x10 | 1 << (uVar2 & 0x1f);
      *(uint *)(*(int *)(param_1 + 0xb0) + iVar11 + 4) =
           (iVar8 + 0xa0) * 0x1000000 | uVar9 & 0xffffff;
      *(uint *)(*(int *)(param_1 + 0xb0) + iVar11 + 8) =
           (iVar8 + 0xb8) * 0x1000000 | uVar14 << 8 | uVar2;
      uVar9 = uVar9 + iVar4;
      iVar6 = *(int *)(param_1 + 0xa0);
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0xc;
      uVar2 = uVar2 - 1;
      uVar14 = uVar14 - 1;
      iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 2) >> 0x1e)) >> 2;
      iVar12 = iVar12 + 3;
      puVar7 = (uint *)(*(int *)(param_1 + 0xb0) + iVar11);
    } while (iVar8 < *(char *)(iVar6 + 0x11));
  }
  *puVar7 = (uint)*(byte *)(iVar6 + 0x22) << 8 | 0xc7000000 | (uint)*(byte *)(iVar6 + 0x21);
  iVar6 = (iVar12 + 1) * 4;
  iVar4 = *(int *)(param_1 + 0xa0);
  puVar7 = (uint *)(*(int *)(param_1 + 0xb0) + iVar6);
  if (iVar8 < 2) {
    iVar12 = iVar12 + 2;
    *puVar7 = (uint)*(byte *)(iVar4 + 0x23) << 8 | 0xc6000000 | (uint)*(byte *)(iVar4 + 0x24);
  }
  else {
    uVar14 = (uint)*(byte *)(iVar4 + 0x26);
    uVar2 = (uint)*(byte *)(iVar4 + 0x27);
    if (1 < uVar2) {
      uVar2 = uVar2 + 2;
    }
    if (1 < uVar14) {
      uVar14 = uVar14 + 2;
    }
    *puVar7 = uVar14 << 8 | 0xc6000000 | uVar2;
    *(uint *)(*(int *)(param_1 + 0xb0) + iVar6 + 4) =
         *(uint *)(*(int *)(param_1 + 0xa0) + 0x18) >> 8 | 0xd0000000;
    uVar14 = (uint)(*(float *)(*(int *)(param_1 + 0xa0) + 0x1c) * 16.0);
    uVar2 = 0x7f;
    if (((int)uVar14 < 0x80) && (uVar2 = uVar14, (int)uVar14 < -0x80)) {
      uVar2 = 0xffffff80;
    }
    iVar12 = iVar12 + 4;
    *(uint *)(*(int *)(param_1 + 0xb0) + iVar6 + 8) =
         (uVar2 & 0xff) << 0x10 | 0xc8000000 | (uint)*(byte *)(*(int *)(param_1 + 0xa0) + 0x25);
  }
  iVar8 = iVar12 * 4;
  iVar11 = 0x40;
  iVar4 = FUN_089f70dc(param_1);
  iVar6 = *(int *)(param_1 + 0xa0);
  if (iVar4 == 5) {
    iVar11 = 0x400;
  }
  uVar2 = (int)*(char *)(iVar6 + 0x12) & 7;
  if (uVar2 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar8) = 0xcb000000;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar8 + 4) = 0xb000000;
    iVar4 = *(int *)(param_1 + 0xb0);
    cVar1 = *(char *)(param_1 + 0xad);
  }
  else {
    uVar2 = *(uint *)(&DAT_08aa3c80 + uVar2 * 4);
    iVar13 = (int)*(short *)(iVar6 + 0xe);
    *(int *)(param_1 + 0x120) = iVar6 + *(short *)(iVar6 + 0xc) + *(int *)(iVar6 + 8);
    iVar4 = iVar13 * 2;
    if (((int)*(char *)(iVar6 + 0x12) & 0x80U) == 0) {
      FUN_089f6a3c(*(undefined4 *)(param_1 + 0x120),uVar2,iVar13);
      *(byte *)(*(int *)(param_1 + 0xa0) + 0x12) = *(byte *)(*(int *)(param_1 + 0xa0) + 0x12) | 0x80
      ;
      iVar6 = *(int *)(param_1 + 0xa0);
    }
    uVar14 = *(uint *)(iVar6 + 0x2c);
    iVar10 = 0;
    if ((uVar14 & 2) == 0) {
      if (0 < iVar13) {
        iVar6 = 0;
        do {
          pbVar5 = (byte *)(*(int *)(param_1 + 0x120) + iVar6 + 3);
          uVar14 = (uint)*pbVar5 * 2;
          if (0xff < uVar14) {
            uVar14 = 0xff;
          }
          iVar10 = iVar10 + 1;
          *pbVar5 = (byte)uVar14;
          iVar6 = iVar10 * 4;
        } while (iVar10 < iVar13);
        iVar6 = *(int *)(param_1 + 0xa0);
        uVar14 = *(uint *)(iVar6 + 0x2c);
      }
      *(uint *)(iVar6 + 0x2c) = uVar14 | 2;
    }
    if (uVar2 == 3) {
      iVar4 = iVar13 * 4;
    }
    iVar6 = FUN_089ceda8(DAT_08ac5934,iVar4);
    if ((DAT_08ac6164 != '\0') && (iVar6 == 0)) {
      iVar6 = FUN_089cec88(DAT_08ac5934,iVar4,0,0);
    }
    if (iVar6 == 0) {
      iVar4 = *(int *)(param_1 + 0xb0);
    }
    else {
      memcpy_jak(iVar6,*(undefined4 *)(param_1 + 0x120),iVar4);
      *(int *)(param_1 + 0x120) = iVar6;
      *(int *)(param_1 + 0x118) = iVar6;
      iVar4 = *(int *)(param_1 + 0xb0);
    }
    *(undefined4 *)(iVar4 + iVar8) = 0xcb000000;
    *(uint *)(*(int *)(param_1 + 0xb0) + iVar8 + 4) = uVar2 | 0xc500ff00;
    *(uint *)(*(int *)(param_1 + 0xb0) + iVar8 + 8) =
         (*(uint *)(param_1 + 0x120) >> 0x18 & 0xf) << 0x10 | 0xb1000000;
    *(uint *)(*(int *)(param_1 + 0xb0) + iVar8 + 0xc) =
         *(uint *)(param_1 + 0x120) & 0xffffff | 0xb0000000;
    *(uint *)(*(int *)(param_1 + 0xb0) + iVar8 + 0x10) = iVar11 >> 5 | 0xc4000000;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar8 + 0x14) = 0xb000000;
    iVar4 = *(int *)(param_1 + 0xb0);
    cVar1 = *(char *)(param_1 + 0xad);
  }
  *(int *)(param_1 + 0x130) = iVar12;
  if (cVar1 == '\0') {
    iVar10 = 1;
    iVar13 = 0x60;
    iVar8 = (iVar12 + 0x18) * 4;
    iVar6 = iVar11;
    do {
      memcpy_jak(iVar4 + iVar13,iVar4,0x60);
      *(uint *)(*(int *)(param_1 + 0xb0) + iVar8 + 8) =
           ((uint)(*(int *)(param_1 + 0x120) + iVar6) >> 0x18 & 0xf) << 0x10 | 0xb1000000;
      *(uint *)(*(int *)(param_1 + 0xb0) + iVar8 + 0xc) =
           *(int *)(param_1 + 0x120) + iVar6 & 0xffffffU | 0xb0000000;
      iVar10 = iVar10 + 1;
      iVar13 = iVar13 + 0x60;
      iVar6 = iVar6 + iVar11;
      iVar8 = iVar8 + 0x60;
      iVar4 = *(int *)(param_1 + 0xb0);
    } while (iVar10 < 8);
  }
  zz_sceKernelDcacheWritebackRange(iVar4,0x300);
  return;
}

