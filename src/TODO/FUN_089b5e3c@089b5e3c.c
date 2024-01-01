#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Type propagation algorithm not settling

char * FUN_089b5e3c(undefined4 param_1,char **param_2,char *param_3,int **param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  ushort uVar13;
  undefined4 *puVar14;
  int **ppiVar15;
  ushort uVar16;
  int iVar17;
  char *pcVar18;
  char **ppcVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  int *piVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  undefined8 uVar29;
  char local_1f0 [2];
  short local_1ee;
  int *local_1ec;
  undefined local_1e8;
  char local_8e [2];
  undefined4 local_8c;
  undefined4 local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  undefined8 local_70;
  uint local_68;
  int **local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  char *local_54;
  uint local_50;
  char *local_4c;
  uint local_48;
  int *local_44;
  char *local_40;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  local_64 = param_4;
  FUN_089b9a48();
  local_88 = 0;
  local_40 = (char *)0x0;
  local_54 = "                00000000000000000123456789abcdef";
  local_58 = "00000000000000000123456789abcdef";
  local_7c = "(null)";
  local_78 = "0123456789abcdef";
  local_80 = "0123456789ABCDEF";
  local_84 = "bug in vfprintf: bad base";
LAB_089b5ecc:
  pcVar20 = param_3;
  do {
    iVar10 = FUN_089bad18(PTR_DAT_08ac46dc,&local_1ee,pcVar20,DAT_08ac4b60,&local_88);
    if (iVar10 < 1) {
      iVar22 = (int)pcVar20 - (int)param_3;
      goto LAB_089b5f20;
    }
    pcVar20 = pcVar20 + iVar10;
  } while (local_1ee != 0x25);
  pcVar20 = pcVar20 + -1;
  iVar22 = (int)pcVar20 - (int)param_3;
LAB_089b5f20:
  if (iVar22 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      iVar17 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar17 == 0) && (*(ushort *)(param_2 + 3) == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar17 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_089b5bf0(iVar17,param_3,iVar22,0);
    }
    else if (iVar22 < (int)param_2[2]) {
      memcpy_jak(*param_2,param_3,iVar22);
      *param_2 = *param_2 + iVar22;
      param_2[2] = param_2[2] + -iVar22;
    }
    else {
      memcpy_jak(*param_2,param_3,param_2[2]);
      pcVar18 = param_2[2];
      param_2[2] = (char *)0x0;
      *param_2 = *param_2 + (int)pcVar18;
    }
    local_40 = local_40 + iVar22;
  }
  piVar24 = (int *)local_84;
  if (iVar10 < 1) {
    uVar13 = *(ushort *)(param_2 + 3);
    goto LAB_089b7460;
  }
  if (((int)param_2[2] < 1) && ((*(ushort *)(param_2 + 3) & 0x200) != 0)) {
    uVar13 = *(ushort *)(param_2 + 3);
LAB_089b7460:
    if ((uVar13 & 0x200) == 0) {
      FUN_089b5bf0((int)*(short *)((int)param_2 + 0xe),0,0,1);
    }
    return local_40;
  }
  local_44 = (int *)0x0;
  uVar25 = 0;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  piVar26 = (int *)0xffffffff;
  piVar28 = (int *)0x0;
  local_1f0[0] = '\0';
  pcVar18 = pcVar20 + 2;
  pcVar20 = pcVar20 + 1;
LAB_089b6020:
  iVar10 = (int)*pcVar20;
  uVar21 = iVar10 - 0x20;
  bVar2 = uVar21 < 0x59;
  param_3 = pcVar18;
