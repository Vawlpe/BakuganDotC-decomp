#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e1430(float param_1,float param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  ushort *puVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((param_5 & 1) == 0) goto LAB_089e1544;
  fVar18 = *(float *)(param_4 + 0x1c);
  fVar20 = fVar18 + *(float *)(param_4 + 0x18) * param_1;
  fVar17 = *(float *)(param_4 + 0x10);
  fVar19 = *(float *)(param_4 + 0x14);
  if (((fVar20 < fVar19) || (fVar19 < fVar18)) || (fVar18 == fVar20)) {
    if (fVar17 < fVar20) {
      *(float *)(param_4 + 0x1c) = fVar20;
      goto LAB_089e1544;
    }
    if (fVar18 < fVar17) {
      *(float *)(param_4 + 0x1c) = fVar20;
      goto LAB_089e1544;
    }
    if (fVar18 == fVar20) {
      *(float *)(param_4 + 0x1c) = fVar20;
      goto LAB_089e1544;
    }
    if (*(short *)(param_4 + 0xe) == 0) {
      fVar19 = fVar17;
    }
  }
  else if (*(short *)(param_4 + 0xe) != 0) {
    memset_jak(*(undefined **)(param_4 + 8),0,(uint)*(ushort *)(param_4 + 0xc) * 2);
    *(float *)(param_4 + 0x1c) = fVar17;
    goto LAB_089e1544;
  }
  *(float *)(param_4 + 0x1c) = fVar19;
