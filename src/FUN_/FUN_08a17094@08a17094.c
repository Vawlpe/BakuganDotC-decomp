#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a17094(float param_1,int param_2,ushort *param_3,float *param_4)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar16 [16];
  undefined auVar18 [16];
  undefined auVar20 [16];
  undefined auVar22 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar27 [16];
  undefined auVar29 [16];
  undefined auVar31 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  float fVar39;
  uint uVar40;
  ushort uVar41;
  ushort uVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  float *pfVar51;
  int iVar52;
  ushort *puVar53;
  ushort *puVar54;
  ushort *puVar55;
  float *pfVar56;
  ushort *puVar57;
  float *pfVar58;
  float *pfVar59;
  float *pfVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float in_V00;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 in_V06;
  undefined4 uVar73;
  undefined4 uVar74;
  float in_V08;
  undefined4 in_V0A;
  undefined4 in_V0B;
  float in_V0C;
  undefined4 in_V0E;
  undefined4 in_V0F;
  undefined4 in_V18;
  undefined4 in_V19;
  undefined4 in_V1A;
  undefined4 in_V1B;
  undefined4 in_V1C;
  undefined4 in_V1D;
  undefined4 in_V1E;
  undefined4 in_V1F;
  float local_60 [4];
  undefined auVar12 [16];
  undefined auVar15 [16];
  undefined auVar17 [16];
  undefined auVar19 [16];
  undefined auVar21 [16];
  undefined auVar23 [16];
  undefined auVar26 [16];
  undefined auVar28 [16];
  undefined auVar30 [16];
  undefined auVar32 [16];
  
  if (((param_2 == 0) || (param_3 == (ushort *)0x0)) || (param_4 == (float *)0x0)) {
    return 0;
  }
  uVar42 = *(ushort *)(param_2 + 8);
  iVar45 = 3;
  if (((uVar42 & 0xf) != 2) && (iVar45 = 5, (uVar42 & 0xf) != 3)) {
    iVar45 = 1;
  }
  uVar43 = (uint)*(ushort *)(param_2 + 10);
  if ((uVar42 & 0x80) == 0) {
    if (uVar43 < 2) {
      fVar67 = 0.0;
      pfVar58 = *(float **)(param_2 + 4);
      pfVar59 = pfVar58;
      fVar39 = fVar67;
      goto LAB_08a1792c;
    }
    uVar46 = (uint)*(byte *)(param_2 + 0xc);
    if ((uVar42 & 0xf) == 2) {
      uVar46 = uVar46 * 3;
    }
    else if ((uVar42 & 0xf) == 3) {
      uVar46 = uVar46 * 5;
    }
    pfVar51 = *(float **)(param_2 + 4);
    iVar52 = uVar46 * 4 + 4;
    pfVar59 = (float *)((int)pfVar51 + iVar52 * (uVar43 - 1));
    pfVar58 = (float *)((int)pfVar51 + (uint)*param_3);
    fVar62 = param_1;
    if ((uVar42 & 0xff00) != 0) {
      fVar39 = *pfVar51;
      fVar67 = param_1 - fVar39;
      fVar62 = *pfVar59 - fVar39;
      if (0.0 <= fVar67) {
        if (fVar67 < fVar62) {
          fVar62 = fVar67 + fVar39;
          goto LAB_08a176a0;
        }
        uVar41 = uVar42 & 0xf000;
        if (uVar41 == 0x2000) {
          fVar62 = fVar62 + fVar62;
          fVar67 = fVar67 - fVar62 * (float)(int)(fVar67 / fVar62);
          fVar62 = fVar62 - fVar67;
          if (fVar67 <= fVar62) {
            fVar62 = fVar67 + fVar39;
            goto LAB_08a176a0;
          }
        }
        else if (uVar41 < 0x2001) {
          if ((uVar42 & 0xf000) != 0) {
            if (uVar41 != 0x1000) {
              fVar62 = fVar67 + fVar39;
              goto LAB_08a176a0;
            }
            fVar62 = fVar67 - fVar62 * (float)(int)(fVar67 / fVar62);
          }
        }
        else if ((uVar41 != 0x3000) && (uVar41 != 0x4000)) {
          fVar62 = fVar67 + fVar39;
          goto LAB_08a176a0;
        }
      }
      else {
        uVar41 = uVar42 & 0xf00;
        if (uVar41 == 0x200) {
          fVar62 = fVar62 + fVar62;
          fVar67 = fVar62 + (fVar67 - fVar62 * (float)(int)(fVar67 / fVar62));
          fVar62 = fVar62 - fVar67;
          if (fVar67 <= fVar62) {
            fVar62 = fVar67 + fVar39;
            goto LAB_08a176a0;
          }
        }
        else if (uVar41 < 0x201) {
          if ((uVar42 & 0xf00) == 0) {
            fVar62 = 0.0;
          }
          else {
            if (uVar41 != 0x100) {
              fVar62 = fVar67 + fVar39;
              goto LAB_08a176a0;
            }
            fVar62 = fVar62 + (fVar67 - fVar62 * (float)(int)(fVar67 / fVar62));
          }
        }
        else {
          if ((uVar41 != 0x300) && (uVar41 != 0x400)) {
            fVar62 = fVar67 + fVar39;
            goto LAB_08a176a0;
          }
          fVar62 = 0.0;
        }
      }
      fVar62 = fVar62 + fVar39;
    }
LAB_08a176a0:
    if (pfVar58 < pfVar59) {
      pfVar58 = pfVar58 + uVar46 + 1;
    }
    fVar67 = *pfVar58;
    fVar39 = fVar67;
    if (fVar67 <= fVar62) {
      if (pfVar59 <= pfVar58) goto LAB_08a1790c;
      pfVar56 = pfVar58 + uVar46 + 1;
      fVar67 = pfVar58[uVar46 + 1];
      while (fVar67 <= fVar62) {
        pfVar58 = pfVar56;
        fVar39 = fVar67;
        if (pfVar59 <= pfVar56) {
          iVar52 = 0;
          break;
        }
        pfVar56 = pfVar56 + uVar46 + 1;
        fVar67 = pfVar56[uVar46 + 1];
      }
    }
    else if (pfVar51 < pfVar58) {
      do {
        pfVar58 = (float *)((int)pfVar58 - iVar52);
        fVar39 = *pfVar58;
        if (fVar39 <= fVar62) goto LAB_08a17910;
        fVar67 = fVar39;
      } while (pfVar51 < pfVar58);
      iVar52 = 0;
    }
    else {
LAB_08a1790c:
      iVar52 = 0;
    }
LAB_08a17910:
    *param_3 = (short)pfVar58 - (short)pfVar51;
    if (fVar62 == fVar39) {
      iVar52 = 0;
    }
    pfVar59 = (float *)(iVar52 + (int)pfVar58);
LAB_08a1792c:
    if (*(char *)(param_2 + 0xc) == '\0') {
      return 0;
    }
    iVar52 = 0;
    fVar62 = 3.0;
    do {
      fVar64 = 0.0;
      if (pfVar58 != pfVar59) {
        fVar64 = (param_1 - fVar39) / (fVar67 - fVar39);
      }
      uVar42 = *(ushort *)(param_2 + 8) & 0xf;
      fVar63 = fVar62;
      if ((*(ushort *)(param_2 + 8) & 0xf) == 0) {
        in_V00 = pfVar58[1];
        fVar66 = pfVar58[2];
        fVar61 = pfVar58[3];
        fVar65 = pfVar58[4];
      }
      else if (uVar42 == 1) {
        auVar3 = vsub_q(*(undefined (*) [16])(pfVar59 + 1),*(undefined (*) [16])(pfVar58 + 1));
        auVar3 = vscl_q(auVar3,fVar64);
        auVar3 = vadd_q(*(undefined (*) [16])(pfVar58 + 1),auVar3);
        in_V00 = auVar3._0_4_;
        fVar66 = auVar3._4_4_;
        fVar61 = auVar3._8_4_;
        fVar65 = auVar3._12_4_;
      }
      else if (uVar42 == 2) {
        auVar3._12_4_ = pfVar58[0xc];
        auVar3._8_4_ = pfVar58[9];
        auVar3._4_4_ = pfVar58[6];
        auVar3._0_4_ = pfVar58[3];
        auVar4._12_4_ = pfVar58[10];
        auVar4._8_4_ = pfVar58[7];
        auVar4._4_4_ = pfVar58[4];
        auVar4._0_4_ = pfVar58[1];
        auVar3 = vadd_q(auVar3,auVar4);
        auVar5._12_4_ = pfVar59[0xb];
        auVar5._8_4_ = pfVar59[8];
        auVar5._4_4_ = pfVar59[5];
        auVar5._0_4_ = pfVar59[2];
        auVar10._12_4_ = pfVar59[10];
        auVar10._8_4_ = pfVar59[7];
        auVar10._4_4_ = pfVar59[4];
        auVar10._0_4_ = pfVar59[1];
        auVar4 = vadd_q(auVar5,auVar10);
        uVar68 = vocp_s(fVar64);
        vpfxt(4,4,4,4);
        vscl_q(auVar3,in_V00);
        vpfxt(4,4,4,4);
        vscl_q(auVar4,in_V00);
        uVar9 = vmul_p(CONCAT44(fVar64,uVar68),CONCAT44(fVar64,uVar68));
        vpfxs(0,1,1,0);
        vpfxt(2,3,2,3);
        auVar20._8_8_ = uVar9;
        auVar20._4_4_ = fVar64;
        auVar20._0_4_ = uVar68;
        auVar21._8_8_ = uVar9;
        auVar21._4_4_ = fVar64;
        auVar21._0_4_ = uVar68;
        auVar3 = vmul_q(auVar20,auVar21);
        auVar38._12_4_ = pfVar59[4];
        auVar38._8_4_ = pfVar59[1];
        auVar38._4_4_ = pfVar58[4];
        auVar38._0_4_ = pfVar58[1];
        auVar3 = vtfm4_q(auVar38,auVar3);
        in_V00 = auVar3._0_4_;
        fVar66 = auVar3._4_4_;
        fVar61 = auVar3._8_4_;
        fVar65 = auVar3._12_4_;
      }
      else {
        pfVar51 = pfVar59;
        pfVar56 = pfVar58;
        pfVar60 = local_60;
        if (uVar42 == 4) {
          pauVar1 = (undefined (*) [16])(pfVar58 + 1);
          pauVar2 = (undefined (*) [16])(pfVar59 + 1);
          uVar72 = vcst_s(3);
          uVar69 = vfim_s(0x3bfc);
          vpfxd(4,1,1,1);
          uVar68 = vdot_q(*pauVar1,*pauVar2);
          auVar4 = vsub_q(*pauVar2,*pauVar1);
          auVar3 = vadd_q(*pauVar2,*pauVar1);
          vpfxs(0,0,8,0);
          vpfxt(0,0x10,1,4);
          auVar22._12_4_ = in_V0E;
          auVar22._8_4_ = in_V0A;
          auVar22._4_4_ = in_V06;
          auVar22._0_4_ = uVar68;
          auVar23._12_4_ = in_V0F;
          auVar23._8_4_ = in_V0B;
          auVar23._4_4_ = uVar72;
          auVar23._0_4_ = uVar69;
          uVar43 = vcmp_q(2,auVar22,auVar23);
          uVar69 = vmul_s(uVar68,uVar68);
          vpfxs(0x10,0x11,0x12,0x13);
          auVar10 = vcmovt_q(*pauVar2,(byte)(uVar43 >> 3) & 1);
          auVar4 = vscl_q(auVar4,fVar64);
          auVar5 = vscl_q(auVar3,fVar64);
          in_V0A = vocp_s(uVar69);
          auVar3 = vadd_q(*pauVar1,auVar4);
          in_V00 = auVar3._0_4_;
          fVar66 = auVar3._4_4_;
          fVar61 = auVar3._8_4_;
          fVar65 = auVar3._12_4_;
          if ((uVar43 & 1) != 0) {
            auVar3 = vsub_q(*pauVar1,auVar5);
            in_V00 = auVar3._0_4_;
            fVar66 = auVar3._4_4_;
            fVar61 = auVar3._8_4_;
            fVar65 = auVar3._12_4_;
            if ((uVar43 >> 1 & 1) == 0) {
              uVar69 = vasin_s(uVar68);
              in_V0A = vsqrt_s(in_V0A);
              uVar68 = vocp_s(fVar64);
              vpfxs(8,0,0,0);
              uVar69 = vocp_s(uVar69);
              if ((uVar43 >> 2 & 1) == 0) {
                uVar69 = vasin_s(in_V0A);
              }
              uVar9 = vscl_p(CONCAT44(fVar64,uVar68),uVar69);
              uVar68 = vsin_s(uVar69);
              uVar69 = vsin_s((int)uVar9);
              uVar73 = vsin_s((int)((ulonglong)uVar9 >> 0x20));
              in_V06 = vrcp_s(uVar68);
              uVar68 = vdot_p(CONCAT44(auVar10._0_4_,*(undefined4 *)*pauVar1),
                              CONCAT44(uVar73,uVar69));
              uVar72 = vdot_p(CONCAT44(auVar10._4_4_,pfVar58[2]),CONCAT44(uVar73,uVar69));
              uVar70 = vdot_p(CONCAT44(auVar10._8_4_,pfVar58[3]),CONCAT44(uVar73,uVar69));
              uVar69 = vdot_p(CONCAT44(auVar10._12_4_,pfVar58[4]),CONCAT44(uVar73,uVar69));
              auVar24._12_4_ = uVar69;
              auVar24._8_4_ = uVar70;
              auVar24._4_4_ = uVar72;
              auVar24._0_4_ = uVar68;
              auVar3 = vscl_q(auVar24,in_V06);
              in_V00 = auVar3._0_4_;
              fVar66 = auVar3._4_4_;
              fVar61 = auVar3._8_4_;
              fVar65 = auVar3._12_4_;
            }
          }
        }
        else {
          do {
            fVar66 = (float)FUN_08a16978(fVar39,fVar39 + pfVar56[4],pfVar51[2] + fVar67,fVar67,
                                         param_1);
            fVar64 = 1.0 - fVar66;
            fVar65 = fVar64 * fVar66 * fVar66 * fVar62;
            fVar61 = fVar66 * fVar64 * fVar64 * fVar62;
            *pfVar60 = (fVar61 + fVar64 * fVar64 * fVar64) * pfVar56[1] + fVar61 * pfVar56[5] +
                       fVar65 * pfVar51[3] + (fVar65 + fVar66 * fVar66 * fVar66) * pfVar51[1];
            pfVar60 = pfVar60 + 1;
            pfVar51 = pfVar51 + 5;
            pfVar56 = pfVar56 + 5;
            in_V00 = local_60[0];
            fVar66 = local_60[1];
            fVar61 = local_60[2];
            fVar65 = local_60[3];
          } while ((float *)&stack0xffffffb0 != pfVar60);
        }
      }
      *param_4 = in_V00;
      param_4[1] = fVar66;
      param_4[2] = fVar61;
      param_4[3] = fVar65;
      iVar52 = iVar52 + 4;
      pfVar58 = pfVar58 + iVar45 * 4;
      pfVar59 = pfVar59 + iVar45 * 4;
      param_4 = param_4 + 4;
      fVar62 = fVar63;
    } while (iVar52 < (int)(uint)*(byte *)(param_2 + 0xc));
    return (uint)*(byte *)(param_2 + 0xc);
  }
  if (uVar43 < 2) {
    fVar39 = 0.0;
    puVar54 = *(ushort **)(param_2 + 4);
    puVar53 = puVar54;
    fVar67 = fVar39;
    goto LAB_08a17300;
  }
  uVar46 = (uint)*(byte *)(param_2 + 0xc);
  if ((uVar42 & 0xf) == 2) {
    uVar46 = uVar46 * 3;
  }
  else if ((uVar42 & 0xf) == 3) {
    uVar46 = uVar46 * 5;
  }
  puVar53 = *(ushort **)(param_2 + 4);
  iVar52 = uVar46 * 4 + 4;
  if ((uVar42 & 0x80) != 0) {
    iVar52 = iVar52 >> 1;
  }
  puVar57 = (ushort *)((int)puVar53 + iVar52 * (uVar43 - 1));
  puVar54 = (ushort *)((int)puVar53 + (uint)*param_3);
  fVar62 = param_1;
  if ((uVar42 & 0xff00) != 0) {
    uVar46 = (uint)*puVar53;
    uVar47 = (uint)*puVar57;
    uVar43 = (uVar46 << 0x11) >> 0x1b;
    if ((*puVar53 & 0x7fff) != 0) {
      uVar43 = uVar43 + 0x70;
    }
    fVar39 = (float)((uVar46 & 0x3ff) << 0xd | (uVar46 & 0x8000) << 0x10 | uVar43 << 0x17);
    uVar43 = (uVar47 << 0x11) >> 0x1b;
    fVar67 = param_1 - fVar39;
    if ((*puVar57 & 0x7fff) != 0) {
      uVar43 = uVar43 + 0x70;
    }
    fVar64 = (float)((uVar47 & 0x3ff) << 0xd | (uVar47 & 0x8000) << 0x10 | uVar43 << 0x17) - fVar39;
    if (0.0 <= fVar67) {
      uVar41 = uVar42 & 0xf000;
      fVar62 = fVar67;
      if (fVar64 <= fVar67) {
        if (uVar41 == 0x2000) {
          fVar64 = fVar64 + fVar64;
          fVar67 = fVar67 - fVar64 * (float)(int)(fVar67 / fVar64);
          fVar62 = fVar64 - fVar67;
          if (fVar67 <= fVar64 - fVar67) {
            fVar62 = fVar67 + fVar39;
            goto LAB_08a17220;
          }
        }
        else {
          fVar62 = fVar64;
          if (uVar41 < 0x2001) {
            if ((uVar42 & 0xf000) != 0) {
              if (uVar41 != 0x1000) {
                fVar62 = fVar67 + fVar39;
                goto LAB_08a17220;
              }
              fVar62 = fVar67 - fVar64 * (float)(int)(fVar67 / fVar64);
            }
          }
          else if ((uVar41 != 0x3000) && (uVar41 != 0x4000)) {
            fVar62 = fVar67 + fVar39;
            goto LAB_08a17220;
          }
        }
      }
    }
    else {
      uVar41 = uVar42 & 0xf00;
      if (uVar41 == 0x200) {
        fVar64 = fVar64 + fVar64;
        fVar67 = fVar64 + (fVar67 - fVar64 * (float)(int)(fVar67 / fVar64));
        fVar62 = fVar64 - fVar67;
        if (fVar67 <= fVar62) {
          fVar62 = fVar67 + fVar39;
          goto LAB_08a17220;
        }
      }
      else if (uVar41 < 0x201) {
        if ((uVar42 & 0xf00) == 0) {
          fVar62 = 0.0;
        }
        else {
          if (uVar41 != 0x100) {
            fVar62 = fVar67 + fVar39;
            goto LAB_08a17220;
          }
          fVar62 = fVar64 + (fVar67 - fVar64 * (float)(int)(fVar67 / fVar64));
        }
      }
      else {
        if ((uVar41 != 0x300) && (uVar41 != 0x400)) {
          fVar62 = fVar67 + fVar39;
          goto LAB_08a17220;
        }
        fVar62 = 0.0;
      }
    }
    fVar62 = fVar62 + fVar39;
  }
