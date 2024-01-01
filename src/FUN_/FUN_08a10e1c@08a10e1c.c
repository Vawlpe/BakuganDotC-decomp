#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a10e1c(float param_1,int param_2,uint param_3)

{
  bool bVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  ushort uVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  
  if (param_2 == 0) {
    return;
  }
  if ((*(ushort *)(param_2 + 2) & 0x10) == 0) {
    return;
  }
  uVar6 = (uint)*(char *)(param_2 + 0x19);
  uVar4 = (uint)*(byte *)(param_2 + 0x18);
  uVar11 = uVar4;
  if ((-1 < (int)uVar6) && (uVar11 = uVar6, (int)uVar4 < (int)uVar6)) {
    uVar11 = uVar4;
  }
  iVar12 = *(int *)(param_2 + 0x14) + uVar11 * 0x30;
  if (iVar12 == 0) {
    return;
  }
  if ((param_3 & 1) == 0) goto LAB_08a10ef8;
  fVar14 = *(float *)(iVar12 + 0x20);
  fVar15 = *(float *)(iVar12 + 0x18);
  fVar16 = *(float *)(iVar12 + 0x14);
  fVar18 = fVar14 + *(float *)(iVar12 + 0x1c) * param_1;
  bVar1 = *(char *)(iVar12 + 0xe) == '\0';
  if (((fVar18 < fVar15) || (fVar15 < fVar14)) || (fVar14 == fVar18)) {
    if (fVar18 <= fVar16) {
      if (fVar14 < fVar16) {
        *(float *)(iVar12 + 0x20) = fVar18;
        goto LAB_08a10ef8;
      }
      if (fVar14 == fVar18) {
        *(float *)(iVar12 + 0x20) = fVar18;
        goto LAB_08a10ef8;
      }
      fVar18 = fVar15;
      if (bVar1) {
        fVar18 = fVar16;
      }
    }
  }
  else {
    fVar18 = fVar16;
    if (bVar1) {
      fVar18 = fVar15;
    }
  }
  *(float *)(iVar12 + 0x20) = fVar18;
LAB_08a10ef8:
  if ((param_3 & 2) != 0) {
    fVar18 = *(float *)(iVar12 + 0x20);
    if (*(short *)(iVar12 + 0xc) == 0) {
      sVar3 = (short)(int)FLOOR(fVar18);
      *(short *)(iVar12 + 0x2c) = sVar3;
      *(float *)(iVar12 + 0x24) = fVar18 - (float)(int)FLOOR(fVar18);
      *(short *)(iVar12 + 0x2e) = sVar3 + 1;
      *(short *)(iVar12 + 0x28) = sVar3;
      *(short *)(iVar12 + 0x2a) = sVar3 + 1;
      return;
    }
    uVar11 = (uint)*(byte *)(iVar12 + 0xd);
    fVar14 = 0.0;
    if (uVar11 != 0) {
      iVar13 = 0;
      iVar5 = *(int *)(iVar12 + 8);
      do {
        psVar7 = (short *)(iVar5 + iVar13 * 8);
        psVar9 = *(short **)(psVar7 + 2);
        if (fVar14 <= fVar18) {
          iVar5 = (int)fVar18;
          fVar15 = fVar18;
        }
        else {
          iVar5 = 0;
          fVar15 = 0.0;
        }
        sVar3 = *psVar9;
        while( true ) {
          iVar17 = (int)sVar3;
          psVar2 = psVar9 + 1;
          if (iVar17 == 0) break;
          if (iVar17 < 1) {
            iVar10 = -iVar17;
            if (iVar5 < iVar10) {
              iVar17 = iVar5 + 1;
              if (iVar5 + 1 == iVar10) {
                iVar17 = iVar5 + 2;
              }
              fVar15 = fVar15 - (float)iVar5;
              iVar10 = (int)psVar2[iVar5];
              iVar5 = (int)psVar2[iVar17];
              goto LAB_08a10f5c;
            }
            psVar9 = psVar2 + -iVar17;
            iVar17 = iVar10;
          }
          else {
            if (iVar5 < iVar17) {
              iVar10 = (int)*psVar2;
              iVar5 = (int)psVar9[3];
              fVar15 = fVar15 / (float)iVar17;
              goto LAB_08a10f5c;
            }
            psVar9 = psVar9 + 2;
          }
          sVar3 = *psVar9;
          iVar5 = iVar5 - iVar17;
          fVar15 = fVar15 - (float)iVar17;
        }
        iVar5 = (int)*psVar2;
        fVar15 = 0.0;
        iVar10 = iVar5;
LAB_08a10f5c:
        sVar3 = *psVar7;
        uVar8 = psVar7[1] & 0xf;
        if (((psVar7[1] & 0x80U) == 0) || ((sVar3 != 3 && (sVar3 != 0xb)))) {
          fVar16 = (float)iVar10;
          if (uVar8 == 1) {
            fVar16 = fVar16 + fVar15 * (float)(iVar5 - iVar10);
          }
          FUN_08a10c2c(fVar16,param_2);
          uVar11 = (uint)*(byte *)(iVar12 + 0xd);
        }
        else {
          if ((uVar8 == 1) && (iVar10 != iVar5)) {
            fVar15 = fVar15 * (float)(iVar5 - iVar10) + (float)iVar10;
            iVar17 = (int)FLOOR(fVar15);
            if (iVar10 < iVar5) {
              fVar15 = fVar15 - (float)iVar17;
              iVar5 = iVar17 + 1;
              iVar10 = iVar17;
            }
            else {
              iVar10 = iVar17 + 1;
              fVar15 = (float)iVar10 - fVar15;
              iVar5 = iVar17;
            }
          }
          *(float *)(iVar12 + 0x24) = fVar15;
          if (sVar3 != 3) {
            *(short *)(iVar12 + 0x2c) = (short)iVar10;
            *(short *)(iVar12 + 0x2e) = (short)iVar5;
          }
          else {
            *(short *)(iVar12 + 0x28) = (short)iVar10;
            *(short *)(iVar12 + 0x2a) = (short)iVar5;
          }
        }
        iVar13 = iVar13 + 1;
        if ((int)uVar11 <= iVar13) {
          return;
        }
        iVar5 = *(int *)(iVar12 + 8);
      } while( true );
    }
  }
  return;
}

