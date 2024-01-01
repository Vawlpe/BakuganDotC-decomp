#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08819ac8(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined4 in_V74;
  
  iVar12 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x54) * 4;
  pfVar13 = (float *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x54) * DAT_08ac5db0 * 0x14);
  uVar3 = FUN_089f1308(param_2);
  uVar3 = FUN_089f1418(uVar3);
  puVar4 = (undefined4 *)FUN_089e3014(DAT_08ac5c8c,uVar3,0xffffffff);
  *puVar4 = 0xdf000032;
  puVar4[1] = 0xe0000000;
  puVar4[2] = 0xe1000000;
  puVar4[3] = 0x3a000000;
  uVar18 = DAT_08b001c4 >> 8;
  uVar1 = DAT_08b001c8 >> 8;
  puVar4[4] = DAT_08b001c0 >> 8 | 0x3b000000;
  puVar4[5] = uVar18 | 0x3b000000;
  puVar4[6] = uVar1 | 0x3b000000;
  uVar18 = DAT_08b001d4 >> 8;
  uVar1 = DAT_08b001d8 >> 8;
  puVar4[7] = DAT_08b001d0 >> 8 | 0x3b000000;
  puVar4[8] = uVar18 | 0x3b000000;
  puVar4[9] = uVar1 | 0x3b000000;
  uVar18 = DAT_08b001e4 >> 8;
  uVar1 = DAT_08b001e8 >> 8;
  puVar4[10] = DAT_08b001e0 >> 8 | 0x3b000000;
  puVar4[0xb] = uVar18 | 0x3b000000;
  puVar4[0xc] = uVar1 | 0x3b000000;
  uVar18 = DAT_08b001f4 >> 8;
  uVar1 = DAT_08b001f8 >> 8;
  puVar4[0xd] = DAT_08b001f0 >> 8 | 0x3b000000;
  puVar4[0xe] = uVar18 | 0x3b000000;
  puVar4[0xf] = uVar1 | 0x3b000000;
  puVar4[0x10] = 0x23000000;
  uVar3 = FUN_089f74a8();
  puVar5 = (uint *)FUN_089f7110(uVar3,puVar4 + 0x11,0);
  auVar2 = vsat0_q(*(undefined (*) [16])(param_1 + 0x20));
  auVar2 = vscl_q(auVar2,in_V74);
  auVar2 = vf2iz_q(auVar2,0x17);
  uVar18 = vi2uc_q(auVar2);
  *puVar5 = uVar18 & 0xffffff | 0x55000000;
  puVar5[1] = uVar18 >> 0x18 | 0x58000000;
  if (*(int *)(param_1 + 0x98) < 2) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    fVar16 = (float)(*(int *)(param_1 + 0x44) + -1);
    fVar15 = (float)(*(int *)(param_1 + 0x48) + -1);
    iVar6 = 0;
    fVar14 = 0.0;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        iVar7 = *(int *)(param_1 + 0x44);
        iVar8 = 0;
        fVar17 = 0.0;
        if (0 < iVar7) {
          do {
            pfVar9 = pfVar13 + (iVar7 * iVar6 + iVar8) * 5;
            pfVar9[2] = fVar17;
            pfVar9[3] = fVar14;
            pfVar9[4] = 0.0;
            pfVar9[1] = (float)iVar6 * (256.0 / fVar15);
            *pfVar9 = (float)iVar8 * (256.0 / fVar16);
            iVar8 = iVar8 + 1;
            fVar17 = 480.0 / fVar16 + fVar17;
          } while (iVar8 < *(int *)(param_1 + 0x44));
        }
        iVar6 = iVar6 + 1;
        fVar14 = 272.0 / fVar15 + fVar14;
      } while (iVar6 < *(int *)(param_1 + 0x48));
    }
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar7 = *(int *)(param_1 + 0x44);
    while( true ) {
      iVar8 = 1;
      pfVar9 = pfVar13;
      if (1 < iVar7) {
        do {
          iVar10 = iVar7 * iVar6 + iVar8;
          fVar14 = pfVar13[iVar7 * iVar6 * 5 + 1];
          iVar8 = iVar8 + 1;
          pfVar13[iVar10 * 5] = pfVar9[5] + *(float *)(iVar12 + iVar10 * 4) * 0.05;
          (pfVar13 + iVar10 * 5)[1] =
               fVar14 + *(float *)(iVar12 + (*(int *)(param_1 + 0x54) - iVar10) * 4 + -4) * 0.1;
          pfVar9 = pfVar9 + 5;
        } while (iVar8 < *(int *)(param_1 + 0x44));
      }
      iVar6 = iVar6 + 1;
      if (*(int *)(param_1 + 0x48) <= iVar6) break;
      iVar7 = *(int *)(param_1 + 0x44);
    }
  }
  iVar12 = *(int *)(param_1 + 0x58);
  uVar18 = *(uint *)(param_1 + 0x40);
  puVar5[2] = 0x12801183;
  puVar11 = puVar5 + 3;
  if (uVar18 != 0) {
    *puVar11 = (uVar18 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar5[4] = uVar18 & 0xffffff | 0x2000000;
    puVar11 = puVar5 + 5;
  }
  if (pfVar13 != (float *)0x0) {
    *puVar11 = ((uint)pfVar13 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar11[1] = (uint)pfVar13 & 0xffffff | 0x1000000;
    puVar11 = puVar11 + 2;
  }
  *puVar11 = iVar12 - 2U | 0x4040000;
  puVar11[1] = 0xe7000000;
  FUN_089f13c8(param_2,puVar11 + 2);
  return;
}