LAB_08a17220:
  if (puVar54 < puVar57) {
    puVar54 = (ushort *)((int)puVar54 + iVar52);
  }
  uVar46 = (uint)*puVar54;
  uVar43 = (uVar46 << 0x11) >> 0x1b;
  if ((*puVar54 & 0x7fff) != 0) {
    uVar43 = uVar43 + 0x70;
  }
  fVar39 = (float)((uVar46 & 0x3ff) << 0xd | (uVar46 & 0x8000) << 0x10 | uVar43 << 0x17);
  if (fVar39 <= fVar62) {
    fVar67 = fVar39;
    if (puVar54 < puVar57) {
      do {
        puVar55 = (ushort *)((int)puVar54 + iVar52);
        uVar46 = (uint)*puVar55;
        uVar43 = (uVar46 << 0x11) >> 0x1b;
        if ((*puVar55 & 0x7fff) != 0) {
          uVar43 = uVar43 + 0x70;
        }
        fVar39 = (float)((uVar46 & 0x3ff) << 0xd | (uVar46 & 0x8000) << 0x10 | uVar43 << 0x17);
        if (fVar62 < fVar39) goto LAB_08a172e4;
        puVar54 = puVar55;
        fVar67 = fVar39;
      } while (puVar55 < puVar57);
      goto LAB_08a172e0;
    }
    iVar52 = 0;
  }
  else if (puVar53 < puVar54) {
    do {
      puVar54 = (ushort *)((int)puVar54 - iVar52);
      uVar46 = (uint)*puVar54;
      uVar43 = (uVar46 << 0x11) >> 0x1b;
      if ((*puVar54 & 0x7fff) != 0) {
        uVar43 = uVar43 + 0x70;
      }
      fVar67 = (float)((uVar46 & 0x3ff) << 0xd | (uVar46 & 0x8000) << 0x10 | uVar43 << 0x17);
      if (fVar67 <= fVar62) goto LAB_08a172e4;
      fVar39 = fVar67;
    } while (puVar53 < puVar54);
    iVar52 = 0;
  }
  else {
LAB_08a172e0:
    iVar52 = 0;
    fVar67 = fVar39;
  }
