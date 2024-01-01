#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08835e34(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  int local_d0 [12];
  int local_a0 [12];
  int local_70 [13];
  float local_3c;
  float local_38;
  
  piVar2 = local_d0;
  piVar4 = local_d0;
  piVar9 = local_d0;
  iVar1 = FUN_089c9b48(3,DAT_08ac58c8);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xbe8);
  if (iVar1 == 0x66) {
    memcpy_jak(local_70,&DAT_08aba1a0,0x30);
    iVar1 = 0;
    iVar6 = *(int *)(param_1 + 0x14);
    do {
      iVar6 = *(int *)(iVar6 + *(int *)((int)piVar9 + 0x60) * 4);
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar6 + 0xbc) = 0;
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      piVar9 = (int *)((int)piVar9 + 4);
      iVar6 = *(int *)(param_1 + 0x14);
    } while (iVar1 < 0xc);
    *(undefined4 *)(param_1 + 0xbe8) = 0;
    *(uint *)(*(int *)(iVar6 + 0x2d8) + 0xd0) =
         *(uint *)(*(int *)(iVar6 + 0x2d8) + 0xd0) & 0xfffffffe;
    return;
  }
  if (iVar1 == 0x65) {
LAB_088366f4:
    fVar13 = *(float *)(param_1 + 0xc00) - 0.1745329;
    *(float *)(param_1 + 0xc00) = fVar13;
    if (fVar13 < 0.0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = 1.570796;
      if (fVar13 <= 1.570796) {
        fVar15 = fVar13;
      }
    }
    *(float *)(param_1 + 0xc00) = fVar15;
    uVar14 = vmul_s(fVar15,in_V7C);
    fVar13 = (float)vsin_s(uVar14);
    local_38 = fVar13;
    memcpy_jak(local_a0,&DAT_08aba170,0x30);
    iVar6 = 0;
    iVar1 = *(int *)(param_1 + 0x14);
    do {
      piVar2 = (int *)((int)piVar4 + 0x30);
      iVar6 = iVar6 + 1;
      piVar4 = (int *)((int)piVar4 + 4);
      *(float *)(*(int *)(iVar1 + *piVar2 * 4) + 0xbc) = fVar13;
      iVar1 = *(int *)(param_1 + 0x14);
    } while (iVar6 < 0xc);
    *(float *)(*(int *)(iVar1 + 0x2d8) + 0xbc) = fVar13;
    if (fVar13 <= 0.05) {
      *(int *)(param_1 + 0xbe8) = *(int *)(param_1 + 0xbe8) + 1;
    }
    return;
  }
  if (iVar1 == 100) {
    *(undefined4 *)(param_1 + 0xc00) = 0x3fc90fdb;
    *(undefined4 *)(param_1 + 0xbe8) = 0x65;
    goto LAB_088366f4;
  }
  if (iVar1 == 3) {
    iVar1 = *(int *)(param_1 + 0xbec);
    *(int *)(param_1 + 0xbec) = iVar1 + 1;
    if (7 < iVar1) {
      *(undefined4 *)(param_1 + 0xbec) = 0;
      *(int *)(param_1 + 0xbf0) = *(int *)(param_1 + 0xbf0) + 1;
    }
    if (*(int *)(&DAT_08a64a74 + *(int *)(param_1 + 0xbf4) * 0x18) == 3) {
      iVar1 = FUN_0882c548(param_1);
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x220);
      if (100.0 <= *(float *)(iVar1 + 0x188)) {
        FUN_089f4bf4(0x40000000,uVar14);
        cVar5 = *(char *)(param_1 + 0xc04);
      }
      else {
        FUN_089f4bf4(0,uVar14);
        cVar5 = *(char *)(param_1 + 0xc04);
      }
    }
    else {
      cVar5 = *(char *)(param_1 + 0xc04);
    }
    uVar3 = *(uint *)(param_1 + 0xbf0);
    if (cVar5 == '\0') {
      iVar1 = 0;
      piVar2 = &DAT_08a64a64 + *(int *)(param_1 + 0xbf4) * 6;
      iVar6 = 0;
      do {
        if (*piVar2 != -1) {
          iVar1 = iVar1 + 1;
        }
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar6 < 4);
      if (iVar1 * 2 <= (int)uVar3) {
        *(undefined4 *)(param_1 + 0xbf0) = 0;
      }
      iVar8 = 0;
      iVar1 = 0;
      iVar6 = 1;
      do {
        uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 + 0x224);
        if (*(char *)(param_1 + 0xc05) == '\0') {
          if (*(int *)(param_1 + 0xbf0) == iVar6) {
            FUN_089f4b64(0x3f800000,uVar14);
          }
          else {
            FUN_089f4b64(0,uVar14);
          }
        }
        else {
          FUN_089f4b64(0x3f800000,uVar14);
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + 4;
        iVar6 = iVar6 + 2;
      } while (iVar8 < 4);
      iVar1 = *(int *)(param_1 + 0xbf4);
    }
    else {
      if ((int)uVar3 < 0) {
        uVar3 = -(-uVar3 & 3);
      }
      else {
        uVar3 = uVar3 & 3;
      }
      FUN_089f4b64((float)uVar3,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x234));
      iVar1 = *(int *)(param_1 + 0xbf4);
    }
    if ((iVar1 != 8) && (iVar1 != 10)) {
      return;
    }
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2d8));
    if (*(char *)(param_1 + 0xc06) == '\0') {
      fVar13 = *(float *)(param_1 + 0xc08) - 0.1;
      *(float *)(param_1 + 0xc08) = fVar13;
      if (fVar13 <= 0.6) {
        *(undefined4 *)(param_1 + 0xc08) = 0x3f19999a;
        *(undefined *)(param_1 + 0xc06) = 1;
        fVar13 = 0.6;
      }
    }
    else {
      fVar13 = *(float *)(param_1 + 0xc08) + 0.1;
      *(float *)(param_1 + 0xc08) = fVar13;
      if (4.0 <= fVar13) {
        *(undefined *)(param_1 + 0xc06) = 0;
      }
    }
    if (0.9 <= fVar13) {
      fVar13 = 0.9;
    }
    FUN_089f4954(fVar13,fVar13,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2d8),0);
    return;
  }
  if (iVar1 == 2) goto LAB_08836354;
  if (iVar1 != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0xbec) = 0;
  *(undefined4 *)(param_1 + 0xc00) = 0;
  *(undefined4 *)(param_1 + 0xbf0) = 0;
  *(undefined *)(param_1 + 0xc04) = 0;
  *(undefined *)(param_1 + 0xc05) = 0;
  uVar14 = 0x43a00000;
  iVar8 = 0x87;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar1 = 0x21c;
  do {
    *(undefined4 *)(*(int *)(iVar6 + iVar1) + 0xbc) = 0;
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar1);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar1);
    *(undefined4 *)(iVar6 + 0x90) = in_V72;
    *(undefined4 *)(iVar6 + 0x94) = in_V76;
    *(undefined4 *)(iVar6 + 0x98) = in_V7A;
    *(undefined4 *)(iVar6 + 0x9c) = in_V7E;
    iVar8 = iVar8 + 1;
    iVar1 = iVar1 + 4;
    iVar6 = *(int *)(param_1 + 0x14);
  } while (iVar8 < 0x8e);
  *(uint *)(*(int *)(iVar6 + 0x234) + 0xd0) = *(uint *)(*(int *)(iVar6 + 0x234) + 0xd0) & 0xfffffffe
  ;
  iVar1 = *(int *)(param_1 + 0xbf4);
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xd < iVar1) {
    iVar1 = 0xd;
  }
  *(int *)(param_1 + 0xbf4) = iVar1;
  iVar12 = 0;
  iVar11 = 0;
  iVar8 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_08a64a64 + iVar8 + iVar1 * 0x18);
    iVar10 = *(int *)(iVar6 + iVar8 + 0x224);
    if (iVar1 == -1) {
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
      iVar6 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(param_1 + 0xbf4);
    }
    else {
      if (iVar1 == 0) {
        *(uint *)(*(int *)(iVar6 + 0x224) + 0xd0) =
             *(uint *)(*(int *)(iVar6 + 0x224) + 0xd0) & 0xfffffffe;
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x234);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        *(undefined *)(param_1 + 0xc04) = 1;
        iVar6 = *(int *)(param_1 + 0x14);
        iVar1 = *(int *)(param_1 + 0xbf4);
      }
      else {
        iVar1 = FUN_08835bec(param_1,iVar1);
        FUN_089f4a90(0,(float)iVar1,iVar10);
        iVar6 = *(int *)(param_1 + 0x14);
        iVar1 = *(int *)(param_1 + 0xbf4);
      }
      iVar12 = iVar12 + 1;
    }
    iVar11 = iVar11 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar11 < 4);
  iVar6 = *(int *)(iVar6 + 0x2d8);
  if ((iVar1 == 8) || (iVar1 == 10)) {
    if (iVar1 == 10) {
      FUN_0882c4c8(0,0,0x42000000,0x42000000,param_1);
      iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x2d8);
    }
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x220);
    iVar1 = *(int *)(&DAT_08a64a74 + *(int *)(param_1 + 0xbf4) * 0x18);
  }
  else {
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x220);
    iVar1 = *(int *)(&DAT_08a64a74 + *(int *)(param_1 + 0xbf4) * 0x18);
  }
  if (iVar1 == 0) {
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  }
  else {
    *(undefined4 *)(iVar6 + 0x60) = 0x43ba8000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x220) + 0x80) = 0x43ba8000;
    *(undefined *)(param_1 + 0xc05) = 1;
    if (*(int *)(&DAT_08a64a74 + *(int *)(param_1 + 0xbf4) * 0x18) == 3) {
      FUN_089f4a90(0,0);
    }
    else {
      FUN_089f4a90(0,(float)(*(int *)(&DAT_08a64a74 + *(int *)(param_1 + 0xbf4) * 0x18) + -1));
    }
  }
  if (iVar12 < 3) {
    if (0 < iVar12) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar12 < 2) {
        if (*(char *)(param_1 + 0xc05) == '\0') {
          *(undefined4 *)(*(int *)(iVar1 + 0x224) + 0x60) = 0x43b80000;
          uVar14 = 0x43a40000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x234) + 0x60) = 0x43b80000;
        }
        else {
          *(undefined4 *)(*(int *)(iVar1 + 0x220) + 0x60) = 0x43ba8000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x220) + 0x80) = 0x43ba8000;
          uVar14 = 0x439c0000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x224) + 0x60) = 0x43a98000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x234) + 0x60) = 0x43a98000;
        }
      }
      else if (*(char *)(param_1 + 0xc05) == '\0') {
        *(undefined4 *)(*(int *)(iVar1 + 0x224) + 0x60) = 0x43b00000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x228) + 0x60) = 0x43c00000;
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x220) + 0x60) = 0x43b20000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x220) + 0x80) = 0x43b20000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x224) + 0x60) = 0x43ac0000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x228) + 0x60) = 0x43c80000;
        *(undefined *)(param_1 + 0xc05) = 0;
      }
    }
