#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a0bb90(float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  float *pfVar15;
  uint *puVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uStack_1b4;
  uint local_1b0;
  undefined auStack_1ac [76];
  float local_160 [20];
  float local_110 [20];
  float local_c0 [20];
  int local_70;
  int local_6c;
  float *local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  
  puVar14 = &uStack_1b4 + 1;
  puVar10 = &uStack_1b4 + 1;
  puVar16 = &uStack_1b4 + 1;
  iVar18 = *(int *)(&DAT_08aa4eb0 + param_5 * 4);
  param_4 = param_4 + -1;
  local_64 = iVar18;
  local_68 = param_2;
  local_70 = param_6;
  fVar22 = 0.0;
  local_54 = (int)(param_3 + -3 + ((uint)(param_3 + -3 >> 3) >> 0x1d)) >> 3;
  local_6c = param_5;
  if (local_54 < 0) {
    local_54 = 0;
  }
  param_3 = param_3 + local_54 * -8;
  iVar19 = param_3 + -8;
  iVar9 = local_54 - param_4;
  iVar7 = 0;
  if (-1 < iVar18 + param_4) {
    piVar13 = (int *)(param_6 + iVar9 * 4);
    do {
      if (iVar9 < 0) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = (float)*piVar13;
      }
      *(float *)((int)puVar14 + 0x50) = fVar21;
      iVar7 = iVar7 + 1;
      puVar14 = (uint *)((int)puVar14 + 4);
      iVar9 = iVar9 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar7 <= iVar18 + param_4);
  }
  iVar7 = 0;
  if (-1 < iVar18) {
    do {
      iVar9 = 0;
      fVar21 = 0.0;
      if (-1 < param_4) {
        puVar5 = auStack_1ac + (iVar7 + param_4) * 4 + -4;
        pfVar8 = param_1;
        do {
          fVar20 = *pfVar8;
          pfVar15 = (float *)(puVar5 + 0x50);
          iVar9 = iVar9 + 1;
          pfVar8 = pfVar8 + 1;
          puVar5 = puVar5 + -4;
          fVar21 = fVar21 + fVar20 * *pfVar15;
        } while (iVar9 <= param_4);
      }
      *(float *)((int)puVar10 + 0xf0) = fVar21;
      iVar7 = iVar7 + 1;
      puVar10 = (uint *)((int)puVar10 + 4);
    } while (iVar7 <= iVar18);
  }
  local_58 = 8 - iVar19;
  local_4c = 7 - iVar19;
  local_50 = iVar18 + -1;
  fVar21 = local_c0[iVar18];
  iVar7 = iVar18;
  do {
    iVar9 = iVar7 * 4;
    if (0 < iVar7) {
      puVar5 = auStack_1ac + iVar7 * 4 + -4;
      puVar10 = &uStack_1b4 + 1;
      iVar11 = iVar7;
      do {
        pfVar8 = (float *)(puVar5 + 0xec);
        iVar11 = iVar11 + -1;
        puVar5 = puVar5 + -4;
        fVar20 = fVar21 - (float)(int)(fVar21 * 0.00390625) * 256.0;
        fVar21 = *pfVar8 + (float)(int)(fVar21 * 0.00390625);
        *puVar10 = (int)fVar20;
        puVar10 = (uint *)((int *)puVar10 + 1);
      } while (0 < iVar11);
    }
    fVar21 = (float)scalbnf(fVar21,iVar19);
    fVar20 = (float)floorf(fVar21 * 0.125);
    uVar12 = local_4c;
    local_60 = 0;
    fVar21 = fVar21 - fVar20 * 8.0;
    local_5c = (uint)fVar21;
    fVar21 = fVar21 - (float)local_5c;
    if (iVar19 < 1) {
      if (iVar19 == 0) {
        local_60 = (int)(&uStack_1b4)[iVar7] >> 8;
        goto LAB_08a0be38;
      }
      if (0.5 <= fVar21) {
        local_60 = 2;
        goto LAB_08a0be38;
      }
    }
    else {
      iVar11 = (int)(&uStack_1b4)[iVar7] >> (local_58 & 0x1f);
      uVar2 = (&uStack_1b4)[iVar7] - (iVar11 << (local_58 & 0x1f));
      (&uStack_1b4)[iVar7] = uVar2;
      local_5c = iVar11 + local_5c;
      local_60 = (int)uVar2 >> (uVar12 & 0x1f);
LAB_08a0be38:
    }
    if (0 < local_60) {
      iVar11 = 0;
      local_5c = local_5c + 1;
      bVar6 = false;
      puVar10 = &uStack_1b4 + 1;
      if (0 < iVar7) {
        do {
          iVar3 = *puVar10;
          if (bVar6) {
            *puVar10 = 0xff - iVar3;
          }
          else if (iVar3 != 0) {
            bVar6 = true;
            *puVar10 = 0x100 - iVar3;
          }
          iVar11 = iVar11 + 1;
          puVar10 = (uint *)((int *)puVar10 + 1);
        } while (iVar11 < iVar7);
      }
      if (0 < iVar19) {
        if (iVar19 < 2) {
          if (0 < iVar19) {
            (&uStack_1b4)[iVar7] = (&uStack_1b4)[iVar7] & 0x7f;
          }
        }
        else if (iVar19 < 3) {
          (&uStack_1b4)[iVar7] = (&uStack_1b4)[iVar7] & 0x3f;
        }
      }
      if ((local_60 == 2) && (fVar21 = 1.0 - fVar21, bVar6)) {
        fVar20 = (float)scalbnf(0x3f800000,iVar19);
        fVar21 = fVar21 - fVar20;
      }
    }
    pfVar8 = local_68;
    iVar11 = iVar7 + -1;
    if (fVar21 != 0.0) {
LAB_08a0c020:
      if (fVar21 == 0.0) {
        iVar7 = iVar7 + -1;
        piVar13 = (int *)(auStack_1ac + iVar7 * 4 + -4);
        param_3 = param_3 + -0x10;
        iVar18 = *piVar13;
        while (iVar11 = local_60, iVar18 == 0) {
          piVar13 = piVar13 + -1;
          iVar7 = iVar7 + -1;
          param_3 = param_3 + -8;
          iVar18 = *piVar13;
        }
      }
      else {
        fVar21 = (float)scalbnf(fVar21,-iVar19);
        iVar11 = local_60;
        if (256.0 <= fVar21) {
          iVar7 = iVar7 + 1;
          *(int *)(auStack_1ac + iVar9 + -4) =
               (int)(fVar21 - (float)(int)(fVar21 * 0.00390625) * 256.0);
          *(int *)(auStack_1ac + iVar7 * 4 + -4) = (int)(float)(int)(fVar21 * 0.00390625);
        }
        else {
          *(int *)(auStack_1ac + iVar9 + -4) = (int)fVar21;
          param_3 = iVar19;
        }
      }
      fVar21 = (float)scalbnf(0x3f800000,param_3);
      if (-1 < iVar7) {
        piVar13 = (int *)(auStack_1ac + iVar7 * 4 + -4);
        iVar18 = iVar7;
        do {
          iVar18 = iVar18 + -1;
          piVar13[0x3c] = (int)(fVar21 * (float)*piVar13);
          fVar21 = fVar21 * 0.00390625;
          piVar13 = piVar13 + -1;
        } while (-1 < iVar18);
      }
      iVar18 = 0;
      if (-1 < iVar7) {
        iVar9 = iVar7;
        do {
          fVar21 = 0.0;
          iVar19 = 0;
          puVar5 = auStack_1ac + iVar9 * 4 + -4;
          bVar6 = local_64 < 0;
          pfVar15 = (float *)&DAT_08aa4ebc;
          while (!bVar6) {
            if (iVar18 < iVar19) {
              *(float *)((int)puVar16 + 0xa0) = fVar21;
              goto LAB_08a0c190;
            }
            fVar20 = *pfVar15;
            pfVar1 = (float *)(puVar5 + 0xf0);
            iVar19 = iVar19 + 1;
            pfVar15 = pfVar15 + 1;
            puVar5 = puVar5 + 4;
            fVar21 = fVar21 + fVar20 * *pfVar1;
            bVar6 = local_64 < iVar19;
          }
          *(float *)((int)puVar16 + 0xa0) = fVar21;
LAB_08a0c190:
          iVar9 = iVar9 + -1;
          iVar18 = iVar18 + 1;
          puVar16 = (uint *)((int)puVar16 + 4);
        } while (-1 < iVar9);
      }
      if (local_6c < 1) {
        if (-1 < local_6c) {
          if (-1 < iVar7) {
            puVar5 = auStack_1ac + iVar7 * 4 + -4;
            do {
              iVar7 = iVar7 + -1;
              fVar22 = fVar22 + *(float *)(puVar5 + 0xa0);
              puVar5 = puVar5 + -4;
            } while (-1 < iVar7);
          }
          if (iVar11 != 0) {
            fVar22 = -fVar22;
          }
          *pfVar8 = fVar22;
        }
      }
      else if (local_6c < 3) {
        fVar22 = 0.0;
        if (-1 < iVar7) {
          puVar5 = auStack_1ac + iVar7 * 4 + -4;
          iVar18 = iVar7;
          do {
            iVar18 = iVar18 + -1;
            fVar22 = fVar22 + *(float *)(puVar5 + 0xa0);
            puVar5 = puVar5 + -4;
          } while (-1 < iVar18);
        }
        fVar21 = fVar22;
        if (iVar11 != 0) {
          fVar21 = -fVar22;
        }
        *pfVar8 = fVar21;
        local_110[0] = local_110[0] - fVar22;
        iVar18 = 1;
        if (0 < iVar7) {
          puVar5 = auStack_1ac;
          do {
            iVar18 = iVar18 + 1;
            local_110[0] = local_110[0] + *(float *)(puVar5 + 0xa0);
            puVar5 = puVar5 + 4;
          } while (iVar18 <= iVar7);
        }
        if (iVar11 != 0) {
          local_110[0] = -local_110[0];
        }
        pfVar8[1] = local_110[0];
      }
      else if (local_6c < 4) {
        if (0 < iVar7) {
          puVar5 = auStack_1ac + iVar7 * 4 + -4;
          iVar18 = iVar7;
          do {
            fVar21 = *(float *)(puVar5 + 0x9c);
            fVar20 = fVar21 + *(float *)(puVar5 + 0xa0);
            iVar18 = iVar18 + -1;
            *(float *)(puVar5 + 0x9c) = fVar20;
            *(float *)(puVar5 + 0xa0) = *(float *)(puVar5 + 0xa0) + (fVar21 - fVar20);
            puVar5 = puVar5 + -4;
          } while (0 < iVar18);
        }
        if (1 < iVar7) {
          puVar5 = auStack_1ac + iVar7 * 4 + -4;
          iVar18 = iVar7;
          do {
            fVar21 = *(float *)(puVar5 + 0x9c);
            fVar20 = fVar21 + *(float *)(puVar5 + 0xa0);
            iVar18 = iVar18 + -1;
            *(float *)(puVar5 + 0x9c) = fVar20;
            *(float *)(puVar5 + 0xa0) = *(float *)(puVar5 + 0xa0) + (fVar21 - fVar20);
            puVar5 = puVar5 + -4;
          } while (1 < iVar18);
        }
        if (1 < iVar7) {
          puVar5 = auStack_1ac + iVar7 * 4 + -4;
          do {
            iVar7 = iVar7 + -1;
            fVar22 = fVar22 + *(float *)(puVar5 + 0xa0);
            puVar5 = puVar5 + -4;
          } while (1 < iVar7);
        }
        if (iVar11 == 0) {
          *pfVar8 = local_110[0];
          pfVar8[1] = local_110[1];
          pfVar8[2] = fVar22;
        }
        else {
          *pfVar8 = -local_110[0];
          pfVar8[1] = -local_110[1];
          pfVar8[2] = -fVar22;
        }
      }
      return local_5c & 7;
    }
    uVar12 = 0;
    if (iVar18 <= iVar11) {
      puVar10 = (uint *)(auStack_1ac + iVar11 * 4 + -4);
      do {
        iVar11 = iVar11 + -1;
        uVar12 = uVar12 | *puVar10;
        puVar10 = puVar10 + -1;
      } while (iVar18 <= iVar11);
    }
    if (uVar12 != 0) goto LAB_08a0c020;
    piVar13 = (int *)(auStack_1ac + local_50 * 4 + -4);
    iVar9 = 1;
    iVar11 = *piVar13;
    while (iVar11 == 0) {
      piVar13 = piVar13 + -1;
      iVar9 = iVar9 + 1;
      iVar11 = *piVar13;
    }
    iVar11 = iVar7 + 1;
    iVar7 = iVar7 + iVar9;
    if (iVar11 <= iVar7) {
      iVar9 = iVar11 + param_4;
      puVar17 = auStack_1ac + iVar11 * 4 + -4;
      piVar13 = (int *)(local_70 + (iVar11 + local_54) * 4);
      puVar5 = auStack_1ac + iVar9 * 4 + -4;
      do {
        fVar21 = 0.0;
        iVar3 = 0;
        *(float *)(puVar5 + 0x50) = (float)*piVar13;
        if (-1 < param_4) {
          puVar4 = auStack_1ac + iVar9 * 4 + -4;
          pfVar8 = param_1;
          do {
            fVar20 = *pfVar8;
            pfVar15 = (float *)(puVar4 + 0x50);
            iVar3 = iVar3 + 1;
            pfVar8 = pfVar8 + 1;
            puVar4 = puVar4 + -4;
            fVar21 = fVar21 + fVar20 * *pfVar15;
          } while (iVar3 <= param_4);
        }
        *(float *)(puVar17 + 0xf0) = fVar21;
        iVar11 = iVar11 + 1;
        puVar17 = puVar17 + 4;
        iVar9 = iVar9 + 1;
        piVar13 = piVar13 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar11 <= iVar7);
    }
    fVar21 = local_c0[iVar7];
  } while( true );
}