LAB_08a172e4:
  *param_3 = (short)puVar54 - (short)puVar53;
  if (fVar62 == fVar67) {
    iVar52 = 0;
  }
  puVar53 = (ushort *)(iVar52 + (int)puVar54);
LAB_08a17300:
  uVar43 = (uint)*(byte *)(param_2 + 0xc);
  if (uVar43 != 0) {
    iVar52 = 0;
    do {
      while( true ) {
        fVar62 = 0.0;
        if (puVar54 != puVar53) {
          fVar62 = (param_1 - fVar67) / (fVar39 - fVar67);
        }
        uVar42 = *(ushort *)(param_2 + 8) & 0xf;
        if ((*(ushort *)(param_2 + 8) & 0xf) != 0) break;
        uVar9 = vh2f_p(*(undefined8 *)(puVar54 + 1));
        in_V00 = (float)uVar9;
        fVar64 = (float)((ulonglong)uVar9 >> 0x20);
LAB_08a17338:
        *param_4 = in_V00;
        param_4[1] = fVar64;
        param_4[2] = in_V08;
        param_4[3] = in_V0C;
        iVar52 = iVar52 + 4;
        puVar54 = puVar54 + iVar45 * 4;
        puVar53 = puVar53 + iVar45 * 4;
        param_4 = param_4 + 4;
        if ((int)(uint)*(byte *)(param_2 + 0xc) <= iVar52) {
          return (uint)*(byte *)(param_2 + 0xc);
        }
      }
      if (uVar42 == 1) {
        uVar9 = vh2f_p(*(undefined8 *)(puVar54 + 1));
        uVar68 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar6 = vh2f_p(*(undefined8 *)(puVar53 + 1));
        auVar11._12_4_ = in_V1D;
        auVar11._8_4_ = in_V19;
        auVar11._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
        auVar11._0_4_ = (int)uVar6;
        auVar12._12_4_ = in_V1C;
        auVar12._8_4_ = in_V18;
        auVar12._4_4_ = uVar68;
        auVar12._0_4_ = (int)uVar9;
        auVar3 = vsub_q(auVar11,auVar12);
        auVar3 = vscl_q(auVar3,fVar62);
        in_V19 = auVar3._8_4_;
        in_V1D = auVar3._12_4_;
        auVar13._12_4_ = in_V1C;
        auVar13._8_4_ = in_V18;
        auVar13._4_4_ = uVar68;
        auVar13._0_4_ = (int)uVar9;
        auVar3 = vadd_q(auVar13,auVar3);
        in_V00 = auVar3._0_4_;
        fVar64 = auVar3._4_4_;
        in_V08 = auVar3._8_4_;
        in_V0C = auVar3._12_4_;
        goto LAB_08a17338;
      }
      if (uVar42 == 2) {
        uVar6 = vh2f_p(CONCAT44(CONCAT22(puVar54[10],puVar54[7]),CONCAT22(puVar54[4],puVar54[1])));
        uVar68 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar7 = vh2f_p(CONCAT44(CONCAT22(puVar53[10],puVar53[7]),CONCAT22(puVar53[4],puVar53[1])));
        uVar9 = vh2f_p(CONCAT44(CONCAT22(puVar54[0xc],puVar54[9]),CONCAT22(puVar54[6],puVar54[3])));
        uVar8 = vh2f_p(CONCAT44(CONCAT22(puVar53[0xb],puVar53[8]),CONCAT22(puVar53[5],puVar53[2])));
        auVar14._12_4_ = in_V1E;
        auVar14._8_4_ = in_V1A;
        auVar14._4_4_ = (int)((ulonglong)uVar9 >> 0x20);
        auVar14._0_4_ = (int)uVar9;
        auVar15._12_4_ = in_V1C;
        auVar15._8_4_ = in_V18;
        auVar15._4_4_ = uVar68;
        auVar15._0_4_ = (int)uVar6;
        auVar3 = vadd_q(auVar14,auVar15);
        auVar16._12_4_ = in_V1F;
        auVar16._8_4_ = in_V1B;
        auVar16._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
        auVar16._0_4_ = (int)uVar8;
        auVar17._12_4_ = in_V1D;
        auVar17._8_4_ = in_V19;
        auVar17._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
        auVar17._0_4_ = (int)uVar7;
        auVar4 = vadd_q(auVar16,auVar17);
        uVar69 = vocp_s(fVar62);
        vpfxt(4,4,4,4);
        auVar3 = vscl_q(auVar3,in_V00);
        in_V1A = auVar3._8_4_;
        in_V1E = auVar3._12_4_;
        vpfxt(4,4,4,4);
        auVar3 = vscl_q(auVar4,in_V00);
        in_V1B = auVar3._8_4_;
        in_V1F = auVar3._12_4_;
        uVar9 = vmul_p(CONCAT44(fVar62,uVar69),CONCAT44(fVar62,uVar69));
        vpfxs(0,1,1,0);
        vpfxt(2,3,2,3);
        auVar18._8_8_ = uVar9;
        auVar18._4_4_ = fVar62;
        auVar18._0_4_ = uVar69;
        auVar19._8_8_ = uVar9;
        auVar19._4_4_ = fVar62;
        auVar19._0_4_ = uVar69;
        auVar3 = vmul_q(auVar18,auVar19);
        auVar37._8_8_ = uVar7;
        auVar37._4_4_ = uVar68;
        auVar37._0_4_ = (int)uVar6;
        auVar3 = vtfm4_q(auVar37,auVar3);
        in_V00 = auVar3._0_4_;
        fVar64 = auVar3._4_4_;
        in_V08 = auVar3._8_4_;
        in_V0C = auVar3._12_4_;
        goto LAB_08a17338;
      }
      puVar57 = puVar53;
      puVar55 = puVar54;
      pfVar58 = local_60;
      fVar64 = 3.0;
      if (uVar42 == 4) {
        uVar9 = vh2f_p(*(undefined8 *)(puVar54 + 1));
        uVar68 = (undefined4)uVar9;
        uVar72 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar9 = vh2f_p(*(undefined8 *)(puVar53 + 1));
        uVar69 = (undefined4)uVar9;
        uVar73 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar74 = vcst_s(3);
        uVar71 = vfim_s(0x3bfc);
        vpfxd(4,1,1,1);
        auVar25._12_4_ = in_V1C;
        auVar25._8_4_ = in_V18;
        auVar25._4_4_ = uVar72;
        auVar25._0_4_ = uVar68;
        auVar26._12_4_ = in_V1D;
        auVar26._8_4_ = in_V19;
        auVar26._4_4_ = uVar73;
        auVar26._0_4_ = uVar69;
        uVar70 = vdot_q(auVar25,auVar26);
        auVar27._12_4_ = in_V1D;
        auVar27._8_4_ = in_V19;
        auVar27._4_4_ = uVar73;
        auVar27._0_4_ = uVar69;
        auVar28._12_4_ = in_V1C;
        auVar28._8_4_ = in_V18;
        auVar28._4_4_ = uVar72;
        auVar28._0_4_ = uVar68;
        auVar4 = vsub_q(auVar27,auVar28);
        auVar29._12_4_ = in_V1D;
        auVar29._8_4_ = in_V19;
        auVar29._4_4_ = uVar73;
        auVar29._0_4_ = uVar69;
        auVar30._12_4_ = in_V1C;
        auVar30._8_4_ = in_V18;
        auVar30._4_4_ = uVar72;
        auVar30._0_4_ = uVar68;
        auVar3 = vadd_q(auVar29,auVar30);
        vpfxs(0,0,8,0);
        vpfxt(0,0x10,1,4);
        auVar31._12_4_ = in_V0E;
        auVar31._8_4_ = in_V0A;
        auVar31._4_4_ = in_V06;
        auVar31._0_4_ = uVar70;
        auVar32._12_4_ = in_V0F;
        auVar32._8_4_ = in_V0B;
        auVar32._4_4_ = uVar74;
        auVar32._0_4_ = uVar71;
        uVar43 = vcmp_q(2,auVar31,auVar32);
        uVar71 = vmul_s(uVar70,uVar70);
        vpfxs(0x10,0x11,0x12,0x13);
        auVar33._12_4_ = in_V1D;
        auVar33._8_4_ = in_V19;
        auVar33._4_4_ = uVar73;
        auVar33._0_4_ = uVar69;
        auVar10 = vcmovt_q(auVar33,(byte)(uVar43 >> 3) & 1);
        in_V19 = auVar10._8_4_;
        in_V1D = auVar10._12_4_;
        auVar4 = vscl_q(auVar4,fVar62);
        in_V1A = auVar4._8_4_;
        in_V1E = auVar4._12_4_;
        auVar5 = vscl_q(auVar3,fVar62);
        in_V1B = auVar5._8_4_;
        in_V1F = auVar5._12_4_;
        in_V0A = vocp_s(uVar71);
        auVar34._12_4_ = in_V1C;
        auVar34._8_4_ = in_V18;
        auVar34._4_4_ = uVar72;
        auVar34._0_4_ = uVar68;
        auVar3 = vadd_q(auVar34,auVar4);
        in_V00 = auVar3._0_4_;
        fVar64 = auVar3._4_4_;
        in_V08 = auVar3._8_4_;
        in_V0C = auVar3._12_4_;
        if ((uVar43 & 1) != 0) {
          auVar35._12_4_ = in_V1C;
          auVar35._8_4_ = in_V18;
          auVar35._4_4_ = uVar72;
          auVar35._0_4_ = uVar68;
          auVar3 = vsub_q(auVar35,auVar5);
          in_V00 = auVar3._0_4_;
          fVar64 = auVar3._4_4_;
          in_V08 = auVar3._8_4_;
          in_V0C = auVar3._12_4_;
          if ((uVar43 >> 1 & 1) == 0) {
            uVar73 = vasin_s(uVar70);
            in_V0A = vsqrt_s(in_V0A);
            uVar69 = vocp_s(fVar62);
            vpfxs(8,0,0,0);
            uVar73 = vocp_s(uVar73);
            if ((uVar43 >> 2 & 1) == 0) {
              uVar73 = vasin_s(in_V0A);
            }
            uVar9 = vscl_p(CONCAT44(fVar62,uVar69),uVar73);
            uVar70 = vsin_s(uVar73);
            uVar69 = vsin_s((int)uVar9);
            uVar73 = vsin_s((int)((ulonglong)uVar9 >> 0x20));
            in_V06 = vrcp_s(uVar70);
            uVar68 = vdot_p(CONCAT44(auVar10._0_4_,uVar68),CONCAT44(uVar73,uVar69));
            uVar72 = vdot_p(CONCAT44(auVar10._4_4_,uVar72),CONCAT44(uVar73,uVar69));
            uVar70 = vdot_p(CONCAT44(in_V19,in_V18),CONCAT44(uVar73,uVar69));
            uVar69 = vdot_p(CONCAT44(in_V1D,in_V1C),CONCAT44(uVar73,uVar69));
            auVar36._12_4_ = uVar69;
            auVar36._8_4_ = uVar70;
            auVar36._4_4_ = uVar72;
            auVar36._0_4_ = uVar68;
            auVar3 = vscl_q(auVar36,in_V06);
            in_V00 = auVar3._0_4_;
            fVar64 = auVar3._4_4_;
            in_V08 = auVar3._8_4_;
            in_V0C = auVar3._12_4_;
          }
        }
        goto LAB_08a17338;
      }
      do {
        uVar47 = (uint)puVar55[4];
        uVar44 = (uint)puVar57[2];
        uVar43 = (uVar47 << 0x11) >> 0x1b;
        uVar46 = (uVar44 << 0x11) >> 0x1b;
        if ((puVar55[4] & 0x7fff) != 0) {
          uVar43 = uVar43 + 0x70;
        }
        if ((puVar57[2] & 0x7fff) != 0) {
          uVar46 = uVar46 + 0x70;
        }
        fVar63 = (float)FUN_08a16978(fVar67,fVar67 + (float)((uVar47 & 0x3ff) << 0xd |
                                                             (uVar47 & 0x8000) << 0x10 |
                                                            uVar43 << 0x17),
                                     fVar39 + (float)((uVar44 & 0x3ff) << 0xd |
                                                      (uVar44 & 0x8000) << 0x10 | uVar46 << 0x17),
                                     fVar39,param_1);
        uVar44 = (uint)puVar55[1];
        fVar62 = 1.0 - fVar63;
        uVar42 = puVar55[5];
        uVar47 = (uint)uVar42;
        uVar43 = (uVar44 << 0x11) >> 0x1b;
        uVar46 = (uVar47 << 0x11) >> 0x1b;
        uVar50 = (uint)puVar57[3];
        fVar66 = fVar63 * fVar62 * fVar62 * fVar64;
        if ((uVar42 & 0x7fff) != 0) {
          uVar46 = uVar46 + 0x70;
        }
        if ((puVar55[1] & 0x7fff) != 0) {
          uVar43 = uVar43 + 0x70;
        }
        uVar49 = (uVar50 << 0x11) >> 0x1b;
        uVar40 = (uint)puVar57[1];
        if ((puVar57[3] & 0x7fff) != 0) {
          uVar49 = uVar49 + 0x70;
        }
        uVar48 = (uVar40 << 0x11) >> 0x1b;
        fVar61 = fVar62 * fVar63 * fVar63 * fVar64;
        if ((puVar57[1] & 0x7fff) != 0) {
          uVar48 = uVar48 + 0x70;
        }
        *pfVar58 = (fVar66 + fVar62 * fVar62 * fVar62) *
                   (float)((uVar44 & 0x3ff) << 0xd | (uVar44 & 0x8000) << 0x10 | uVar43 << 0x17) +
                   fVar66 * (float)((uVar47 & 0x3ff) << 0xd | (uVar47 & 0x8000) << 0x10 |
                                   uVar46 << 0x17) +
                   fVar61 * (float)((uVar50 & 0x3ff) << 0xd | (uVar50 & 0x8000) << 0x10 |
                                   uVar49 << 0x17) +
                   (fVar61 + fVar63 * fVar63 * fVar63) *
                   (float)((uVar40 & 0x3ff) << 0xd | (uVar40 & 0x8000) << 0x10 | uVar48 << 0x17);
        pfVar58 = pfVar58 + 1;
        puVar57 = puVar57 + 5;
        puVar55 = puVar55 + 5;
      } while ((float *)&stack0xffffffb0 != pfVar58);
      *param_4 = local_60[0];
      param_4[1] = local_60[1];
      param_4[2] = local_60[2];
      param_4[3] = local_60[3];
      uVar43 = (uint)*(byte *)(param_2 + 0xc);
      iVar52 = iVar52 + 4;
      puVar54 = puVar54 + iVar45 * 4;
      puVar53 = puVar53 + iVar45 * 4;
      param_4 = param_4 + 4;
      in_V00 = local_60[0];
      in_V08 = local_60[2];
      in_V0C = local_60[3];
    } while (iVar52 < (int)uVar43);
  }
  return uVar43;
}