LAB_089b6030:
  if (!bVar2) {
switchD_089b6048_caseD_89b6b70:
    if (iVar10 != 0) {
      local_1e8 = (undefined)iVar10;
      local_1ec = (int *)0x1;
      local_1f0[0] = '\0';
      local_48 = uVar25 & 4;
      piVar27 = (int *)&local_1e8;
      local_50 = uVar25;
      goto LAB_089b6b98;
    }
    uVar13 = *(ushort *)(param_2 + 3);
    goto LAB_089b7460;
  }
  pcVar20 = param_3;
  switch((&switchD_089b6048::switchdataD_08a9fd48)[uVar21]) {
  case (undefined *)0x89b6050:
    goto switchD_089b6048_caseD_89b6050;
  case (undefined *)0x89b6068:
    bVar6 = true;
    pcVar18 = param_3 + 1;
    goto LAB_089b6020;
  case (undefined *)0x89b6074:
    bVar7 = true;
    pcVar18 = param_3 + 1;
    goto LAB_089b6020;
  case (undefined *)0x89b6080:
    pcVar18 = param_3 + 1;
    ppiVar15 = local_64 + 1;
    piVar28 = *local_64;
    local_64 = ppiVar15;
    if (-1 < (int)piVar28) goto LAB_089b6020;
    piVar28 = (int *)-(int)piVar28;
    break;
  case (undefined *)0x89b60a4:
    break;
  case (undefined *)0x89b60b4:
    local_1f0[0] = '+';
    pcVar18 = param_3 + 1;
    goto LAB_089b6020;
  case (undefined *)0x89b60c4:
    iVar10 = (int)*param_3;
    pcVar20 = param_3 + 1;
    if (iVar10 == 0x2a) {
      pcVar18 = param_3 + 2;
      ppiVar15 = local_64 + 1;
      piVar26 = *local_64;
      local_64 = ppiVar15;
      if ((int)piVar26 < 0) {
        piVar26 = (int *)0xffffffff;
      }
      goto LAB_089b6020;
    }
    piVar26 = (int *)0x0;
    param_3 = pcVar20;
    while (iVar10 - 0x30U < 10) {
      cVar9 = *param_3;
      param_3 = param_3 + 1;
      piVar26 = (int *)((int)piVar26 * 10 + iVar10 + -0x30);
      iVar10 = (int)cVar9;
    }
    uVar21 = iVar10 - 0x20;
    bVar2 = uVar21 < 0x59;
    if ((int)piVar26 < 0) {
      piVar26 = (int *)0xffffffff;
    }
    goto LAB_089b6030;
  case (undefined *)0x89b6150:
    uVar25 = uVar25 | 0x80;
    pcVar18 = param_3 + 1;
    goto LAB_089b6020;
  case (undefined *)0x89b615c:
    goto switchD_089b6048_caseD_89b615c;
  case (undefined *)0x89b619c:
    pcVar18 = param_3 + 1;
    goto LAB_089b6020;
  case (undefined *)0x89b61a8:
    bVar5 = true;
    pcVar18 = param_3 + 1;
    goto LAB_089b6020;
  case (undefined *)0x89b61b4:
    if (*param_3 == 'l') {
      bVar4 = true;
      pcVar18 = param_3 + 2;
      pcVar20 = param_3 + 1;
    }
    else {
      bVar3 = true;
      pcVar18 = param_3 + 1;
    }
    goto LAB_089b6020;
  case (undefined *)0x89b61dc:
    goto switchD_089b6048_caseD_89b61dc;
  case (undefined *)0x89b61e8:
    piVar27 = (int *)&local_1e8;
    local_1e8 = SUB41(*local_64,0);
    local_1ec = (int *)0x1;
    local_1f0[0] = '\0';
    local_48 = uVar25 & 4;
    local_64 = local_64 + 1;
    local_50 = uVar25;
    goto LAB_089b6b98;
  case (undefined *)0x89b6220:
    bVar3 = true;
    goto LAB_089b6248;
  case (undefined *)0x89b6238:
LAB_089b6248:
    if (bVar4) {
      ppiVar15 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar15 + 2;
      piVar12 = ppiVar15[1];
      piVar11 = *ppiVar15;
    }
    else {
      if (bVar3) {
        piVar11 = *local_64;
      }
      else if (bVar5) {
        piVar11 = (int *)(int)(short)*local_64;
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)((int)piVar11 >> 0x1f);
    }
    bVar3 = piVar11 != (int *)0x0;
    if ((int)piVar12 < 0) {
      piVar11 = (int *)-(int)piVar11;
      piVar12 = (int *)(-(uint)bVar3 - (int)piVar12);
      local_1f0[0] = '-';
    }
    local_68 = 1;
LAB_089b68c0:
    uVar29 = CONCAT44(piVar12,piVar11);
    if (-1 < (int)piVar26) {
      uVar25 = uVar25 & 0xffffff7f;
    }
    local_48 = uVar25 & 4;
    piVar27 = (int *)(local_8e + 2);
    local_50 = uVar25;
    local_44 = piVar26;
    if (((piVar11 == (int *)0x0) && (piVar12 == (int *)0x0)) && (piVar26 == (int *)0x0))
    goto LAB_089b6b28;
    if (local_68 == 0) {
      uVar25 = (uint)piVar11 & 7;
      do {
        do {
          piVar24 = piVar27;
          piVar27 = (int *)((int)piVar24 + -1);
          *(char *)piVar27 = (char)uVar25 + '0';
          uVar25 = (int)piVar12 << 0x1d;
          uVar21 = (uint)piVar11 >> 3;
          piVar12 = (int *)((uint)piVar12 >> 3);
          piVar11 = (int *)(uVar25 | uVar21);
          uVar25 = uVar21 & 7;
        } while (piVar11 != (int *)0x0);
        uVar25 = uVar21 & 7;
      } while (piVar12 != (int *)0x0);
      if ((bVar6) && (*(char *)piVar27 != '0')) {
        piVar27 = (int *)((int)piVar24 + -2);
        *(char *)piVar27 = '0';
      }
    }
    else if (local_68 < 2) {
      if (piVar12 != (int *)0x0 || (int *)0x9 < piVar11) {
        do {
          local_38._4_4_ = (undefined4)((ulonglong)uVar29 >> 0x20);
          local_2c = 0;
          local_30 = (int *)0xa;
          cVar9 = FUN_08a0dd64((int)uVar29,local_38._4_4_,10,0);
          local_38 = uVar29;
          piVar27 = (int *)((int)piVar27 + -1);
          *(char *)piVar27 = cVar9 + '0';
          uVar29 = FUN_08a0d7f0((undefined4)local_38,local_38._4_4_,10,0);
          uVar25 = (uint)((ulonglong)uVar29 >> 0x20);
          piVar11 = (int *)uVar29;
        } while ((uVar25 != local_2c || local_30 <= piVar11) && local_2c <= uVar25);
      }
      piVar27 = (int *)((int)piVar27 + -1);
      *(char *)piVar27 = (char)piVar11 + '0';
    }
    else {
      if (2 < local_68) {
        local_1ec = (int *)strlen(local_84);
        piVar27 = piVar24;
        goto LAB_089b6b98;
      }
      uVar25 = (uint)piVar11 & 0xf;
      do {
        do {
          piVar27 = (int *)((int)piVar27 + -1);
          *(char *)piVar27 = local_4c[uVar25];
          uVar25 = (int)piVar12 << 0x1c;
          uVar21 = (uint)piVar11 >> 4;
          piVar12 = (int *)((uint)piVar12 >> 4);
          piVar11 = (int *)(uVar25 | uVar21);
          uVar25 = uVar21 & 0xf;
        } while (piVar11 != (int *)0x0);
        uVar25 = uVar21 & 0xf;
      } while (piVar12 != (int *)0x0);
    }
LAB_089b6b28:
    if ((local_68 == 1) && (bVar7)) {
      piVar27 = (int *)FUN_089b74b4(&local_1e8,piVar27,local_8e + 2,&local_1ec);
    }
    else {
      local_1ec = (int *)(local_8e + 2 + -(int)piVar27);
    }
LAB_089b6b98:
    pcVar20 = local_58;
    uVar13 = *(ushort *)(param_2 + 3);
    uVar16 = uVar13 & 0x200;
    piVar24 = local_44;
    if ((int)local_44 <= (int)local_1ec) {
      piVar24 = local_1ec;
    }
    if (local_1f0[0] == '\0') {
      if (bVar8) {
        piVar24 = (int *)((int)piVar24 + 2);
      }
    }
    else {
      piVar24 = (int *)((int)piVar24 + 1);
    }
    if ((local_50 == 0) && (iVar22 = (int)piVar28 - (int)piVar24, 0 < iVar22)) {
      for (; 0x10 < iVar22; iVar22 = iVar22 + -0x10) {
        if (uVar16 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          else {
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          FUN_089b5bf0((int)sVar1,local_54,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar16 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,local_54,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar16 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,local_54,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar16 = uVar13 & 0x200;
        }
      }
      if (uVar16 == 0) {
        iVar17 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar17 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar17 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b5bf0(iVar17,local_54,iVar22,0);
        uVar13 = *(ushort *)(param_2 + 3);
        uVar16 = uVar13 & 0x200;
      }
      else if (iVar22 < (int)param_2[2]) {
        memcpy_jak(*param_2,local_54,iVar22);
        *param_2 = *param_2 + iVar22;
        uVar13 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -iVar22;
        uVar16 = uVar13 & 0x200;
      }
      else {
        memcpy_jak(*param_2,local_54,param_2[2]);
        uVar13 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + (int)param_2[2];
        param_2[2] = (char *)0x0;
        uVar16 = uVar13 & 0x200;
      }
    }
    if (local_1f0[0] == '\0') {
      if (bVar8) {
        local_8c._0_1_ = 0x30;
        local_8c._1_1_ = (undefined)iVar10;
        if (uVar16 == 0) {
          iVar10 = (int)*(short *)((int)param_2 + 0xe);
          if ((iVar10 == 0) && (uVar13 == 0)) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
            iVar10 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b5bf0(iVar10,local_8e + 2,2,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar16 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 3) {
          memcpy_jak(*param_2,local_8e + 2,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar16 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,local_8e + 2,2);
          *param_2 = *param_2 + 2;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -2;
          uVar16 = uVar13 & 0x200;
        }
      }
    }
    else if (uVar16 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar13 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_089b5bf0(iVar10,local_1f0,1,0);
      uVar13 = *(ushort *)(param_2 + 3);
      uVar16 = uVar13 & 0x200;
    }
    else if ((int)param_2[2] < 2) {
      memcpy_jak(*param_2,local_1f0,param_2[2]);
      uVar13 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + (int)param_2[2];
      param_2[2] = (char *)0x0;
      uVar16 = uVar13 & 0x200;
    }
    else {
      memcpy_jak(*param_2,local_1f0,1);
      *param_2 = *param_2 + 1;
      uVar13 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] + -1;
      uVar16 = uVar13 & 0x200;
    }
    iVar10 = (int)piVar28 - (int)piVar24;
    if ((local_50 == 0x80) && (0 < iVar10)) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar16 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar22 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar22 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar22 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b5bf0(iVar22,pcVar20,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar16 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,pcVar20,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar16 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,pcVar20,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar16 = uVar13 & 0x200;
        }
      }
      if (uVar16 == 0) {
        iVar22 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar22 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar22 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b5bf0(iVar22,pcVar20,iVar10,0);
        uVar13 = *(ushort *)(param_2 + 3);
        uVar16 = uVar13 & 0x200;
      }
      else if (iVar10 < (int)param_2[2]) {
        memcpy_jak(*param_2,pcVar20,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar13 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -iVar10;
        uVar16 = uVar13 & 0x200;
      }
      else {
        memcpy_jak(*param_2,pcVar20,param_2[2]);
        uVar13 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + (int)param_2[2];
        param_2[2] = (char *)0x0;
        uVar16 = uVar13 & 0x200;
      }
    }
    iVar10 = (int)local_44 - (int)local_1ec;
    if (0 < iVar10) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar16 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar22 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar22 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar22 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b5bf0(iVar22,pcVar20,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar16 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,pcVar20,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar16 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,pcVar20,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar16 = uVar13 & 0x200;
        }
      }
      if (uVar16 == 0) {
        iVar22 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar22 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar22 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b5bf0(iVar22,pcVar20,iVar10,0);
        uVar13 = *(ushort *)(param_2 + 3);
        uVar16 = uVar13 & 0x200;
      }
      else if (iVar10 < (int)param_2[2]) {
        memcpy_jak(*param_2,pcVar20,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar13 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -iVar10;
        uVar16 = uVar13 & 0x200;
      }
      else {
        memcpy_jak(*param_2,pcVar20,param_2[2]);
        uVar13 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + (int)param_2[2];
        param_2[2] = (char *)0x0;
        uVar16 = uVar13 & 0x200;
      }
    }
    if (uVar16 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar13 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_089b5bf0(iVar10,piVar27,local_1ec,0);
    }
    else if ((int)local_1ec < (int)param_2[2]) {
      memcpy_jak(*param_2,piVar27,local_1ec);
      *param_2 = *param_2 + (int)local_1ec;
      param_2[2] = param_2[2] + -(int)local_1ec;
    }
    else {
      memcpy_jak(*param_2,piVar27,param_2[2]);
      pcVar20 = param_2[2];
      param_2[2] = (char *)0x0;
      *param_2 = *param_2 + (int)pcVar20;
    }
    pcVar20 = local_54;
    if ((local_48 != 0) && (iVar10 = (int)piVar28 - (int)piVar24, 0 < iVar10)) {
      uVar13 = *(ushort *)(param_2 + 3);
      uVar16 = uVar13 & 0x200;
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar16 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar22 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar22 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar22 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b5bf0(iVar22,pcVar20,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar16 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,pcVar20,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar16 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,pcVar20,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar16 = uVar13 & 0x200;
        }
      }
      if (uVar16 == 0) {
        iVar22 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar22 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar22 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b5bf0(iVar22,pcVar20,iVar10,0);
      }
      else if (iVar10 < (int)param_2[2]) {
        memcpy_jak(*param_2,pcVar20,iVar10);
        *param_2 = *param_2 + iVar10;
        param_2[2] = param_2[2] + -iVar10;
      }
      else {
        memcpy_jak(*param_2,pcVar20,param_2[2]);
        pcVar20 = param_2[2];
        param_2[2] = (char *)0x0;
        *param_2 = *param_2 + (int)pcVar20;
      }
    }
    if ((int)piVar24 < (int)piVar28) {
      piVar24 = piVar28;
    }
    local_40 = local_40 + (int)piVar24;
    goto LAB_089b5ecc;
  case (undefined *)0x89b6320:
    local_48 = uVar25 & 4;
    uVar23 = 0;
    if (piVar26 == (int *)0xffffffff) {
      piVar26 = (int *)0x6;
    }
    puVar14 = (undefined4 *)((int)local_64 + ((uint)local_64 & 7));
    local_64 = (int **)(puVar14 + 2);
    local_5c = puVar14[1];
    local_60 = *puVar14;
    if ((iVar10 == 0x67) || (local_50 = uVar25, iVar10 == 0x47)) {
      local_50 = uVar25;
      iVar22 = FUN_08a0ed34(local_60,local_5c,0,0);
      uVar29 = CONCAT44(local_5c,local_60);
      if (iVar22 == 0) {
        uVar29 = 0x3ff0000000000000;
      }
      else {
        iVar22 = FUN_08a0ed34(local_60,local_5c,0,0);
        if (iVar22 < 0) {
          uVar29 = __negdf2(local_60,local_5c);
        }
        uVar29 = FUN_089baa60((int)uVar29,(int)((ulonglong)uVar29 >> 0x20));
      }
      local_70 = uVar29;
      iVar22 = FUN_08a0ed34((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),0,0xc0100000);
      if (iVar22 < 0) {
LAB_089b6464:
        iVar22 = 0x45;
        if (iVar10 == 0x67) {
          iVar22 = 0x65;
        }
      }
      else {
        uVar29 = FUN_08a0ed90(piVar26);
        iVar22 = FUN_08a0ed34((undefined4)local_70,local_70._4_4_,(int)uVar29,
                              (int)((ulonglong)uVar29 >> 0x20));
        if (-1 < iVar22) goto LAB_089b6464;
        iVar22 = 0x66;
      }
      uVar23 = 1;
      iVar10 = iVar22;
    }
    if (bVar6) {
      if (piVar26 == (int *)0x0) {
        piVar26 = (int *)0x1;
      }
      uVar23 = 0;
    }
    piVar27 = (int *)FUN_089b5490(local_60,local_5c,piVar26,(int)(char)iVar10,uVar23,local_1f0);
    local_1ec = (int *)strlen(piVar27);
    if (bVar7) {
      piVar27 = (int *)FUN_089b74b4(piVar27,piVar27,(char *)((int)piVar27 + (int)local_1ec),
                                    &local_1ec);
    }
    goto LAB_089b6b98;
  case (undefined *)0x89b64ec:
    goto switchD_089b6048_caseD_89b64ec;
  case (undefined *)0x89b6574:
    bVar3 = true;
    goto LAB_089b659c;
  case (undefined *)0x89b658c:
