#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08868bf4(int param_1)

{
  char cVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  bool bVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined (*pauVar17) [12];
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar23;
  int local_cc;
  int local_c8 [2];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined (*local_5c) [12];
  int local_58;
  char local_54;
  int local_50;
  char local_4c;
  int local_48;
  char local_44;
  char local_43;
  undefined4 local_40;
  uint local_3c;
  
  iVar20 = *(int *)(*(int *)(param_1 + 0x20c) + 0x16c);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x20;
  if (DAT_08aba77e != '\0') {
    iVar20 = *(int *)(param_1 + 0x20c);
    *(uint *)(iVar20 + 0x130) = *(uint *)(iVar20 + 0x130) & 0xfffffffe;
    *(undefined4 *)(iVar20 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1dc) = 7;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  iVar16 = 0;
  iVar14 = 1;
  local_48 = 0xea;
  fVar22 = *(float *)(*(int *)(param_1 + 0x20c) + 0x168);
  local_40 = *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x164);
  local_44 = '\0';
  fVar21 = fVar22;
  iVar8 = FUN_0886450c(param_1,iVar20);
  local_3c = (uint)(iVar20 < 0x23);
  pauVar17 = (undefined (*) [12])(param_1 + 0x80);
  if (iVar8 == 2) {
    fVar21 = fVar22 + 1.256637;
  }
  else if (iVar8 == 2) {
    fVar21 = fVar22 - 1.256637;
  }
  if (3.141593 < fVar21) {
    fVar21 = fVar21 - 6.283185;
  }
  else if (fVar21 <= -3.141593) {
    fVar21 = fVar21 + 6.283185;
  }
  local_cc = 0;
  local_c8[0] = 0;
  local_4c = '\0';
  iVar8 = -1;
  local_50 = 1;
  if (local_3c == 0) {
    if (iVar20 < 0xb3) {
      iVar8 = iVar20 + -0x23;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x8d < iVar8) {
        iVar8 = 0x8d;
      }
      goto LAB_08868df8;
    }
    iVar10 = *(int *)(param_1 + 0x20c);
  }
  else {
LAB_08868df8:
    iVar10 = *(int *)(param_1 + 0x20c);
  }
  uVar19 = *(undefined4 *)(iVar10 + 0x160);
  iVar10 = *(int *)(iVar10 + 0x164);
  local_58 = iVar14;
  if (iVar10 < 2) {
    if (iVar10 < 1) goto LAB_08868f7c;
    FUN_08863fac(param_1);
    local_58 = FUN_08864260(param_1,uVar19);
    iVar14 = FUN_088871a0(uVar19,iVar20);
    if (iVar14 == 0) {
      local_cc = 100;
      local_c8[0] = 0;
    }
    else {
      local_cc = (int)*(short *)(iVar14 + 6);
      local_c8[0] = (int)*(short *)(iVar14 + 4);
      iVar16 = (int)((float)(int)*(short *)(iVar14 + 8) *
                    *(float *)(*(int *)(param_1 + 0x4bc) + 200));
    }
    if (iVar20 == 0xb9) {
LAB_08868f6c:
      local_cc = local_cc + 100;
      local_c8[0] = 0;
      goto LAB_08869044;
    }
    if (iVar20 == 0xb3) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x800;
      goto LAB_08868f6c;
    }
    if ((((iVar20 == 0x93) || (iVar20 == 0x86)) || (iVar20 == 0x53)) || (iVar20 == 0x48))
    goto LAB_08868f6c;
    uVar11 = *(uint *)(param_1 + 0x144);
  }
  else {
    if (iVar10 < 4) {
      FUN_08863fac(param_1);
      iVar14 = FUN_0888c1c0(iVar8);
      local_50 = iVar14;
      local_cc = FUN_0888c18c(iVar8);
      local_cc = local_cc * iVar14;
      local_c8[0] = FUN_0888c158(iVar8);
      local_c8[0] = local_c8[0] * iVar14;
      iVar16 = FUN_0888c1ec(iVar8);
      iVar16 = (int)((float)iVar16 * *(float *)(*(int *)(param_1 + 0x4bc) + 200) * (float)iVar14);
      local_4c = '\x01';
    }
    else {
LAB_08868f7c:
      uVar19 = 0;
      fVar21 = fVar21 + 3.141593;
      if (3.141593 < fVar21) {
        fVar21 = fVar21 - 6.283185;
      }
      else if (fVar21 <= -3.141593) {
        fVar21 = fVar21 + 6.283185;
      }
      fVar21 = *(float *)(param_1 + 0x34) - fVar21;
      fVar21 = fVar21 - (float)(int)(fVar21 * 0.3183099) * 6.283185;
      if (fVar21 < 0.0) {
        fVar21 = fVar21 + 6.283185;
      }
      if (3.141593 <= fVar21) {
        fVar21 = 6.283185 - fVar21;
      }
      else {
        fVar21 = -fVar21;
      }
      if (2.356194 < ABS(fVar21)) {
        local_58 = 0;
      }
      FUN_08863fac(param_1);
    }
LAB_08869044:
    uVar11 = *(uint *)(param_1 + 0x144);
  }
  if ((uVar11 & 0x200000) == 0) {
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + local_cc;
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + local_c8[0];
  }
  iVar14 = FUN_08860188(uVar19);
  bVar4 = false;
  if (*(int *)(param_1 + 0x3c0) == 0) {
LAB_088690a8:
    iVar10 = *(int *)(param_1 + 0x3c0);
  }
  else {
    if (*(int *)(param_1 + 0x3c0) != iVar14) {
      bVar4 = true;
      local_44 = '\x01';
      goto LAB_088690a8;
    }
    iVar10 = *(int *)(param_1 + 0x3c0);
  }
  if (iVar10 == 0) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffff7ff;
  }
  if (iVar14 != 0) {
    *(undefined4 *)(iVar14 + 0x64c) = 2;
  }
  uVar11 = 1;
  local_c0 = *(undefined4 *)*pauVar17;
  uStack_bc = *(undefined4 *)(param_1 + 0x84);
  uStack_b8 = *(undefined4 *)(param_1 + 0x88);
  uStack_b4 = *(undefined4 *)(param_1 + 0x8c);
  uVar19 = vmul_s(fVar22,in_V7C);
  auVar3 = vrot_q(uVar19,1,0,2,0);
  auVar2 = vscl_t(auVar3._0_12_,0x42200000);
  *(int *)*pauVar17 = auVar2._0_4_;
  *(int *)(param_1 + 0x84) = auVar2._4_4_;
  *(int *)(param_1 + 0x88) = auVar2._8_4_;
  *(int *)(param_1 + 0x8c) = auVar3._12_4_;
  local_5c = pauVar17;
  local_54 = FUN_0886454c(param_1,iVar20);
  if ((*(uint *)(param_1 + 0x144) & 0x200000) != 0) {
    FUN_0885ff24(param_1,6,iVar16);
    if (iVar14 == 0) {
      iVar16 = *(int *)(param_1 + 0x20c);
      local_b0 = *(undefined4 *)(iVar16 + 0x150);
      local_ac = *(undefined4 *)(iVar16 + 0x154);
      uStack_a8 = *(undefined4 *)(iVar16 + 0x158);
    }
    else {
      local_b0 = *(undefined4 *)(iVar14 + 0x20);
      local_ac = *(undefined4 *)(iVar14 + 0x24);
      uStack_a8 = *(undefined4 *)(iVar14 + 0x28);
    }
    auVar2._4_4_ = local_ac;
    auVar2._0_4_ = local_b0;
    auVar2._8_4_ = uStack_a8;
    auVar2 = vsub_t(auVar2,*(undefined (*) [12])(param_1 + 0x300));
    uVar11 = auVar2._0_4_;
    uVar19 = auVar2._8_4_;
    auVar7._4_4_ = 0;
    auVar7._0_4_ = uVar11;
    auVar7._8_4_ = uVar19;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar11;
    auVar6._8_4_ = uVar19;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar11;
    auVar5._8_4_ = uVar19;
    uVar19 = vdot_t(auVar5,auVar6);
    uVar23 = vcmp_s(8,uVar19,uVar11);
    vrsq_s(uVar19);
    uVar19 = vcmovt_s(in_V7D,(byte)uVar23 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar7,uVar19);
    local_b0 = auVar2._0_4_;
    local_ac = auVar2._4_4_;
    uStack_a8 = auVar2._8_4_;
    iVar16 = FUN_088886fc(param_1 + 0x434);
    if ((iVar16 == 0) || (local_54 == '\0')) {
      FUN_088244ac(DAT_08ac5c70,0x39,(undefined (*) [12])(param_1 + 0x300),&local_b0);
      uVar11 = 7;
    }
    else {
      iVar16 = (**(code **)(*(int *)(param_1 + 0x14) + 0xcc))
                         (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 200));
      if (iVar16 != 0) {
        FUN_089dfc04(param_1);
        FUN_089dfdb0(param_1);
        (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
      }
      *(undefined4 *)(param_1 + 0x614) = 0;
      if (iVar16 != 0) {
        return;
      }
      if (*(int *)(param_1 + 8) != 0x15) {
        return;
      }
      uVar11 = 7;
    }
  }
  if (iVar8 == -1) {
LAB_08869290:
    iVar16 = *(int *)(param_1 + 0x1d4);
  }
  else {
    iVar16 = FUN_088893ec(param_1 + 0x434,iVar20);
    if (iVar16 == 0) {
      if ((*(uint *)(param_1 + 0x148) & 0x10) != 0) {
        iVar16 = FUN_08877ad0(iVar8);
        if (iVar16 != 0xc) {
          *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x140) = 0;
          iVar20 = *(int *)(param_1 + 0x20c);
          *(uint *)(iVar20 + 0x130) = *(uint *)(iVar20 + 0x130) | 1;
          *(undefined4 *)(iVar20 + 0x148) = 2;
          return;
        }
        goto LAB_08869290;
      }
      iVar16 = *(int *)(param_1 + 0x1d4);
    }
    else {
      iVar16 = *(int *)(param_1 + 0x1d4);
    }
  }
  if (99 < iVar16) {
    *(undefined4 *)(param_1 + 0x614) = 0;
  }
  if (((iVar14 != 0) && (local_4c == '\0')) &&
     ((*(char *)(iVar14 + 0x611) != '\0' && (*(int *)(iVar14 + 0x170) != 0)))) {
    fVar21 = (float)FUN_08887cdc(param_1 + 0x434);
    if (((0.6 < fVar21) || (*(float *)(param_1 + 0x594) <= 0.6)) ||
       (iVar16 = (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
                           (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50)), iVar16 == 0)) {
      if (fVar21 <= 0.1) {
        if (0.1 < *(float *)(param_1 + 0x594)) {
          FUN_08854e78(*(undefined4 *)(iVar14 + 0x170),0x13,1);
          *(float *)(param_1 + 0x594) = fVar21;
        }
        else {
          *(float *)(param_1 + 0x594) = fVar21;
        }
      }
      else {
        *(float *)(param_1 + 0x594) = fVar21;
      }
    }
    else {
      FUN_08854e78(*(undefined4 *)(iVar14 + 0x170),0x12,1);
      *(float *)(param_1 + 0x594) = fVar21;
    }
  }
  local_43 = '\0';
  if ((uVar11 == 7) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    uVar11 = 1;
  }
  if (uVar11 != 7) {
    uVar11 = FUN_0886427c(param_1,iVar20);
  }
  uVar12 = uVar11 & 0xf;
  if (iVar8 == -1) goto switchD_08869538_caseD_7;
  uVar19 = FUN_0888c100(iVar8);
  iVar8 = FUN_0888c12c(iVar8);
  if (iVar8 < 2) {
    if (0 < iVar8) {
      FUN_088659b8(param_1,7);
      FUN_088887f8(param_1 + 0x434,1,300);
      FUN_088243d8(DAT_08ac5c70,0x53,param_1 + 0x20);
    }
  }
  else if (iVar8 < 3) {
    FUN_088659b8(param_1,7);
    FUN_088887f8(param_1 + 0x434,3,300);
    FUN_088243d8(DAT_08ac5c70,0x55,param_1 + 0x20);
  }
  else if (iVar8 < 4) {
    FUN_088659b8(param_1,7);
    FUN_088887f8(param_1 + 0x434,5,300);
    FUN_088243d8(DAT_08ac5c70,0x54,param_1 + 0x20);
  }
  uVar12 = uVar11 & 0xf;
  switch(uVar19) {
  case 1:
    uVar12 = uVar11 & 0xf;
    goto switchD_08869538_caseD_7;
  case 2:
  case 5:
    uVar11 = 4;
    break;
  case 3:
    uVar11 = 4;
    local_43 = '\x01';
    break;
  case 4:
    FUN_088659b8(param_1,2);
    FUN_088887f8(param_1 + 0x434,0x12,600);
    FUN_088243d8(DAT_08ac5c70,0x46,param_1 + 0x250);
    *(int *)(param_1 + 0x3c4) = iVar14;
    *(undefined4 *)(param_1 + 0x1cc) = 100;
    break;
  case 6:
    FUN_088659b8(param_1,3);
    FUN_088887f8(param_1 + 0x434,0x13,0x78);
    FUN_088243d8(DAT_08ac5c70,0x56,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x1cc) = 100;
    iVar8 = FUN_0885fc80(param_1);
    uVar12 = uVar11 & 0xf;
    if (iVar8 != 0) {
      FUN_08862b64(param_1,0x2001f7,0,0);
      uVar12 = uVar11 & 0xf;
    }
    goto switchD_08869538_caseD_7;
  case 7:
    uVar11 = 2;
    break;
  default:
    goto switchD_08869538_caseD_7;
  }
  uVar12 = uVar11 & 0xf;
