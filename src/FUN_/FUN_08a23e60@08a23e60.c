#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a23e60(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined4 uVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_40;
  
  local_5c = 0;
  if (DAT_08afee20 == 0) {
    do {
      local_58 = 0;
      local_40 = local_5c * 0x700;
      local_54 = 0;
      do {
        zz_sceKernelMemset(&DAT_08afeea4 + local_40,0,0x70);
        local_50 = 0;
        piVar11 = &DAT_08affca4;
        iVar15 = 0;
        piVar14 = piVar11;
        do {
          psVar4 = DAT_08b000b4;
          if (piVar11[7] != 0) {
            uVar5 = piVar11[6];
            local_50 = local_50 + 1;
            if ((uVar5 & 0x400) == 0) {
              if ((uVar5 & 0x100) == 0) {
                iVar12 = *piVar11;
                if (iVar12 != 0) {
                  zz_sceKernelMemset(DAT_08b000b4,0,0x70);
                  uVar9 = DAT_08b000b0;
                  bVar1 = *(byte *)(piVar11 + 6);
                  if (bVar1 == 1) {
                    if (0xf < piVar11[1]) {
                      iVar6 = piVar11[8];
                      if (piVar11[1] < iVar6 + 0x10) {
                        iVar6 = piVar11[4];
                        piVar11[8] = iVar6;
                      }
                      zz_sceKernelMemcpy(uVar9,iVar12 + iVar6,0x10);
LAB_08a24398:
                      iVar12 = FUN_08a246dc(psVar4,DAT_08b000b0,&DAT_08affcd4 + iVar15 * 0x20);
                      if (iVar12 == 3) {
                        iVar12 = piVar11[4];
                        piVar11[5] = piVar11[8];
                        goto LAB_08a243e0;
                      }
                      if (iVar12 == 6) {
                        iVar12 = piVar11[8];
                        piVar11[8] = iVar12 + 0x10;
                        piVar11[4] = iVar12;
                      }
                      else {
                        piVar11[8] = piVar11[8] + 0x10;
                      }
                    }
                  }
                  else if (bVar1 < 2) {
                    if (bVar1 == 0) {
                      if (piVar11[1] < piVar11[8] + 0x10) {
                        piVar11[8] = 0;
                        goto LAB_08a2436c;
                      }
                      zz_sceKernelMemcpy(DAT_08b000b0,iVar12 + piVar11[8],0x10);
                      uVar9 = DAT_08b000b0;
                      piVar11[8] = piVar11[8] + 0x10;
                      FUN_08a246dc(psVar4,uVar9,&DAT_08affcd4 + iVar15 * 0x20);
                    }
                  }
                  else if ((bVar1 == 2) && (0xf < piVar11[1])) {
                    if (piVar11[8] + 0x10 <= piVar11[1]) {
                      zz_sceKernelMemcpy(DAT_08b000b0,iVar12 + piVar11[8],0x10);
                      goto LAB_08a24398;
                    }
                    piVar11[8] = 0;
LAB_08a2436c:
                    piVar11[7] = 0;
                  }
                }
              }
              else {
                iVar12 = *piVar11;
                if (iVar12 != 0) {
                  if ((uVar5 & 1) == 0) {
                    iVar8 = piVar11[8];
                    if ((uVar5 & 0x200) == 0) {
                      if (piVar11[1] < iVar8 + 0x38) {
LAB_08a24500:
                        zz_sceKernelMemset(DAT_08b000b4,0,0x70);
                        zz_sceKernelMemcpy(psVar4,iVar12 + piVar11[8],piVar11[1] - piVar11[8]);
                        piVar11[8] = 0;
                        goto LAB_08a2436c;
                      }
LAB_08a244e8:
                      zz_sceKernelMemcpy(DAT_08b000b4,iVar12 + iVar8,0x38);
                      iVar12 = piVar11[8] + 0x38;
                    }
                    else {
                      if (piVar11[1] < iVar8 + 0x70) goto LAB_08a24500;
LAB_08a24540:
                      zz_sceKernelMemcpy(DAT_08b000b4,iVar12 + iVar8,0x70);
                      iVar12 = piVar11[8] + 0x70;
                    }
LAB_08a243e0:
                    piVar11[8] = iVar12;
                  }
                  else {
                    iVar6 = piVar11[1];
                    if ((uVar5 & 0x200) == 0) {
                      if (0x37 < iVar6) {
                        iVar8 = piVar11[8];
                        if (iVar8 + 0x38 < iVar6) goto LAB_08a244e8;
                        iVar6 = iVar6 - iVar8;
                        zz_sceKernelMemcpy(DAT_08b000b4,iVar12 + iVar8,iVar6);
                        iVar8 = 0x38;
LAB_08a2459c:
                        piVar11[8] = 0;
                        zz_sceKernelMemcpy((int)psVar4 + iVar6,iVar12,iVar8 - iVar6);
                        piVar11[8] = iVar8 - iVar6;
                        goto LAB_08a2403c;
                      }
                      iVar6 = iVar6 - piVar11[8];
                      zz_sceKernelMemcpy(DAT_08b000b4,iVar12 + piVar11[8],iVar6);
                      piVar11[8] = 0;
                      iVar8 = 0x38 - iVar6;
                      while( true ) {
                        if (iVar8 <= piVar14[1]) break;
                        zz_sceKernelMemcpy((int)psVar4 + iVar6,iVar12,piVar14[1]);
                        iVar6 = iVar6 + piVar14[1];
                        iVar8 = iVar8 - piVar14[1];
                      }
                      zz_sceKernelMemcpy((int)psVar4 + iVar6,iVar12,iVar8);
                    }
                    else {
                      if (0x6f < iVar6) {
                        iVar8 = piVar11[8];
                        if (iVar8 + 0x70 < iVar6) goto LAB_08a24540;
                        iVar6 = iVar6 - iVar8;
                        zz_sceKernelMemcpy(DAT_08b000b4,iVar12 + iVar8,iVar6);
                        iVar8 = 0x70;
                        goto LAB_08a2459c;
                      }
                      iVar6 = iVar6 - piVar11[8];
                      zz_sceKernelMemcpy(DAT_08b000b4,iVar12 + piVar11[8],iVar6);
                      piVar11[8] = 0;
                      iVar8 = 0x70 - iVar6;
                      while( true ) {
                        if (iVar8 <= piVar14[1]) break;
                        zz_sceKernelMemcpy((int)psVar4 + iVar6,iVar12,piVar14[1]);
                        iVar6 = iVar6 + piVar14[1];
                        iVar8 = iVar8 - piVar14[1];
                      }
                      zz_sceKernelMemcpy((int)psVar4 + iVar6,iVar12,iVar8);
                    }
                    piVar14[8] = piVar14[8] + iVar8;
                  }
                }
              }
            }
LAB_08a2403c:
            psVar4 = DAT_08b000b4;
            iVar12 = 0;
            psVar10 = DAT_08b000b4;
            do {
              uVar5 = (&DAT_08affcbc)[iVar15 * 0x10];
              if ((uVar5 & 0x100000) == 0) {
                (&DAT_08affcd8)[iVar15 * 0x10] = 0x7f;
              }
              else {
                iVar6 = (&DAT_08affcdc)[iVar15 * 0x10];
                iVar8 = ((iVar6 - (&DAT_08affce0)[iVar15 * 0x10]) * 0x7f) / iVar6;
                (&DAT_08affcd8)[iVar15 * 0x10] = iVar8;
                if (iVar8 < 0) {
                  (&DAT_08affcd8)[iVar15 * 0x10] = 0;
                }
                iVar8 = (&DAT_08affce0)[iVar15 * 0x10] + 1;
                (&DAT_08affce0)[iVar15 * 0x10] = iVar8;
                if (iVar6 <= iVar8) {
                  (&DAT_08affcbc)[iVar15 * 0x10] = uVar5 & 0xffefffff;
                  (&DAT_08affce0)[iVar15 * 0x10] = 0;
                  if ((uVar5 & 0x10000) == 0) {
                    if ((uVar5 & 0x20000) == 0) {
                      if ((uVar5 & 0x40000) != 0) {
                        (&DAT_08affcbc)[iVar15 * 0x10] = uVar5 & 0xffebffff;
                        (&DAT_08affcc0)[iVar15 * 0x10] = (&DAT_08affec0)[iVar15 * 0x10];
                      }
                    }
                    else {
                      uVar2 = (&DAT_08affed4)[iVar15 * 0x20];
                      uVar3 = (&DAT_08affed6)[iVar15 * 0x20];
                      uVar9 = (&DAT_08affecc)[iVar15 * 0x10];
                      uVar13 = (&DAT_08affed0)[iVar15 * 0x10];
                      (&DAT_08affcbc)[iVar15 * 0x10] = uVar5 & 0xffedffff;
                      (&DAT_08affcc0)[iVar15 * 0x10] = (&DAT_08affec0)[iVar15 * 0x10];
                      (&DAT_08affcc4)[iVar15 * 0x10] = (&DAT_08affec4)[iVar15 * 0x10];
                      (&DAT_08affcd4)[iVar15 * 0x20] = uVar2;
                      (&DAT_08affcd6)[iVar15 * 0x20] = uVar3;
                      (&DAT_08affccc)[iVar15 * 0x10] = uVar9;
                      (&DAT_08affcd0)[iVar15 * 0x10] = uVar13;
                    }
                  }
                  else {
                    uVar2 = (&DAT_08affed4)[iVar15 * 0x20];
                    uVar3 = (&DAT_08affed6)[iVar15 * 0x20];
                    uVar13 = (&DAT_08affecc)[iVar15 * 0x10];
                    uVar9 = (&DAT_08affed0)[iVar15 * 0x10];
                    (&DAT_08affcbc)[iVar15 * 0x10] = uVar5 & 0xffeeffff;
                    (&DAT_08affcc0)[iVar15 * 0x10] = (&DAT_08affec0)[iVar15 * 0x10];
                    (&DAT_08affcc4)[iVar15 * 0x10] = (&DAT_08affec4)[iVar15 * 0x10];
                    (&DAT_08affcac)[iVar15 * 0x10] = (&DAT_08affeac)[iVar15 * 0x10];
                    (&DAT_08affcb0)[iVar15 * 0x10] = (&DAT_08affeb0)[iVar15 * 0x10];
                    (&DAT_08affcd4)[iVar15 * 0x20] = uVar2;
                    (&DAT_08affcd6)[iVar15 * 0x20] = uVar3;
                    (&DAT_08affccc)[iVar15 * 0x10] = uVar13;
                    (&DAT_08affcd0)[iVar15 * 0x10] = uVar9;
                  }
                }
              }
              iVar6 = (&DAT_08affcd8)[iVar15 * 0x10];
              if ((((&DAT_08affcbc)[iVar15 * 0x10] & 0x100) == 0) ||
                 (((&DAT_08affcbc)[iVar15 * 0x10] & 0x200) == 0)) {
                iVar8 = (((&DAT_08affcb0)[iVar15 * 0x10] * iVar6) / 0x7f) * (int)*psVar10;
                iVar16 = (((&DAT_08affcac)[iVar15 * 0x10] * iVar6) / 0x7f) * (int)*psVar10;
                iVar8 = iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x14);
                iVar16 = iVar16 + ((uint)(iVar16 >> 0x1f) >> 0x14);
              }
              else {
                iVar16 = (((&DAT_08affcac)[iVar15 * 0x10] * iVar6) / 0x7f) * (int)psVar4[iVar12 * 2]
                ;
                iVar8 = (((&DAT_08affcb0)[iVar15 * 0x10] * iVar6) / 0x7f) *
                        (int)(psVar4 + iVar12 * 2)[1];
                iVar16 = iVar16 + ((uint)(iVar16 >> 0x1f) >> 0x14);
                iVar8 = iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x14);
              }
              psVar7 = (short *)(&DAT_08afeea4 + local_40 + iVar12 * 4);
              iVar16 = (int)*psVar7 + (iVar16 >> 0xc);
              iVar6 = (int)psVar7[1] + (iVar8 >> 0xc);
              if (0x7ffe < iVar16) {
                iVar16 = 0x7fff;
              }
              if (0x7ffe < iVar6) {
                iVar6 = 0x7fff;
              }
              iVar12 = iVar12 + 1;
              if (iVar16 < -0x8000) {
                iVar16 = -0x8000;
              }
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
              *psVar7 = (short)iVar16;
              psVar10 = psVar10 + 1;
              psVar7[1] = (short)iVar6;
            } while (iVar12 < 0x1c);
          }
          iVar15 = iVar15 + 1;
          piVar14 = piVar14 + 0x10;
          piVar11 = piVar11 + 0x10;
        } while (iVar15 < 8);
        local_54 = local_54 + 1;
        local_40 = local_40 + 0x70;
        local_58 = local_58 | local_50;
      } while (local_54 < 0x10);
      if (local_58 == 0) {
        zz_sceKernelWaitEventFlag(DAT_08b000b8,1,0x20,0,0);
      }
      zz_sceAudioOutputBlocking
                (*(undefined4 *)(param_2 + 4),0x8000,&DAT_08afeea4 + local_5c * 0x700);
      local_5c = local_5c ^ 1;
    } while (DAT_08afee20 == 0);
  }
  zz_sceAudioOutputBlocking(*(undefined4 *)(param_2 + 4),0,0);
  zz_sceKernelExitThread(0);
  return 0;
}