LAB_089e1544:
  if (((param_5 & 2) != 0) && (param_4 != 0)) {
    fVar19 = *(float *)(param_4 + 0x1c);
    if ((*(uint *)(param_3 + 0x28) & 4) == 0) {
      fVar19 = (float)(int)FLOOR(fVar19 + 0.5);
    }
    bVar2 = param_2 < 1.0;
    uVar8 = (uint)*(ushort *)(param_4 + 0xc);
    iVar6 = *(int *)(param_4 + 4);
    puVar9 = *(ushort **)(param_4 + 8);
    while (puVar4 = puVar9, iVar13 = iVar6, uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      iVar6 = iVar13 + 0x10;
      puVar9 = puVar4 + 1;
      if (((*(ushort *)(iVar13 + 2) & 0x100) == 0) ||
         (*(ushort *)(iVar13 + 0xe) < *(ushort *)(param_3 + 0x18))) {
        if ((*(ushort *)(iVar13 + 2) & 1) == 0) {
          FUN_08a17f48(fVar19,param_2,iVar13,puVar4,param_3);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar13 + 10);
          pfVar16 = *(float **)(iVar13 + 4);
          sVar3 = (short)pfVar16;
          if ((*(ushort *)(iVar13 + 8) & 0x80) == 0) {
            if (1 < uVar14) {
              uVar7 = (uint)*(byte *)(iVar13 + 0xc);
              uVar15 = *(ushort *)(iVar13 + 8) & 0xf;
              if (uVar15 == 2) {
                uVar7 = uVar7 * 3;
              }
              if (uVar15 == 3) {
                uVar7 = uVar7 * 5;
              }
              uVar7 = (uVar7 + 1) * 4;
              if ((*(ushort *)(iVar13 + 8) & 0x80) != 0) {
                uVar7 = uVar7 / 2;
              }
              pfVar10 = (float *)((int)pfVar16 + (uVar14 - 1) * uVar7);
              pfVar11 = (float *)((int)pfVar16 + (uint)*puVar4);
              if (pfVar11 < pfVar10) {
                pfVar11 = (float *)((int)pfVar11 + uVar7);
              }
              fVar17 = *pfVar11;
              pfVar5 = pfVar11;
              if (fVar17 <= fVar19) {
                do {
                  fVar18 = fVar17;
                  pfVar11 = pfVar5;
                  if (pfVar10 <= pfVar11) {
                    uVar7 = 0;
                    uVar15 = (short)pfVar11 - sVar3;
                    fVar17 = fVar18;
                    goto LAB_089e1770;
                  }
                  fVar17 = *(float *)((int)pfVar11 + uVar7);
                  pfVar5 = (float *)((int)pfVar11 + uVar7);
                } while (fVar17 <= fVar19);
                uVar15 = (short)pfVar11 - sVar3;
              }
              else {
                do {
                  fVar18 = fVar17;
                  if (pfVar11 <= pfVar16) {
                    uVar7 = 0;
                    uVar15 = (short)pfVar11 - sVar3;
                    fVar17 = fVar18;
                    goto LAB_089e1770;
                  }
                  pfVar11 = (float *)((int)pfVar11 - uVar7);
                  fVar20 = *pfVar11;
                  fVar17 = fVar20;
                } while (fVar19 < fVar20);
                uVar15 = (short)pfVar11 - sVar3;
                fVar17 = fVar18;
                fVar18 = fVar20;
              }
LAB_089e1770:
              *puVar4 = uVar15;
              if (fVar18 == fVar19) {
                uVar7 = 0;
              }
              pfVar16 = (float *)((int)pfVar11 + uVar7);
            }
            else {
              fVar17 = 0.0;
              fVar18 = 0.0;
              pfVar11 = pfVar16;
            }
            FUN_089dd910(fVar19,fVar18,fVar17,iVar13,pfVar11,pfVar16,0);
            iVar12 = *(int *)(param_3 + 4) + (uint)*(ushort *)(iVar13 + 0xe) * 0xc0;
            bVar1 = *(byte *)(iVar13 + 0xd);
          }
          else {
            if (1 < uVar14) {
              uVar7 = (uint)*(byte *)(iVar13 + 0xc);
              uVar15 = *(ushort *)(iVar13 + 8) & 0xf;
              if (uVar15 == 2) {
                uVar7 = uVar7 * 3;
              }
              if (uVar15 == 3) {
                uVar7 = uVar7 * 5;
              }
              uVar7 = (uVar7 + 1) * 4;
              if ((*(ushort *)(iVar13 + 8) & 0x80) != 0) {
                uVar7 = uVar7 / 2;
              }
              pfVar10 = (float *)((int)pfVar16 + (uVar14 - 1) * uVar7);
              pfVar11 = (float *)((int)pfVar16 + (uint)*puVar4);
              if (pfVar11 < pfVar10) {
                pfVar11 = (float *)((int)pfVar11 + uVar7);
              }
              fVar17 = (float)FUN_089daf94(*(undefined2 *)pfVar11);
              pfVar5 = pfVar11;
              if (fVar17 <= fVar19) {
                do {
                  fVar18 = fVar17;
                  pfVar11 = pfVar5;
                  if (pfVar10 <= pfVar11) {
                    uVar7 = 0;
                    uVar15 = (short)pfVar11 - sVar3;
                    fVar17 = fVar18;
                    goto LAB_089e18f8;
                  }
                  fVar17 = (float)FUN_089daf94(*(undefined2 *)(float *)((int)pfVar11 + uVar7));
                  pfVar5 = (float *)((int)pfVar11 + uVar7);
                } while (fVar17 <= fVar19);
                uVar15 = (short)pfVar11 - sVar3;
              }
              else {
                do {
                  fVar18 = fVar17;
                  if (pfVar11 <= pfVar16) {
                    uVar7 = 0;
                    uVar15 = (short)pfVar11 - sVar3;
                    fVar17 = fVar18;
                    goto LAB_089e18f8;
                  }
                  pfVar11 = (float *)((int)pfVar11 - uVar7);
                  fVar20 = (float)FUN_089daf94(*(undefined2 *)pfVar11);
                  fVar17 = fVar20;
                } while (fVar19 < fVar20);
                uVar15 = (short)pfVar11 - sVar3;
                fVar17 = fVar18;
                fVar18 = fVar20;
              }
LAB_089e18f8:
              *puVar4 = uVar15;
              if (fVar18 == fVar19) {
                uVar7 = 0;
              }
              pfVar16 = pfVar11;
              pfVar11 = (float *)((int)pfVar11 + uVar7);
            }
            else {
              fVar17 = 0.0;
              fVar18 = 0.0;
              pfVar11 = pfVar16;
            }
            FUN_089ddbc8(fVar19,fVar18,fVar17,iVar13,pfVar16,pfVar11,0);
            iVar12 = *(int *)(param_3 + 4) + (uint)*(ushort *)(iVar13 + 0xe) * 0xc0;
            bVar1 = *(byte *)(iVar13 + 0xd);
          }
          uVar14 = (uint)bVar1;
          iVar13 = 0x1e;
          if ((int)(uVar14 - 0x48) < 7) {
            iVar13 = (uVar14 - 0x48) * 5;
          }
          if (((*(ushort *)(iVar12 + 2) & 0x4000) != 0) && (uVar14 == 0x4b)) {
            if (param_4 == *(int *)(param_3 + 0x14) + *(short *)(param_3 + 0x22) * 0x30) {
              param_2 = 1.0;
            }
            else {
              param_2 = 0.0;
            }
          }
          FUN_089ddeb0(param_2,iVar12 + (uint)(byte)(&DAT_08aa30af)[iVar13],bVar2,uVar14);
          *(ushort *)(iVar12 + 0x42) =
               *(ushort *)(iVar12 + 0x42) & ~(ushort)(byte)(&DAT_08aa30b0)[iVar13] |
               (ushort)(byte)(&DAT_08aa30b1)[iVar13];
        }
      }
    }
  }
  return;
}

