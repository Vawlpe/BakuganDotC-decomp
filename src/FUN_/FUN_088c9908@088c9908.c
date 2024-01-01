#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c9908(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0 [5];
  float local_8c;
  float local_88;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  ushort *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  local_50 = FUN_089bfa40(100);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0;
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    if ((*(int *)(param_1 + 0x6c) == 0) || (DAT_08abea1c != 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 5;
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  case 1:
    if (4 < *(int *)(param_1 + 0x4c)) {
      local_54 = (ushort *)(param_2 + 4);
      *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 100);
      local_58 = &DAT_08b00190;
      local_5c = &DAT_08b001b0;
      local_60 = &DAT_08b00880;
      local_64 = &DAT_08b00f20;
      pfVar14 = (float *)(param_1 + 0x30);
LAB_088c9ac0:
      fVar16 = *(float *)(param_1 + 0x68);
LAB_088c9ac4:
      if ((fVar16 < 1.0) && (*(char *)(param_1 + 0x14d) == '\0')) break;
      uVar10 = 0x4000;
      if (local_50 != 0) {
        uVar10 = 0;
      }
      if (*(int *)(param_1 + 0x4c) < 7) {
        cVar9 = *(char *)(param_1 + 0x14d);
      }
      else if (*(int *)(param_1 + 0x70) == 1) {
        if ((ushort)(*local_54 & uVar10 | (ushort)DAT_08abea1c) != 0) {
          *(undefined4 *)(param_1 + 0x68) = 0x447a0000;
        }
        cVar9 = *(char *)(param_1 + 0x14d);
      }
      else {
        cVar9 = *(char *)(param_1 + 0x14d);
      }
      if (cVar9 == '\0') {
        *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - 1.0;
        cVar9 = *(char *)(param_1 + 0x14e);
      }
      else {
        cVar9 = *(char *)(param_1 + 0x14e);
      }
      local_c0 = 0;
      if (cVar9 == '\0') {
        iVar12 = FUN_08818370(*(undefined4 *)(param_1 + 0x5c),&local_c0);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + local_c0;
      }
      else {
        iVar12 = FUN_08818370(*(undefined4 *)(param_1 + 0x150),&local_c0);
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + local_c0;
      }
      if ((iVar12 == -0xb) && (*(int *)(param_1 + 500) != 0)) {
        sVar1 = *(short *)(param_1 + 0x1f8);
        bVar13 = **(byte **)(param_1 + 0x5c);
        uVar7 = FUN_089c2b48(1);
        FUN_089c357c(uVar7,(int)*(short *)(*(int *)(param_1 + 500) + ((uint)bVar13 + (int)sVar1) * 2
                                          ),0,0);
      }
      if (iVar12 != -0xc) {
        if (iVar12 == -0xb) {
          iVar12 = *(int *)(param_1 + 0x5c);
          goto LAB_088c9c08;
        }
        local_bc = 0;
        uVar7 = FUN_08818370(*(undefined4 *)(param_1 + 0x5c),&local_bc);
        iVar8 = FUN_088183ec(iVar12,uVar7);
        if (iVar8 != 0) {
          local_b8[0] = 0;
          iVar8 = 0;
          uStack_ac = *(undefined4 *)(param_1 + 0x34);
          uStack_a8 = *(undefined4 *)(param_1 + 0x38);
          uStack_a4 = *(undefined4 *)(param_1 + 0x3c);
          uVar7 = vf2id_s(*(float *)(param_1 + 0x50) * 0.5,0);
          local_8c = (float)vi2f_s(uVar7,0);
          local_b0 = *pfVar14 + local_8c;
          do {
            iVar5 = FUN_08818370(*(undefined4 *)(param_1 + 0x5c),local_b8);
            if (iVar5 < 1) {
              iVar6 = FUN_0880dbb4();
              if ((iVar6 == 0) || (iVar5 != -5)) goto LAB_088c9d24;
              local_a0[0] = local_b8[0];
              uVar7 = FUN_08818370(*(undefined4 *)(param_1 + 0x5c),local_a0);
              iVar6 = FUN_088183ec(iVar12,uVar7);
              if (iVar6 != 0) goto LAB_088c9d24;
            }
            iVar8 = iVar8 + 1;
            if (iVar5 == -5) {
              uVar7 = vf2id_s(*(float *)(param_1 + 0x50) * 0.5,0);
              local_88 = (float)vi2f_s(uVar7,0);
              local_b0 = local_b0 + local_88;
            }
            else {
              fVar16 = (float)FUN_088184ac(*(undefined4 *)(param_1 + 0x10),iVar5);
              local_b0 = local_b0 + fVar16;
            }
          } while( true );
        }
        goto LAB_088c9d5c;
      }
      iVar12 = *(int *)(param_1 + 0x5c);
LAB_088c9c08:
      *(int *)(param_1 + 0x5c) = iVar12 + 1;
      goto LAB_088c9ac0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x80) < 1) {
      if (*(int *)(param_1 + 0x80) < 0) {
        iVar12 = *(int *)(param_1 + 0x80) + 1;
        *(int *)(param_1 + 0x80) = iVar12;
        if (iVar12 == 0) {
          *(undefined4 *)(param_1 + 0x80) = 1;
          FUN_088c98a8(param_1);
          break;
        }
        goto LAB_088ca2d0;
      }
      bVar13 = *(byte *)(param_2 + 3);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x80) + -1;
      *(int *)(param_1 + 0x80) = iVar12;
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
        FUN_088c98a8(param_1);
        break;
      }