LAB_089b659c:
    if (bVar4) {
      ppiVar15 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar15 + 2;
      piVar12 = ppiVar15[1];
      piVar11 = *ppiVar15;
    }
    else {
      if (bVar3) {
        piVar11 = *local_64;
      }
      else if (bVar5) {
        piVar11 = (int *)((uint)*local_64 & 0xffff);
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)0x0;
    }
    local_68 = 0;
LAB_089b68bc:
    local_1f0[0] = '\0';
    goto LAB_089b68c0;
  case (undefined *)0x89b6630:
    piVar11 = *local_64;
    local_4c = local_78;
    piVar12 = (int *)0x0;
    local_68 = 2;
    bVar8 = true;
    iVar10 = 0x78;
    local_64 = local_64 + 1;
    goto LAB_089b68bc;
  case (undefined *)0x89b6668:
    local_48 = uVar25 & 4;
    piVar27 = *local_64;
    if (*local_64 == (int *)0x0) {
      piVar27 = (int *)local_7c;
    }
    if ((int)piVar26 < 0) {
      local_64 = local_64 + 1;
      local_50 = uVar25;
      local_1ec = (int *)strlen(piVar27);
    }
    else {
      local_64 = local_64 + 1;
      local_50 = uVar25;
      iVar22 = memchr(piVar27,0,piVar26);
      local_1ec = piVar26;
      if ((iVar22 != 0) && ((int)(int *)(iVar22 - (int)piVar27) <= (int)piVar26)) {
        local_1ec = (int *)(iVar22 - (int)piVar27);
      }
    }
    local_1f0[0] = '\0';
    goto LAB_089b6b98;
  case (undefined *)0x89b6700:
    bVar3 = true;
    goto LAB_089b6730;
  case (undefined *)0x89b671c:
LAB_089b6730:
    if (bVar4) {
      ppiVar15 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar15 + 2;
      piVar12 = ppiVar15[1];
      piVar11 = *ppiVar15;
    }
    else {
      if (bVar3) {
        piVar11 = *local_64;
      }
      else if (bVar5) {
        piVar11 = (int *)((uint)*local_64 & 0xffff);
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)0x0;
    }
    local_68 = 1;
    goto LAB_089b68bc;
  case (undefined *)0x89b67c8:
    local_4c = local_80;
    goto LAB_089b67fc;
  case (undefined *)0x89b67e4:
    local_4c = local_78;
LAB_089b67fc:
    if (bVar4) {
      ppiVar15 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar15 + 2;
      piVar12 = ppiVar15[1];
      piVar11 = *ppiVar15;
    }
    else {
      if (bVar3) {
        piVar11 = *local_64;
      }
      else if (bVar5) {
        piVar11 = (int *)((uint)*local_64 & 0xffff);
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)0x0;
    }
    local_68 = 2;
    if ((bVar6) && ((piVar11 != (int *)0x0 || (piVar12 != (int *)0x0)))) {
      bVar8 = true;
    }
    goto LAB_089b68bc;
  case (undefined *)0x89b6b70:
    goto switchD_089b6048_caseD_89b6b70;
  }
  pcVar18 = param_3 + 1;
  uVar25 = uVar25 | 4;
  goto LAB_089b6020;