switchD_08869538_caseD_7:
  if (uVar12 == 1) {
    if ((*(uint *)(param_1 + 0x144) & 0x100000) != 0) {
      *(undefined4 *)(param_1 + 0x1cc) = 100;
    }
    if (*(int *)(param_1 + 0x1cc) < 100) {
      uVar11 = 0xb;
    }
    else {
      *(undefined4 *)(param_1 + 0x1cc) = 0;
    }
  }
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
  *(undefined4 *)(param_1 + 0x1d8) = 0x28;
  FUN_088649e4(param_1,uVar11,iVar14,iVar20);
  if (bVar4) {
    iVar20 = *(int *)(param_1 + 0x20c);
    *(uint *)(iVar20 + 0x130) = *(uint *)(iVar20 + 0x130) & 0xfffffffe;
    *(undefined4 *)(iVar20 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x611) != '\0') {
    FUN_08849528();
    *(undefined *)(param_1 + 0x611) = 0;
  }
  cVar13 = local_44;
  if (local_44 != '\0') {
    uVar11 = 1;
  }
  uVar12 = uVar11 & 0xf;
  if ((*(int *)(*(int *)(param_1 + 0x20c) + 0x164) == 1) ||
     (*(int *)(*(int *)(param_1 + 0x20c) + 0x164) == 2)) {
    *(int *)(param_1 + 0x3b4) = iVar14;
  }
  else {
    *(undefined4 *)(param_1 + 0x3b4) = 0;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x400) == 0) {
    cVar1 = *(char *)(param_1 + 0x158);
  }
  else {
    uVar19 = FUN_0884b268();
    FUN_0884df5c(uVar19);
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffbff;
    cVar1 = *(char *)(param_1 + 0x158);
  }
  if (cVar1 != '\0') {
    FUN_089e10cc(0x3f800000);
    iVar8 = FUN_0884b268();
    *(undefined4 *)(iVar8 + 0x4e0) = 0;
  }
  if (uVar12 == 1) {
    if (local_4c != '\0') {
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      goto LAB_08869890;
    }
    if (local_54 == '\0') {
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      goto LAB_08869890;
    }
    if (*(int *)(*(int *)(param_1 + 0x20c) + 0x164) == 1) {
      if (*(int *)(param_1 + 0x3a8) == iVar14) {
        if ((*(uint *)(param_1 + 0x148) & 0x80) != 0) {
          FUN_08871318(param_1,(*(uint *)(param_1 + 0x148) & 0x100) != 0);
          FUN_089dfc04(param_1);
          FUN_089dfdb0(param_1);
          (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
          return;
        }
        *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
      }
      else {
        iVar8 = 0;
        if (*(int *)(param_1 + 0x3a8) == 0) {
          iVar8 = *(int *)(param_1 + 0x3a0) + 1;
        }
        *(int *)(param_1 + 0x3a0) = iVar8;
      }
      *(int *)(param_1 + 0x3a8) = iVar14;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
LAB_08869890:
    *(undefined4 *)(param_1 + 0x3a0) = 0;
  }
  FUN_08865f24(param_1,&local_cc,local_c8);
  if (cVar13 == '\0') {
    FUN_088898e4(param_1 + 0x434,iVar14,local_40,iVar20,iVar20 == 0x86,0,6);
  }
  iVar8 = local_50;
  if (iVar14 != 0) {
    iVar16 = *(int *)(*(int *)(param_1 + 0x20c) + 0x164);
    if (iVar16 < 2) {
      if ((((0 < iVar16) && (*(int *)(DAT_08ac58c4 + 0x20) == 2)) &&
          ((*(uint *)(param_1 + 0x144) & 0x200000) == 0)) &&
         (iVar8 = 1, (*(uint *)(param_1 + 0x148) & 0x80) == 0)) {
        iVar10 = 1;
        iVar16 = FUN_0884c440();
        if (iVar16 != 0) {
          iVar8 = 2;
          iVar10 = 2;
        }
        uVar19 = FUN_0880cc48();
        iVar16 = FUN_0880d0ac(uVar19,7);
        if (((1 < iVar16) && (iVar16 < 3)) && (iVar16 = *(int *)(iVar14 + 0x150), iVar20 != 0xb9)) {
          if (*(int *)(iVar14 + 0x140) == 9) {
            iVar16 = *(int *)(iVar14 + 0x1b0);
          }
          else if (*(int *)(iVar14 + 0x140) == 0xb) {
            iVar16 = *(int *)(iVar14 + 0x1b0);
          }
          else {
            iVar18 = FUN_088632f8(param_1,iVar20);
            if (iVar18 == 0) {
              iVar10 = FUN_0884b248();
              if (iVar10 != 0) {
                FUN_0884b268();
                uVar19 = FUN_0880cc48();
                iVar10 = FUN_0880d0ac(uVar19,2);
                if (iVar10 != 0) {
                  uVar19 = FUN_0880cc48();
                  FUN_0880d70c(uVar19,iVar16 + 0xe,iVar8);
                }
              }
              goto LAB_08869bac;
            }
            iVar16 = *(int *)(iVar14 + 0x1b0);
          }
          if (iVar16 < iVar10 * 5) {
            *(int *)(iVar14 + 0x1b0) = *(int *)(iVar14 + 0x1b0) + iVar8;
          }
        }
      }
    }
    else if (((iVar16 < 4) && (*(int *)(DAT_08ac58c4 + 0x20) == 2)) &&
            (((*(uint *)(param_1 + 0x144) & 0x200000) == 0 &&
             ((*(uint *)(param_1 + 0x148) & 0x80) == 0)))) {
      iVar10 = 1;
      iVar16 = FUN_0884c440();
      if (iVar16 != 0) {
        iVar8 = local_50 * 2;
        iVar10 = 2;
      }
      uVar19 = FUN_0880cc48();
      iVar16 = FUN_0880d0ac(uVar19,7);
      if ((1 < iVar16) && (iVar16 < 3)) {
        iVar16 = *(int *)(iVar14 + 0x150);
        if ((*(uint *)(iVar14 + 0x144) & 0x80000) == 0) {
          iVar18 = FUN_088632f8(param_1,iVar20);
          if (iVar18 == 0) {
            iVar10 = FUN_0884b248();
            if (iVar10 != 0) {
              FUN_0884b268();
              uVar19 = FUN_0880cc48();
              iVar10 = FUN_0880d0ac(uVar19,2);
              if (iVar10 != 0) {
                uVar19 = FUN_0880cc48();
                FUN_0880d70c(uVar19,iVar16 + 0xe,iVar8);
              }
            }
            goto LAB_08869bac;
          }
          iVar16 = *(int *)(iVar14 + 0x1b4);
        }
        else {
          iVar16 = *(int *)(iVar14 + 0x1b4);
        }
        if (iVar16 < iVar10 * 5) {
          FUN_088632b4(iVar14,iVar8,iVar10);
        }
      }
    }
  }
LAB_08869bac:
  iVar16 = FUN_0885dddc(iVar20);
  iVar8 = local_58;
  if (((iVar16 == 0) && (*(char *)(param_1 + 0x4c1) == '\0')) &&
     (*(char *)(param_1 + 0x470) != '\0')) {
    if (*(char *)(param_1 + 0x470) == '\0') {
      return;
    }
    iVar20 = FUN_089bed14(4);
    FUN_08862b64(param_1,iVar20 + 0x200073,0,0);
    return;
  }
  if (uVar12 == 7) {
LAB_08869c2c:
    cVar13 = *(char *)(param_1 + 0x4c1);
LAB_08869c30:
    if (cVar13 == '\0') {
      if (99 < *(int *)(param_1 + 0x1d4)) {
        uVar11 = 2;
        *(undefined4 *)(param_1 + 0x1d4) = 0;
        *(undefined4 *)(param_1 + 0x1cc) = 0;
      }
    }
    else {
      uVar11 = 3;
    }
  }
  else {
    if (uVar12 == 4) {
      cVar13 = *(char *)(param_1 + 0x4c1);
      goto LAB_08869c30;
    }
    if (uVar12 == 1) goto LAB_08869c2c;
  }
  if (iVar14 == 0) goto LAB_08869f9c;
  if (*(char *)(param_1 + 0x4c1) == '\0') {
    iVar16 = FUN_08860344(param_1);
    if (((iVar16 == 0) &&
        (iVar16 = (**(code **)(*(int *)(iVar14 + 0x14) + 0x8c))
                            (iVar14 + *(short *)(*(int *)(iVar14 + 0x14) + 0x88)), iVar16 == 0)) &&
       (*(char *)(param_1 + 0x1d0) != '\0')) {
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar14 + 0xc);
    }
  }
  else {
    if ((uVar11 == 0xb) || (uVar11 == 1)) {
      uVar11 = 2;
      iVar16 = *(int *)(iVar14 + 0x580);
    }
    else {
      iVar16 = *(int *)(iVar14 + 0x580);
    }
    *(int *)(iVar14 + 0x580) = iVar16 + 1;
    *(int *)(iVar14 + 0x584) = *(int *)(iVar14 + 0x584) + 1;
    FUN_08876f38(param_1);
    if ((*(uint *)(param_1 + 0x148) & 0x10) != 0) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffffffef;
    }
    FUN_088659f4(param_1);
    FUN_088865f0(param_1 + 0x434,0);
    if (*(int *)(param_1 + 0x660) == 2) {
      iVar16 = FUN_0884b248();
      if (iVar16 != 0) {
        uVar19 = FUN_0884b268();
        FUN_0884dcb0(0x44160000,0x42c80000,0x42200000,uVar19,param_1,0,0,0);
      }
      *(undefined *)(iVar14 + 0x664) = 1;
    }
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      iVar10 = 1;
      iVar16 = FUN_0884c440();
      if (iVar16 != 0) {
        iVar10 = 2;
      }
      iVar18 = *(int *)(iVar14 + 0x150) + 0xe;
      uVar19 = FUN_0880cc48();
      iVar16 = FUN_0880d0ac(uVar19,7);
      if (iVar16 < 2) {
        if (0 < iVar16) {
          iVar16 = FUN_0884b248();
          if (iVar16 != 0) {
            FUN_0884b268();
            uVar19 = FUN_0880cc48();
            iVar16 = FUN_0880d0ac(uVar19,2);
            if (iVar16 != 0) {
              uVar19 = FUN_0880cc48();
              FUN_0880d70c(uVar19,iVar18,iVar10 * 10);
            }
          }
        }
      }
      else if (iVar16 < 3) {
        iVar16 = FUN_0884b248();
        if (iVar16 != 0) {
          FUN_0884b268();
          uVar19 = FUN_0880cc48();
          iVar16 = FUN_0880d0ac(uVar19,2);
          if (iVar16 != 0) {
            uVar19 = FUN_0880cc48();
            FUN_0880d70c(uVar19,iVar18,iVar10 * 0x14);
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x158) == '\0') {
      if (*(uint *)(param_1 + 8) < 0x15) {
        uVar12 = *(uint *)(param_1 + 8);
LAB_08869e98:
        if (uVar12 < 0xb) {
          iVar16 = *(int *)(param_1 + 8);
        }
        else {
          if (*(uint *)(param_1 + 8) < 0x10) goto LAB_08869ec4;
          iVar16 = *(int *)(param_1 + 8);
        }
        if (iVar16 != 9) goto LAB_08869f70;
      }
      else if (0x20 < *(uint *)(param_1 + 8)) {
        uVar12 = *(uint *)(param_1 + 8);
        goto LAB_08869e98;
      }
LAB_08869ec4:
      piVar9 = (int *)FUN_0880cc48();
      uVar12 = *(uint *)(param_1 + 8);
      iVar16 = (int)(uVar12 + ((uint)((int)uVar12 >> 3) >> 0x1d)) >> 3;
      if ((int)uVar12 < 0) {
        uVar12 = -(-uVar12 & 7) & 0x1f;
      }
      else {
        uVar12 = uVar12 & 7;
      }
      *(byte *)(*piVar9 + iVar16 + 0x5c3) =
           *(byte *)(*piVar9 + iVar16 + 0x5c3) | (byte)(1 << uVar12);
    }
  }
LAB_08869f70:
  if (iVar20 != 0xb9) {
    if (*(uint *)(param_1 + 8) < 0x21) {
      FUN_08860170(iVar14,local_50);
      *(int *)(iVar14 + 0x3bc) = param_1;
    }
    else {
      *(int *)(iVar14 + 0x3bc) = param_1;
    }
  }
LAB_08869f9c:
  uVar12 = uVar11 & 0xf;
  if (((iVar20 != 0x8b) && ((*(uint *)(param_1 + 0x144) & 0x100000) != 0)) &&
     (FUN_088659b8(param_1,1), uVar12 == 4)) {
    uVar11 = 2;
    uVar12 = 2;
  }
  bVar4 = true;
  if ((local_3c == 0) && (iVar20 < 0xb3)) {
    bVar4 = false;
  }
  if ((uVar12 != 0xb) && ((*(uint *)(param_1 + 0x144) & 0x100) != 0)) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffeff;
  }
  if (iVar14 == 0) {
    cVar13 = *(char *)(param_1 + 0x476);
  }
  else {
    if (param_1 == *(int *)(iVar14 + 0x3c4)) {
      FUN_088865ac(iVar14 + 0x434,0x12);
    }
    cVar13 = *(char *)(param_1 + 0x476);
  }
  if (cVar13 != '\0') {
    FUN_088865ac(param_1 + 0x434,9);
    FUN_08824790(DAT_08ac5c70,0x49,param_1 + 0x250,2);
  }
  iVar16 = FUN_0885dddc(iVar20);
  if (iVar16 != 0) {
    FUN_0886271c(param_1,iVar14);
  }
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffffd;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffefffff;
  switch(uVar12) {
  case 1:
  case 4:
    if (iVar20 == 0xb3) {
      iVar8 = *(int *)(param_1 + 0x20c);
      *(uint *)(iVar8 + 0x130) = *(uint *)(iVar8 + 0x130) | 1;
      *(undefined4 *)(iVar8 + 0x148) = 1;
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3b4);
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x800;
      auVar3 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(iVar14 + 0x20));
      uVar19 = vdot_t(auVar3._0_12_,auVar3._0_12_);
      fVar21 = (float)vsqrt_s(uVar19);
      if ((int)(300.0 - fVar21) < 1) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = (300.0 - fVar21) * 0.0034;
      }
      auVar2 = vscl_t(*local_5c,fVar21);
      *(int *)*local_5c = auVar2._0_4_;
      *(int *)(*local_5c + 4) = auVar2._4_4_;
      *(int *)(*local_5c + 8) = auVar2._8_4_;
      *(undefined4 *)local_5c[1] = in_V7D;
    }
    FUN_088652c8(0x3e4ccccd,param_1);
    iVar8 = local_48;
    if (bVar4) {
      iVar14 = FUN_089bed14(4);
      FUN_08862b64(param_1,iVar14 + 0x200073,0,0);
    }
    FUN_088706f0(param_1,3,0);
    if (local_58 < 1) {
      if (-1 < local_58) {
        iVar8 = 0xea;
      }
    }
    else if (local_58 < 2) {
      iVar8 = 0xed;
    }
    iVar14 = FUN_088602ec(param_1,1);
    if (iVar14 != 0) {
      iVar8 = iVar8 + 1;
    }
    FUN_088608d8(0,param_1,iVar8,0,1);
    *(undefined4 *)(param_1 + 0x1c4) = 0x10;
    if (iVar20 == 0xb9) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0x3f333333,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
    }
    if ((uVar11 == 4) || (uVar11 == 0x14)) {
      iVar8 = FUN_0885fc80(param_1);
      if (iVar8 != 0) {
        FUN_08862b64(param_1,0x2001f5,0,0);
      }
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x100000;
      iVar8 = *(int *)(param_1 + 0x20c);
      *(uint *)(iVar8 + 0x130) = *(uint *)(iVar8 + 0x130) | 1;
      *(undefined4 *)(iVar8 + 0x148) = 0x14;
      if ((iVar20 == 0x1e) || (uVar19 = 0x78, iVar20 == 0x47)) {
        *(undefined4 *)(param_1 + 0x3cc) = 0x2d;
        cVar13 = '\x01';
      }
      else {
        if (iVar20 == 0x61) {
          uVar19 = 0x46;
        }
        *(undefined4 *)(param_1 + 0x3cc) = uVar19;
        cVar13 = local_43;
      }
      if (cVar13 == '\0') {
        iVar8 = FUN_088243d8(DAT_08ac5c70,0x3e,param_1 + 0x250);
        *(int *)(iVar8 + 0x1fc) = param_1;
        if (param_1 != 0) {
          *(undefined4 *)(iVar8 + 0x200) = *(undefined4 *)(param_1 + 0xc);
        }
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffffe;
      }
      else {
        iVar8 = FUN_088243d8(DAT_08ac5c70,0x40,param_1 + 0x250);
        *(int *)(iVar8 + 0x1fc) = param_1;
        if (param_1 != 0) {
          *(undefined4 *)(iVar8 + 0x200) = *(undefined4 *)(param_1 + 0xc);
        }
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 1;
      }
    }
    if (iVar20 == 0x46) {
      iVar8 = FUN_088243d8(DAT_08ac5c70,0x40,param_1 + 0x250);
      *(int *)(iVar8 + 0x1fc) = param_1;
      if (param_1 != 0) {
        *(undefined4 *)(iVar8 + 0x200) = *(undefined4 *)(param_1 + 0xc);
      }
    }
    if (iVar20 == 0x20) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0x3f000000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      auVar2 = vscl_t(*local_5c,0x40000000);
      *(int *)*local_5c = auVar2._0_4_;
      *(int *)(*local_5c + 4) = auVar2._4_4_;
      *(int *)(*local_5c + 8) = auVar2._8_4_;
      *(undefined4 *)local_5c[1] = in_V7D;
    }
    break;
  case 2:
  case 5:
  case 6:
  case 8:
  case 9:
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffff7ff;
    uVar15 = 8;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    if (uVar11 == 8) {
      FUN_088652c8(0x3d4ccccd,param_1);
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffffdf;
      *(undefined4 *)(param_1 + 0x3c0) = 0;
    }
    else {
      FUN_088652c8(0x3e000000,param_1);
    }
    if (bVar4) {
      if (uVar12 == uVar15) {
        FUN_08862b64(param_1,0x20008a,0,0);
      }
      else {
        FUN_08862b64(param_1,0x200077,0,0);
      }
    }
    FUN_088706f0(param_1,4,0);
    if (iVar8 < 1) {
      iVar16 = 0xf2;
      if (-1 < iVar8) {
        FUN_0886003c(fVar22,param_1);
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        *(undefined4 *)(param_1 + 0x1b8) = 0x20000000;
        local_48 = iVar16;
      }
    }
    else if (iVar8 < 2) {
      fVar22 = fVar22 + 3.141593;
      local_48 = 0xf3;
      if (3.141593 < fVar22) {
        fVar22 = fVar22 - 6.283185;
      }
      else if (fVar22 <= -3.141593) {
        fVar22 = fVar22 + 6.283185;
      }
      FUN_0886003c(fVar22,param_1);
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1b8) = 0x10000000;
    }
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    auVar2 = vscl_t(*local_5c,0x3f99999a);
    *(int *)*local_5c = auVar2._0_4_;
    *(int *)(*local_5c + 4) = auVar2._4_4_;
    *(int *)(*local_5c + 8) = auVar2._8_4_;
    *(undefined4 *)local_5c[1] = in_V7D;
    *(undefined4 *)(param_1 + 0x84) = 0x42080000;
    FUN_088608d8(0,param_1,local_48,1,1);
    if (uVar12 == 9) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffffdf;
    }
    else if ((uVar12 == 5) || (iVar20 == 0xb6)) {
      auVar2 = vscl_t(*local_5c,0x3e3851ec);
      *(int *)*local_5c = auVar2._0_4_;
      *(int *)(*local_5c + 8) = auVar2._8_4_;
      if (iVar20 == 0x86) {
        *(undefined4 *)(param_1 + 0x84) = 0x41200000;
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffffdf;
        auVar2 = vscl_t(*local_5c,0x3dcccccd);
        *(int *)*local_5c = auVar2._0_4_;
        *(int *)(*local_5c + 8) = auVar2._8_4_;
        uVar11 = *(uint *)(param_1 + 0x148);
      }
      else {
        *(undefined4 *)(param_1 + 0x84) = 0x42700000;
        uVar11 = *(uint *)(param_1 + 0x148);
      }
      *(uint *)(param_1 + 0x148) = uVar11 | 2;
    }
    else if ((uVar12 == 6) || (iVar20 == 0xb7)) {
      pauVar17 = local_5c;
      iVar8 = FUN_088602ec(param_1,1);
      if (iVar8 == 0) {
        auVar2 = vscl_t(*pauVar17,0x3f600000);
        *(int *)*pauVar17 = auVar2._0_4_;
        *(int *)(*pauVar17 + 8) = auVar2._8_4_;
        *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
      }
      else {
        auVar2 = vscl_t(*pauVar17,0x3f200000);
        *(int *)*pauVar17 = auVar2._0_4_;
        *(int *)(*pauVar17 + 8) = auVar2._8_4_;
        *(undefined4 *)(param_1 + 0x84) = 0xc1200000;
      }
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffffdf;
    }
    if (iVar20 == 0x54) {
      FUN_088887f8(param_1 + 0x434,0x12,600);
      FUN_088243d8(DAT_08ac5c70,0x47,param_1 + 0x250);
      *(int *)(param_1 + 0x3c4) = iVar14;
    }
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    FUN_08871308(param_1);
    break;
  case 3:
  case 10:
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_088652c8(0x3dcccccd,param_1);
    FUN_08862b64(param_1,0x200078,0,0);
    FUN_088706f0(param_1,5,0);
    uVar19 = 0xea;
    if (iVar8 < 1) {
      if (-1 < iVar8) {
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        *(undefined4 *)(param_1 + 0x1b8) = 0x20000000;
        FUN_0886003c(fVar22,param_1,0,0xea);
        uVar19 = 0xea;
      }
    }
    else if (iVar8 < 2) {
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1b8) = 0x10000000;
      FUN_0886003c(fVar22 + 3.141593,param_1,0,0xea);
      uVar19 = 0xed;
    }
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    auVar2 = vscl_t(*local_5c,0x3fc00000);
    *(int *)*local_5c = auVar2._0_4_;
    *(int *)(*local_5c + 4) = auVar2._4_4_;
    *(int *)(*local_5c + 8) = auVar2._8_4_;
    *(undefined4 *)local_5c[1] = in_V7D;
    *(undefined4 *)(param_1 + 0x84) = 0x42480000;
    iVar20 = FUN_08862c8c(param_1,0xf4,uVar19);
    if (iVar20 == 0) {
      FUN_088608d8(0,param_1,uVar19,1,1);
      iVar20 = *(int *)(param_1 + 0x14);
    }
    else {
      FUN_088608d8(0,param_1,0xf4,1,1);
      iVar20 = *(int *)(param_1 + 0x14);
    }
    (**(code **)(iVar20 + 0x34))(0x3fc00000,param_1 + *(short *)(iVar20 + 0x30));
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    if (uVar11 == 10) {
      *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
    }
    FUN_08871308(param_1);
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    break;
  case 7:
    FUN_08862b64(param_1,0x200072,0,0);
    FUN_088706f0(param_1,3,0);
    FUN_088608d8(0,param_1,0xea,0,1);
    break;
  case 0xb:
    *(undefined4 *)*local_5c = local_c0;
    *(undefined4 *)(*local_5c + 4) = uStack_bc;
    *(undefined4 *)(*local_5c + 8) = uStack_b8;
    *(undefined4 *)local_5c[1] = uStack_b4;
    *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x140) = 0;
    iVar20 = *(int *)(param_1 + 0x20c);
    *(uint *)(iVar20 + 0x130) = *(uint *)(iVar20 + 0x130) & 0xfffffffe;
    *(undefined4 *)(iVar20 + 0x148) = 0;
    return;
  }
  FUN_089dfc04(param_1);
  FUN_089dfdb0(param_1);
  (**(code **)(*(int *)(param_1 + 0x14) + 0xbc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb8));
  return;
}