LAB_088ca2d0:
      bVar13 = *(byte *)(param_2 + 3);
    }
    iVar12 = 0;
    if ((bVar13 & 0x20) != 0) {
      iVar12 = *(int *)(param_1 + 0x1e0) + 1;
    }
    *(int *)(param_1 + 0x1e0) = iVar12;
    if ((*(int *)(param_1 + 0x70) == 1) &&
       ((((*(ushort *)(param_2 + 4) & 0x4000) != 0 || (0x19 < *(int *)(param_1 + 0x1e0))) ||
        (DAT_08abea1c != 0)))) {
      FUN_088c983c(param_1,0);
      if (*(int *)(param_1 + 300) == 0) {
        cVar9 = *(char *)(param_1 + 0x154);
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 300) + 0x16c) = 0;
        cVar9 = *(char *)(param_1 + 0x154);
      }
      *(undefined4 *)(param_1 + 0x48) = 1;
      *(undefined4 *)(param_1 + 0x68) = 0x447a0000;
      *(uint *)(param_1 + 0x7c) = (uint)(cVar9 != '\0');
      *(undefined *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x1e0) = 0;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x14c) != '\0') {
      if (*(int *)(param_1 + 0x134) == 0) {
        local_48 = 0;
        FUN_089d8634();
        uVar7 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar8 = FUN_089d7d74(400,0,0);
        FUN_089d816c(uVar7);
        FUN_089d866c();
        iVar12 = local_48;
        if (iVar8 != 0) {
          uVar7 = FUN_089f7720("huki_check");
          FUN_088c7690(iVar8,uVar7,3,param_1);
          iVar12 = iVar8;
        }
        *(int *)(param_1 + 0x134) = iVar12;
      }
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      if (7 < *(int *)(param_1 + 0x4c)) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x134) + 0x16c);
        if (iVar12 < 1) {
          if (-1 < iVar12) {
            local_4c = 0;
            FUN_089d8634();
            uVar7 = FUN_089d81a4();
            FUN_089d816c(1);
            iVar8 = FUN_089d7d74(400,0,0);
            FUN_089d816c(uVar7);
            FUN_089d866c();
            iVar12 = local_4c;
            if (iVar8 != 0) {
              uVar7 = FUN_089f7720("huki_cursor");
              FUN_088c7690(iVar8,uVar7,4,param_1);
              iVar12 = iVar8;
            }
            *(undefined4 *)(iVar12 + 0x170) = *(undefined4 *)(param_1 + 0x4c);
            if ((*(ushort *)(param_2 + 4) & 0x2000) == 0) {
              if (*(int *)(param_1 + 0x13c) < 1) {
                iVar12 = *(int *)(param_1 + 0x140);
              }
              else {
                if ((*(byte *)(param_2 + 8) & 0x10) != 0) {
                  iVar12 = *(int *)(param_1 + 0x13c) + -1;
                  iVar8 = *(int *)(param_1 + iVar12 * 4 + 0x1c0);
                  *(int *)(param_1 + 0x13c) = iVar12;
                  *(int *)(param_1 + 0x148) = -iVar8;
                  break;
                }
                iVar12 = *(int *)(param_1 + 0x140);
              }
              if ((*(int *)(param_1 + 0x13c) < iVar12 + -1) &&
                 ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
                iVar12 = *(int *)(param_1 + 0x13c) + 1;
                iVar8 = *(int *)(param_1 + iVar12 * 4 + 0x1c0);
                *(int *)(param_1 + 0x13c) = iVar12;
                *(int *)(param_1 + 0x148) = -iVar8;
              }
            }
            else {
              *(undefined4 *)(DAT_08ac58c4 + 8) = *(undefined4 *)(param_1 + 0x13c);
              *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x16c) = 1;
            }
          }
        }
        else if (iVar12 == 2) {
          FUN_088c98a8(param_1);
          *(undefined *)(param_1 + 0x154) = 0;
          *(undefined4 *)(param_1 + 0x7c) = 0;
          *(undefined *)(param_1 + 0x120) = 0;
        }
      }
      break;
    }
    if (*(int *)(param_1 + 0x80) < 1) {
      if (*(int *)(param_1 + 0x80) < 0) {
        iVar12 = *(int *)(param_1 + 0x80) + 1;
        *(int *)(param_1 + 0x80) = iVar12;
        if (iVar12 == 0) {
          *(undefined4 *)(param_1 + 0x80) = 1;
          FUN_088c98a8(param_1);
          break;
        }
        goto LAB_088ca5e0;
      }
      iVar12 = *(int *)(param_1 + 0x70);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x80) + -1;
      *(int *)(param_1 + 0x80) = iVar12;
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
        FUN_088c98a8(param_1);
        break;
      }