switchD_089b6048_caseD_89b61dc:
  bVar4 = true;
  pcVar18 = param_3 + 1;
  goto LAB_089b6020;
switchD_089b6048_caseD_89b64ec:
  if (bVar4) {
    ppcVar19 = (char **)*local_64;
    ppcVar19[1] = (char *)((int)local_40 >> 0x1f);
    *ppcVar19 = local_40;
    local_64 = local_64 + 1;
  }
  else if (bVar3) {
    **local_64 = (int)local_40;
    local_64 = local_64 + 1;
  }
  else if (bVar5) {
    *(short *)*local_64 = (short)local_40;
    local_64 = local_64 + 1;
  }
  else {
    **local_64 = (int)local_40;
    local_64 = local_64 + 1;
  }
  goto LAB_089b5ecc;
switchD_089b6048_caseD_89b615c:
  piVar28 = (int *)0x0;
  do {
    iVar22 = (int)piVar28 * 10 + iVar10;
    iVar10 = (int)*param_3;
    param_3 = param_3 + 1;
    piVar28 = (int *)(iVar22 + -0x30);
  } while (iVar10 - 0x30U < 10);
  uVar21 = iVar10 - 0x20;
  bVar2 = uVar21 < 0x59;
  goto LAB_089b6030;
switchD_089b6048_caseD_89b6050:
  pcVar18 = param_3 + 1;
  if (local_1f0[0] == '\0') {
    local_1f0[0] = ' ';
  }
  goto LAB_089b6020;
}