LAB_08836338:
    uVar7 = *(undefined4 *)(param_1 + 0xbf4);
  }
  else {
    if (iVar12 == 4) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x224) + 0x60) = 0x43a20000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x228) + 0x60) = 0x43b00000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x22c) + 0x60) = 0x43be0000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x230) + 0x60) = 0x43cc0000;
      goto LAB_08836338;
    }
    uVar7 = *(undefined4 *)(param_1 + 0xbf4);
  }
  FUN_08835c64(uVar14,param_1,uVar7);
  *(int *)(param_1 + 0xbe8) = *(int *)(param_1 + 0xbe8) + 1;
LAB_08836354:
  fVar15 = 0.0;
  fVar13 = *(float *)(param_1 + 0xc00) + 0.1745329;
  *(float *)(param_1 + 0xc00) = fVar13;
  if (fVar13 < 0.0) {
    *(undefined4 *)(param_1 + 0xc00) = 0;
  }
  else {
    if (1.570796 < fVar13) {
      fVar13 = 1.570796;
    }
    *(float *)(param_1 + 0xc00) = fVar13;
    fVar15 = fVar13;
  }
  uVar14 = vmul_s(fVar15,in_V7C);
  fVar13 = (float)vsin_s(uVar14);
  local_3c = fVar13;
  memcpy_jak(local_d0,&DAT_08aba140,0x30);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar2 * 4) + 0xbc) = fVar13;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0xc);
  if ((*(int *)(param_1 + 0xbf4) == 8) || (*(int *)(param_1 + 0xbf4) == 10)) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x2d8) + 0xbc) = fVar13;
  }
  if (fVar13 < 1.0) {
    return;
  }
  *(int *)(param_1 + 0xbe8) = *(int *)(param_1 + 0xbe8) + 1;
  return;
}

