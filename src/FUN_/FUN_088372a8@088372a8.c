#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088372a8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 in_V7C;
  uint local_50;
  
  iVar2 = FUN_0884b248();
  if (iVar2 == 0) {
    return;
  }
  local_50 = 0;
  uVar12 = 0;
  iVar8 = 0;
  iVar2 = 0;
  do {
    pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar2 + 0x3c4) + 0x90);
    *pfVar6 = *pfVar6 + 0.03490658;
    iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 + 0x3c4);
    if (6.283185 < *(float *)(iVar7 + 0x90)) {
      *(float *)(iVar7 + 0x90) = *(float *)(iVar7 + 0x90) - 6.283185;
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 + 0x3c4);
    }
    uVar13 = vmul_s(*(float *)(iVar7 + 0x90) * 3.141593,in_V7C);
    fVar14 = (float)vcos_s(uVar13);
    fVar14 = (1.0 - fVar14) * 0.5 * 0.2;
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    iVar8 = iVar8 + 1;
    *(float *)(iVar7 + 0xbc) = fVar14;
    iVar2 = iVar2 + 4;
  } while (iVar8 < 6);
  iVar2 = *(int *)(param_1 + 0xa68) * 4 >> 2;
  switch(*(int *)(param_1 + 0xa68)) {
  case 0:
    uVar13 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar13,0x1b);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (5 < iVar2) {
      iVar2 = 5;
    }
    *(undefined4 *)(param_1 + 0xa68) = 1;
    if ((*(int *)(DAT_08ac58c4 + 0x20) == 2) && (2 < iVar2)) {
      *(undefined4 *)(param_1 + 0xa68) = 10;
    }
    break;
  case 10:
    *(undefined4 *)(param_1 + 0xa74) = 0;
    *(undefined4 *)(param_1 + 0xa78) = 0;
    *(undefined4 *)(param_1 + 0xa6c) = 0;
    *(int *)(param_1 + 0xa68) = iVar2 + 1;
    goto LAB_088374cc;
  case 0xb:
LAB_088374cc:
    if (0 < DAT_08aba778) {
      if (DAT_08aba778 < 4) {
        if (2 < DAT_08aba778) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0xa68);
      }
      else {
        if (4 < DAT_08aba778) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0xa68);
      }
      *(int *)(param_1 + 0xa68) = iVar2 + 1;
    }
    break;
  case 0xc:
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = 0;
    do {
      iVar3 = FUN_0884b268();
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2;
        if (4 < iVar2) {
          iVar4 = 4;
        }
      }
      uVar9 = *(uint *)(iVar3 + iVar4 * 4 + 0x594);
      iVar3 = FUN_0881b22c();
      bVar1 = (int)uVar9 < 2;
      if (iVar3 != 0) {
        uVar13 = FUN_0881b254();
        iVar3 = FUN_0881b66c(uVar13);
        bVar1 = (int)uVar9 < 2;
        if (iVar3 != 0) {
          if (uVar9 == 1) {
            uVar9 = 3;
          }
          else {
            bVar1 = (int)uVar9 < 2;
            if (uVar9 != 3) goto LAB_088375a0;
            uVar9 = 1;
          }
          bVar1 = uVar9 < 2;
        }
      }
LAB_088375a0:
      if (bVar1) {
        if ((0 < (int)uVar9) && (iVar7 < 3)) {
          iVar7 = iVar7 + 1;
        }
      }
      else if ((int)uVar9 < 3) {
        if (iVar7 < 3) {
          iVar7 = iVar7 + 1;
        }
        if (iVar8 < 3) {
          iVar8 = iVar8 + 1;
        }
      }
      else if (((int)uVar9 < 4) && (iVar8 < 3)) {
        iVar8 = iVar8 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    uVar13 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar13,0x1e);
    iVar2 = iVar2 + -1;
    uVar9 = 0;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (4 < iVar2) {
      iVar2 = 4;
    }
    iVar3 = FUN_0884b268();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (4 < iVar2) {
      iVar2 = 4;
    }
    uVar10 = *(uint *)(iVar3 + iVar2 * 4 + 0x594);
    iVar2 = FUN_0881b22c();
    bVar1 = (int)uVar10 < 2;
    if (iVar2 != 0) {
      uVar13 = FUN_0881b254();
      iVar2 = FUN_0881b66c(uVar13);
      bVar1 = (int)uVar10 < 2;
      if (iVar2 != 0) {
        if (uVar10 == 1) {
          uVar10 = 3;
        }
        else {
          bVar1 = (int)uVar10 < 2;
          if (uVar10 != 3) goto LAB_088376dc;
          uVar10 = 1;
        }
        bVar1 = uVar10 < 2;
      }
    }
