#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08884cc8(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ushort uVar15;
  ushort uVar16;
  int iVar17;
  float fVar18;
  undefined auStack_68 [8];
  ushort local_60;
  ushort local_5e;
  ushort local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  uint local_40;
  char local_3c;
  uint uVar7;
  
  if (*(char *)(param_1 + 3) != '\0') {
    param_1[6] = 0;
    return 0;
  }
  cVar5 = '\x01';
  iVar17 = 0;
  bVar1 = false;
  local_3c = false;
  uVar14 = 0;
  if (param_1[0x17] == 0) {
    iVar6 = *param_1;
    cVar5 = *(char *)(iVar6 + 0x158);
    iVar17 = *(int *)(iVar6 + 0x34);
    bVar1 = (*(uint *)(iVar6 + 0x144) & 0x10) != 0;
    local_3c = 100.0 <= *(float *)(iVar6 + 0x188);
    uVar14 = *(undefined4 *)(iVar6 + 0x150);
  }
  else if (param_1[0x17] == 1) {
    iVar6 = *param_1;
    cVar5 = *(char *)(iVar6 + 0x14c);
    iVar17 = *(int *)(iVar6 + 0x34);
    bVar1 = (*(uint *)(iVar6 + 0x144) & 0x10) != 0;
    local_3c = false;
  }
  if (cVar5 == '\0') {
    uVar7 = param_1[7];
    iVar6 = param_1[0x15];
    uVar4 = param_1[5];
    iVar12 = param_1[0x16];
    goto LAB_088851f0;
  }
  if (param_1[0x14] != 0) {
    param_1[0x14] = param_1[0x14] + -1;
  }
  bVar2 = false;
  local_40 = 0;
  iVar6 = FUN_0880d354();
  if (iVar6 == 0) {
    uVar16 = *(ushort *)(DAT_08ac5928 + 2);
    uVar15 = *(ushort *)(DAT_08ac5928 + 4);
    uVar13 = (uint)*(ushort *)(DAT_08ac5928 + 6);
    fVar18 = *(float *)(DAT_08ac5928 + 0x34);
    local_40 = uVar13;
    iVar3 = FUN_08884988(param_1);
    iVar10 = param_1[0x17];
    iVar6 = param_1[0x15];
    uVar4 = param_1[5];
    iVar12 = param_1[0x16];
    bVar2 = iVar3 != 0;
    uVar7 = param_1[4];
    param_1[4] = 0;
  }
  else {
    iVar6 = FUN_089cf8ec(0);
    memset_jak(auStack_68,0,0x28);
    fVar18 = 0.0;
    uVar16 = 0;
    uVar15 = 0;
    if (iVar6 == 0) {
LAB_08884e8c:
      uVar7 = param_1[4];
    }
    else {
      iVar6 = FUN_089d0bcc(iVar6,uVar14,auStack_68);
      if (iVar6 == 0) {
        uVar7 = param_1[4];
      }
      else {
        local_40 = (uint)local_5c;
        iVar6 = FUN_08884b5c(local_58,local_54,local_50,param_1);
        fVar18 = local_54;
        uVar16 = local_60;
        uVar15 = local_5e;
        if (iVar6 != 0) {
          bVar2 = true;
          goto LAB_08884e8c;
        }
        uVar7 = param_1[4];
      }
    }
    param_1[4] = 0;
    iVar10 = param_1[0x17];
    iVar6 = param_1[0x15];
    uVar4 = param_1[5];
    iVar12 = param_1[0x16];
    uVar13 = local_40;
  }
  uVar11 = uVar16 & 0x100;
  uVar8 = uVar7;
  if (bVar2) {
    param_1[1] = param_1[10];
    uVar8 = uVar7 | 1;
    param_1[2] = 0x40000000;
    if (ABS(fVar18) < 0.3) {
      uVar8 = uVar7 | 0x2001;
    }
  }
  if ((iVar6 == 0) && ((uVar15 & 0x4000) != 0)) {
    uVar8 = uVar8 | 2;
  }
  if ((uVar16 & 0x4000) != 0) {
    uVar8 = uVar8 | 0x200;
  }
  if ((((iVar6 == 0) && ((uVar16 & 0x200) != 0)) && (param_1[0x14] == 0)) && (!bVar1)) {
    if ((uVar8 & 1) == 0) {
      param_1[1] = iVar17;
    }
    uVar8 = uVar8 | 4;
  }
  if ((uVar15 & 0x10) != 0) {
    uVar8 = uVar8 | 0x1000000;
  }
  if ((uVar15 & 0x200) != 0) {
    uVar8 = uVar8 | 0x4000;
  }
  if (uVar11 != 0) {
    uVar8 = uVar8 | 8;
  }
  if ((uVar15 & 0x100) != 0) {
    uVar8 = uVar8 | 0x40000;
  }
  if (((uVar15 & 0xa0) != 0) && ((uVar4 & 0x20) != 0)) {
    if ((uVar15 & 0x80) != 0) {
      uVar8 = uVar8 | 0xb0;
    }
    if ((uVar15 & 0x20) != 0) {
      uVar8 = uVar8 | 0x130;
    }
  }
  if (((iVar12 == 0) && ((uVar15 & 0x9000) != 0)) && (iVar6 == 0)) {
    uVar7 = uVar8 | 0x10;
    if ((uVar15 & 0x1000) != 0) {
      if ((uVar4 & 0x10000) == 0) {
        uVar7 = uVar8 & 0xffffffef;
      }
      uVar7 = uVar7 | 0x10000;
    }
    uVar8 = uVar7;
    if ((param_1[0x14] == 0) && ((uVar16 & 0x200) != 0)) {
      uVar8 = uVar8 | 4;
    }
  }
  uVar7 = uVar8;
  if ((uVar4 & 0x20000) != 0) {
    if ((local_40 & 0x2000) == 0) {
      if ((uVar16 & 0x2000) != 0) {
        uVar7 = uVar8 | 0x400;
      }
    }
    else if ((iVar12 == 0) && (iVar6 == 0)) {
      if (local_3c == '\0') {
        uVar7 = uVar8 | 0x20010;
        if ((param_1[0x14] == 0) && ((uVar16 & 0x200) != 0)) {
          uVar7 = uVar8 | 0x20014;
        }
      }
      else {
        uVar7 = uVar8 | 0x20810;
      }
    }
  }
  if (((uVar16 & 0x40) != 0) && (iVar17 = param_1[6], param_1[6] = iVar17 + 1, 0xb < iVar17 + 1)) {
    uVar7 = uVar7 | 0x1000;
  }
  if ((uVar13 & 0x40) != 0) {
    if (param_1[6] < 0xc) {
      uVar7 = uVar7 | 0x40;
    }
    param_1[6] = 0;
  }
  if ((uVar15 & 0x8000) != 0) {
    uVar7 = uVar7 | 0x8000;
  }
  uVar9 = uVar16 & 0x200;
  if (iVar10 == 1) {
    if (uVar11 != 0) {
      uVar7 = uVar7 | 0x100000;
    }
    if (uVar9 != 0) {
      uVar7 = uVar7 | 0x200000;
    }
    if ((uVar15 & 0x8000) != 0) {
      uVar7 = uVar7 | 0x400000;
    }
    if ((uVar16 & 0x8000) == 0) {
      uVar7 = uVar7 | 0x800000;
    }
    if ((uVar16 & 0x2000) != 0) {
      uVar7 = uVar7 | 0x1000000;
    }
    if ((uVar11 != 0) && (uVar9 != 0)) {
      uVar7 = uVar7 | 0x2000000;
    }
    if ((uVar15 & 0x1000) != 0) {
      uVar7 = uVar7 | 0x8000000;
    }
    if ((uVar15 & 0x2000) != 0) {
      uVar7 = uVar7 | 0x10000000;
    }
    if (uVar9 != 0) {
      uVar7 = uVar7 | 0x20000000;
    }
  }
LAB_088851f0:
  if (iVar6 != 0) {
    param_1[0x15] = iVar6 + -1;
  }
  if (iVar12 != 0) {
    param_1[0x16] = iVar12 + -1;
  }
  return uVar7 & uVar4;
}