LAB_088ca5e0:
      iVar12 = *(int *)(param_1 + 0x70);
    }
    if ((iVar12 == 1) && (*(char *)(param_1 + 0x79) == '\0')) {
      iVar12 = 0;
      if ((*(byte *)(param_2 + 3) & 0x20) != 0) {
        iVar12 = *(int *)(param_1 + 0x1e0) + 1;
      }
      *(int *)(param_1 + 0x1e0) = iVar12;
      if ((((*(ushort *)(param_2 + 4) & 0x4000) != 0) || (0x19 < *(int *)(param_1 + 0x1e0))) ||
         (DAT_08abea1c != 0)) {
        FUN_088c98a8(param_1);
        *(undefined *)(param_1 + 0x154) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined *)(param_1 + 0x120) = 0;
        *(undefined4 *)(param_1 + 0x1e0) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 10;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x130) == 0) {
      if (*(char *)(param_1 + 0x79) == '\0') {
        FUN_089bf7a8(param_1,1);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x48) = 10;
    }
    else if (*(int *)(*(int *)(param_1 + 0x130) + 0x16c) == 3) {
      if (*(char *)(param_1 + 0x79) == '\0') {
        FUN_089bf7a8(param_1,1);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x48) = 10;
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x80) < 1) {
      if (*(int *)(param_1 + 0x80) < 0) {
        iVar12 = *(int *)(param_1 + 0x80) + 1;
        *(int *)(param_1 + 0x80) = iVar12;
        if (iVar12 == 0) {
          FUN_089bf7a8(param_1,1);
          return 1;
        }
        goto LAB_088ca780;
      }
      cVar9 = *(char *)(param_1 + 0x200);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x80) + -1;
      *(int *)(param_1 + 0x80) = iVar12;
      if (iVar12 == 0) {
        FUN_089bf7a8(param_1,1);
        return 1;
      }