LAB_088376dc:
    if (bVar1) {
      uVar9 = local_50;
      uVar11 = local_50;
      if (0 < (int)uVar10) {
        local_50 = *(uint *)(*(int *)(param_1 + 0x14) + iVar7 * 4 + 0x3c0);
        goto LAB_08837744;
      }
    }
    else {
      if ((int)uVar10 < 3) {
        local_50 = *(uint *)(*(int *)(param_1 + 0x14) + iVar7 * 4 + 0x3c0);
        uVar12 = *(uint *)(*(int *)(param_1 + 0x14) + iVar8 * 4 + 0x3cc);
      }
      else {
        uVar11 = uVar9;
        if (3 < (int)uVar10) goto LAB_08837748;
        uVar12 = *(uint *)(*(int *)(param_1 + 0x14) + iVar8 * 4 + 0x3cc);
      }
LAB_08837744:
      uVar9 = local_50 | uVar12;
      uVar11 = local_50;
    }
LAB_08837748:
    if (uVar9 == 0) {
      *(undefined4 *)(param_1 + 0xa68) = 0x14;
    }
    else {
      *(uint *)(param_1 + 0xa74) = uVar11;
      *(uint *)(param_1 + 0xa78) = uVar12;
      *(int *)(param_1 + 0xa68) = *(int *)(param_1 + 0xa68) + 1;
    }
    break;
  case 0xd:
    iVar2 = *(int *)(param_1 + 0xa74);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(param_1 + 0xa74) + 0xbc) = 0;
    }
    iVar2 = *(int *)(param_1 + 0xa78);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xa68);
    }
    else {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(param_1 + 0xa78) + 0xbc) = 0;
      iVar2 = *(int *)(param_1 + 0xa68);
    }
    *(undefined4 *)(param_1 + 0xa6c) = 0;
    fVar14 = 0.08726646;
    *(int *)(param_1 + 0xa68) = iVar2 + 1;
    goto LAB_088377fc;
  case 0xe:
    fVar14 = *(float *)(param_1 + 0xa6c) + 0.08726646;
LAB_088377fc:
    *(float *)(param_1 + 0xa6c) = fVar14;
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    else if (1.570796 < fVar14) {
      fVar14 = 1.570796;
    }
    *(float *)(param_1 + 0xa6c) = fVar14;
    uVar13 = vmul_s(fVar14,in_V7C);
    fVar14 = (float)vsin_s(uVar13);
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      uVar13 = FUN_0884b268();
      iVar2 = FUN_0884c830(uVar13);
      iVar8 = *(int *)(param_1 + 0xa74);
      if (iVar2 == 0) {
        if (iVar8 == 0) {
          iVar2 = *(int *)(param_1 + 0xa78);
        }
        else {
          *(float *)(iVar8 + 0xbc) = fVar14 * *(float *)(param_1 + 0xad0);
          iVar2 = *(int *)(param_1 + 0xa78);
        }
        if (iVar2 != 0) {
          *(float *)(iVar2 + 0xbc) = fVar14 * *(float *)(param_1 + 0xad0);
        }
      }
      else {
        if (iVar8 != 0) {
          *(float *)(iVar8 + 0xbc) = fVar14;
        }
        if (*(int *)(param_1 + 0xa78) != 0) {
          *(float *)(*(int *)(param_1 + 0xa78) + 0xbc) = fVar14;
        }
      }
    }
    if (fVar14 < 1.0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xa68) = 0x14;