LAB_088ca780:
      cVar9 = *(char *)(param_1 + 0x200);
    }
    if ((cVar9 == '\0') && ((*(ushort *)(param_2 + 4) & 0x4000) != 0)) {
      FUN_089bf7a8(param_1,1);
      return 1;
    }
  }
switchD_088c9994_caseD_5:
  FUN_089f50bc(*(undefined4 *)(param_1 + 0x10));
  return 0;
LAB_088c9d24:
  if (0 < iVar8) {
    if (local_b0 <= (480.0 - DAT_08b00f00 * 2.0) + 6.0) {
      iVar8 = *(int *)(param_1 + 0x1ec);
      goto LAB_088c9d60;
    }
    iVar12 = -3;
  }
LAB_088c9d5c:
  iVar8 = *(int *)(param_1 + 0x1ec);
LAB_088c9d60:
  bVar2 = iVar12 < -5;
  if (((0 < iVar8) && (bVar2 = iVar12 < -5, iVar12 == -3)) &&
     (bVar2 = false, *(int *)(param_1 + 0x1ec) <= *(int *)(param_1 + 0x1f0) + 1)) {
    iVar12 = -4;
    bVar2 = false;
  }
  if ((bVar2) && (-0xb < iVar12)) {
    uVar11 = iVar12 + 10;
    if (uVar11 < 5) {
      if (iVar12 == -10) {
        iVar12 = *(int *)(param_1 + 0x10);
        uVar7 = local_64[1];
        uVar3 = local_64[2];
        uVar4 = local_64[3];
        *(undefined4 *)(iVar12 + 0xc0) = *local_64;
        *(undefined4 *)(iVar12 + 0xc4) = uVar7;
        *(undefined4 *)(iVar12 + 200) = uVar3;
        *(undefined4 *)(iVar12 + 0xcc) = uVar4;
        fVar16 = *(float *)(param_1 + 0x68);
      }
      else if (uVar11 == 1) {
        iVar12 = *(int *)(param_1 + 0x10);
        uVar7 = local_60[1];
        uVar3 = local_60[2];
        uVar4 = local_60[3];
        *(undefined4 *)(iVar12 + 0xc0) = *local_60;
        *(undefined4 *)(iVar12 + 0xc4) = uVar7;
        *(undefined4 *)(iVar12 + 200) = uVar3;
        *(undefined4 *)(iVar12 + 0xcc) = uVar4;
        fVar16 = *(float *)(param_1 + 0x68);
      }
      else if (uVar11 == 2) {
        iVar12 = *(int *)(param_1 + 0x10);
        uVar7 = local_5c[1];
        uVar3 = local_5c[2];
        uVar4 = local_5c[3];
        *(undefined4 *)(iVar12 + 0xc0) = *local_5c;
        *(undefined4 *)(iVar12 + 0xc4) = uVar7;
        *(undefined4 *)(iVar12 + 200) = uVar3;
        *(undefined4 *)(iVar12 + 0xcc) = uVar4;
        fVar16 = *(float *)(param_1 + 0x68);
      }
      else if (uVar11 == 3) {
        iVar12 = *(int *)(param_1 + 0x10);
        uVar7 = local_58[1];
        uVar3 = local_58[2];
        uVar4 = local_58[3];
        *(undefined4 *)(iVar12 + 0xc0) = *local_58;
        *(undefined4 *)(iVar12 + 0xc4) = uVar7;
        *(undefined4 *)(iVar12 + 200) = uVar3;
        *(undefined4 *)(iVar12 + 0xcc) = uVar4;
        fVar16 = *(float *)(param_1 + 0x68);
      }
      else {
        iVar12 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(iVar12 + 0xc0) = *(undefined4 *)(iVar12 + 0xb0);
        *(undefined4 *)(iVar12 + 0xc4) = *(undefined4 *)(iVar12 + 0xb4);
        *(undefined4 *)(iVar12 + 200) = *(undefined4 *)(iVar12 + 0xb8);
        *(undefined4 *)(iVar12 + 0xcc) = *(undefined4 *)(iVar12 + 0xbc);
        fVar16 = *(float *)(param_1 + 0x68);
      }
    }
    else {
      fVar16 = *(float *)(param_1 + 0x68);
    }
    *(float *)(param_1 + 0x68) = fVar16 + 1.0;
    goto LAB_088c9ac0;
  }
  if (iVar12 == -1) {
    if (*(char *)(param_1 + 0x14e) != '\0') {
      *(undefined *)(param_1 + 0x14e) = 0;
      if (*(char *)(param_1 + 0x14d) != '\0') {
        *(undefined *)(param_1 + 0x14d) = 0;
        if (*(char *)(param_1 + 0x7a) != '\0') {
          *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + 4.0;
        }
        *(undefined4 *)(param_1 + 400) = 0x41800000;
      }
      goto LAB_088c9ac0;
    }
    if (*(char *)(param_1 + 0x14c) == '\0') {
      iVar12 = *(int *)(param_1 + 300);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x140) + 1;
      *(int *)(param_1 + 0x140) = iVar12;
      *(int *)(param_1 + iVar12 * 4 + 0x1c0) = *(int *)(param_1 + 0x144) * -2;
      iVar12 = *(int *)(param_1 + 300);
    }
    if ((iVar12 != 0) && (*(char *)(param_1 + 0x79) == '\0')) {
      *(undefined4 *)(*(int *)(param_1 + 300) + 0x16c) = 1;
    }
    *(undefined4 *)(param_1 + 0x48) = 3;
    if (*(char *)(param_1 + 0x14c) != '\0') {
      *(int *)(param_1 + 0x148) = -*(int *)(param_1 + 0x1c0);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    goto switchD_088c9994_caseD_5;
  }
  if (iVar12 == -3) {
    *(undefined *)(param_1 + 0x120) = 0;
    if (*(char *)(param_1 + 0x14e) != '\0') {
      *(undefined *)(param_1 + 0x14e) = 0;
    }
    if (*(char *)(param_1 + 0x14d) == '\0') {
      fVar16 = *(float *)(param_1 + 0x20);
    }
    else {
      *(undefined *)(param_1 + 0x14d) = 0;
      if (*(char *)(param_1 + 0x7a) != '\0') {
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + 4.0;
      }
      *(undefined4 *)(param_1 + 400) = 0x41800000;
      fVar16 = *(float *)(param_1 + 0x20);
    }
    *(float *)(param_1 + 0x30) = fVar16 + *(float *)(param_1 + 400);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x14c) != '\0') {
      iVar12 = *(int *)(param_1 + 0x140) + 1;
      *(int *)(param_1 + 0x140) = iVar12;
      *(int *)(param_1 + iVar12 * 4 + 0x1c0) = *(int *)(param_1 + 0x144) * -2;
    }
    *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
    goto LAB_088c9ac0;
  }
  if (iVar12 == -4) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    if (*(char *)(param_1 + 0x78) != '\0') {
      *(undefined *)(param_1 + 0x120) = 0;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 400);
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x54);
      goto LAB_088c9ac0;
    }
    *pfVar14 = *(float *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 400);
    if ((*(char *)(param_1 + 0x7a) != '\0') && (*(char *)(param_1 + 0x154) != '\0')) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x54) + 4.0 + *(float *)(param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x48) = 2;
    if (*(int *)(param_1 + 300) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 300) + 0x16c) = 1;
    }
    goto switchD_088c9994_caseD_5;
  }
  if (((iVar12 < -0xc) && (-0x10 < iVar12)) || (iVar12 == -0x13)) {
    *(undefined *)(param_1 + 0x14e) = 1;
    goto LAB_088c9ac0;
  }
  if (iVar12 == -0x10) {
    *(undefined *)(param_1 + 0x14d) = 1;
    *(undefined *)(param_1 + 0x154) = 1;
    goto LAB_088c9ac0;
  }
  if (iVar12 == -0x12) {
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x34);
    *(undefined *)(param_1 + 0x14c) = 1;
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x144) * -2;
    goto LAB_088c9ac0;
  }
  if (iVar12 == -2) goto LAB_088c9ac0;
  if (iVar12 == -0x11) {
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x50);
    goto LAB_088c9ac0;
  }
  if (iVar12 == -5) {
    fVar16 = (float)FUN_088184ac(*(undefined4 *)(param_1 + 0x10),0);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar16;
    goto LAB_088c9ac0;
  }
  if (*(char *)(param_1 + 0x120) == '\0') {
    iVar8 = param_1 + *(int *)(param_1 + 0x7c) * 0x10;
    *(undefined4 *)(iVar8 + 0x90) = in_V72;
    *(undefined4 *)(iVar8 + 0x94) = in_V76;
    *(undefined4 *)(iVar8 + 0x98) = in_V7A;
    *(undefined4 *)(iVar8 + 0x9c) = in_V7E;
    iVar8 = *(int *)(param_1 + 0x7c);
    iVar5 = param_1 + iVar8 * 0x10;
    fVar16 = *(float *)(iVar5 + 0x90) + *(float *)(param_1 + 0x30);
    *(float *)(iVar5 + 0x90) = fVar16;
    *(float *)(iVar5 + 0x94) = *(float *)(iVar5 + 0x94) + *(float *)(param_1 + 0x34);
    *(float *)(iVar5 + 0x98) = fVar16;
    if (iVar8 < 7) {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    }
  }
  *(undefined *)(param_1 + 0x120) = 1;
  local_44 = 0;
  FUN_089d8634();
  uVar7 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar7);
  FUN_089d866c();
  iVar8 = local_44;
  if (iVar5 != 0) {
    FUN_088c790c(iVar5,iVar12,pfVar14,param_1);
    iVar8 = iVar5;
  }
  fVar16 = (float)FUN_088184ac(*(undefined4 *)(param_1 + 0x10),iVar12);
  fVar16 = *(float *)(param_1 + 0x30) + fVar16;
  iVar12 = param_1 + *(int *)(param_1 + 0x7c) * 0x10;
  fVar15 = *(float *)(iVar12 + 0x88);
  *(float *)(param_1 + 0x30) = fVar16;
  cVar9 = *(char *)(param_1 + 0x14d);
  *(float *)(iVar12 + 0x8c) = (fVar16 - fVar15) - *(float *)(param_1 + 0x50);
  if (cVar9 != '\0') {
    *(undefined *)(iVar8 + 0x180) = 1;
  }
  if (*(char *)(param_1 + 0x14c) == '\0') {
    iVar12 = *(int *)(param_1 + 0x144);
  }
  else {
    *(int *)(iVar8 + 0x170) = *(int *)(param_1 + 0x144) * -2;
    *(int *)(iVar8 + 0x174) = *(int *)(param_1 + 0x140) + 1;
    iVar12 = *(int *)(param_1 + 0x144);
  }
  *(int *)(param_1 + 0x144) = iVar12 + 1;
  if (*(int *)(param_1 + 0x80) < -1) goto code_r0x088ca260;
  fVar16 = *(float *)(param_1 + 0x68);
  goto LAB_088c9ac4;
code_r0x088ca260:
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  goto LAB_088c9ac0;
}