LAB_08837928:
    iVar8 = 0;
    iVar2 = 0;
    iVar7 = 0;
    do {
      iVar3 = FUN_0884b268();
      if (iVar7 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar7;
        if (4 < iVar7) {
          iVar4 = 4;
        }
      }
      uVar12 = *(uint *)(iVar3 + iVar4 * 4 + 0x594);
      iVar3 = FUN_0881b22c();
      bVar1 = (int)uVar12 < 2;
      if (iVar3 != 0) {
        uVar13 = FUN_0881b254();
        iVar3 = FUN_0881b66c(uVar13);
        bVar1 = (int)uVar12 < 2;
        if (iVar3 != 0) {
          if (uVar12 == 1) {
            uVar12 = 3;
          }
          else {
            bVar1 = (int)uVar12 < 2;
            if (uVar12 != 3) goto LAB_088379b0;
            uVar12 = 1;
          }
          bVar1 = uVar12 < 2;
        }
      }
LAB_088379b0:
      if (bVar1) {
        if ((0 < (int)uVar12) && (iVar8 < 3)) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar8 * 4 + 0x288);
          iVar8 = iVar8 + 1;
          uVar13 = FUN_089f7720("shouri_on");
          *(undefined4 *)(iVar3 + 0xd4) = uVar13;
        }
      }
      else if ((int)uVar12 < 3) {
        if (iVar8 < 3) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar8 * 4 + 0x288);
          iVar8 = iVar8 + 1;
          uVar13 = FUN_089f7720("shouri_on");
          *(undefined4 *)(iVar3 + 0xd4) = uVar13;
        }
        if (iVar2 < 3) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4 + 0x294);
          iVar2 = iVar2 + 1;
          uVar13 = FUN_089f7720("shouri_on");
          *(undefined4 *)(iVar3 + 0xd4) = uVar13;
        }
      }
      else if (((int)uVar12 < 4) && (iVar2 < 3)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4 + 0x294);
        iVar2 = iVar2 + 1;
        uVar13 = FUN_089f7720("shouri_on");
        *(undefined4 *)(iVar3 + 0xd4) = uVar13;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    iVar2 = *(int *)(param_1 + 0xa68);
    *(int *)(param_1 + 0xa68) = iVar2 + 1;
    iVar2 = iVar2 + 2;
LAB_08837acc:
    *(undefined4 *)(param_1 + 0xa6c) = 0x3fc90fdb;
    *(int *)(param_1 + 0xa68) = iVar2;
    fVar14 = 1.396263;
LAB_08837afc:
    *(float *)(param_1 + 0xa6c) = fVar14;
    if (fVar14 < 0.0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 1.570796;
      if (fVar14 <= 1.570796) {
        fVar5 = fVar14;
      }
    }
    *(float *)(param_1 + 0xa6c) = fVar5;
    uVar13 = vmul_s(fVar5,in_V7C);
    fVar14 = (float)vsin_s(uVar13);
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      uVar13 = FUN_0884b268();
      iVar2 = FUN_0884c830(uVar13);
      iVar8 = *(int *)(param_1 + 0xa74);
      if (iVar2 != 0) {
        if (iVar8 != 0) {
          *(float *)(iVar8 + 0xbc) = fVar14;
        }
        if (*(int *)(param_1 + 0xa78) != 0) {
          *(float *)(*(int *)(param_1 + 0xa78) + 0xbc) = fVar14;
        }
        goto LAB_08837bd8;
      }
      if (iVar8 == 0) {
        iVar2 = *(int *)(param_1 + 0xa78);
      }
      else {
        *(float *)(iVar8 + 0xbc) = fVar14 * *(float *)(param_1 + 0xad0);
        iVar2 = *(int *)(param_1 + 0xa78);
      }
      if (iVar2 != 0) {
        *(float *)(iVar2 + 0xbc) = fVar14 * *(float *)(param_1 + 0xad0);
        goto LAB_08837bd8;
      }
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
LAB_08837bd8:
      iVar2 = *(int *)(param_1 + 0x14);
    }
    uVar13 = vmul_s(*(float *)(*(int *)(iVar2 + 0x3c4) + 0x90) * 3.141593,in_V7C);
    fVar5 = (float)vcos_s(uVar13);
    fVar5 = (1.0 - fVar5) * 0.5 * 0.2;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    if (fVar14 <= fVar5) {
      *(undefined4 *)(param_1 + 0xa68) = 0x1e;
    }
    break;
  case 0x14:
    goto LAB_08837928;
  case 0x15:
    iVar2 = iVar2 + 1;
    goto LAB_08837acc;
  case 0x16:
    fVar14 = *(float *)(param_1 + 0xa6c) - 0.1745329;
    goto LAB_08837afc;
  case 0x1e:
    FUN_0884b268();
    iVar2 = FUN_08a29894();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xa68) = 10;
    }
  }
  return;
}

