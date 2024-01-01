#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Type propagation algorithm not settling

char * FUN_089b77dc(undefined4 param_1,char **param_2,char *param_3,int **param_4)

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
  int **ppiVar14;
  ushort uVar15;
  int iVar16;
  char *pcVar17;
  char **ppcVar18;
  char *pcVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  undefined8 uVar27;
  char local_b0 [2];
  short local_ae;
  int *local_ac;
  undefined local_a8;
  char local_82 [2];
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  uint local_68;
  int **local_64;
  char *local_60;
  char *local_5c;
  uint local_58;
  char *local_54;
  uint local_50;
  int *local_4c;
  char *local_48;
  undefined8 local_40;
  int *local_38;
  uint local_34;
  
  local_7c = 0;
  local_48 = (char *)0x0;
  local_5c = "                00000000000000000123456789abcdef";
  local_60 = "00000000000000000123456789abcdef";
  local_70 = "(null)";
  local_6c = "0123456789abcdef";
  local_74 = "0123456789ABCDEF";
  local_78 = "bug in vfprintf: bad base";
  local_64 = param_4;
LAB_089b7868:
  pcVar19 = param_3;
  do {
    iVar10 = FUN_089bad18(PTR_DAT_08ac46dc,&local_ae,pcVar19,DAT_08ac4b60,&local_7c);
    if (iVar10 < 1) {
      iVar21 = (int)pcVar19 - (int)param_3;
      goto LAB_089b78bc;
    }
    pcVar19 = pcVar19 + iVar10;
  } while (local_ae != 0x25);
  pcVar19 = pcVar19 + -1;
  iVar21 = (int)pcVar19 - (int)param_3;
LAB_089b78bc:
  if (iVar21 != 0) {
    if ((*(ushort *)(param_2 + 3) & 0x200) == 0) {
      iVar16 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar16 == 0) && (*(ushort *)(param_2 + 3) == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar16 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_089b7680(iVar16,param_3,iVar21,0);
    }
    else if (iVar21 < (int)param_2[2]) {
      memcpy_jak(*param_2,param_3,iVar21);
      *param_2 = *param_2 + iVar21;
      param_2[2] = param_2[2] + -iVar21;
    }
    else {
      memcpy_jak(*param_2,param_3,param_2[2]);
      pcVar17 = param_2[2];
      param_2[2] = (char *)0x0;
      *param_2 = *param_2 + (int)pcVar17;
    }
    local_48 = local_48 + iVar21;
  }
  piVar22 = (int *)local_78;
  if (iVar10 < 1) {
    uVar13 = *(ushort *)(param_2 + 3);
    goto LAB_089b8c70;
  }
  if (((int)param_2[2] < 1) && ((*(ushort *)(param_2 + 3) & 0x200) != 0)) {
    uVar13 = *(ushort *)(param_2 + 3);
LAB_089b8c70:
    if ((uVar13 & 0x200) == 0) {
      FUN_089b7680((int)*(short *)((int)param_2 + 0xe),0,0,1);
    }
    return local_48;
  }
  local_4c = (int *)0x0;
  uVar23 = 0;
  bVar8 = false;
  bVar5 = false;
  bVar4 = false;
  bVar7 = false;
  bVar2 = false;
  bVar6 = false;
  piVar26 = (int *)0x0;
  piVar24 = (int *)0xffffffff;
  local_b0[0] = '\0';
  pcVar17 = pcVar19 + 2;
  pcVar19 = pcVar19 + 1;
LAB_089b79bc:
  iVar10 = (int)*pcVar19;
  uVar20 = iVar10 - 0x20;
  bVar3 = uVar20 < 0x59;
  param_3 = pcVar17;
LAB_089b79cc:
  if (!bVar3) {
switchD_089b79e4_caseD_89b8390:
    if (iVar10 != 0) {
      local_a8 = (undefined)iVar10;
      uVar13 = *(ushort *)(param_2 + 3);
      local_b0[0] = '\0';
      local_ac = (int *)0x1;
      local_50 = uVar23 & 4;
      uVar15 = uVar13 & 0x200;
      bVar2 = false;
      piVar25 = (int *)&local_a8;
      local_58 = uVar23;
      goto LAB_089b83c8;
    }
    uVar13 = *(ushort *)(param_2 + 3);
    goto LAB_089b8c70;
  }
  pcVar19 = param_3;
  switch((&switchD_089b79e4::switchdataD_08a9ff48)[uVar20]) {
  case (undefined *)0x89b79ec:
    goto switchD_089b79e4_caseD_89b79ec;
  case (undefined *)0x89b7a04:
    bVar4 = true;
    pcVar17 = param_3 + 1;
    goto LAB_089b79bc;
  case (undefined *)0x89b7a10:
    bVar5 = true;
    pcVar17 = param_3 + 1;
    goto LAB_089b79bc;
  case (undefined *)0x89b7a1c:
    pcVar17 = param_3 + 1;
    ppiVar14 = local_64 + 1;
    piVar26 = *local_64;
    local_64 = ppiVar14;
    if (-1 < (int)piVar26) goto LAB_089b79bc;
    piVar26 = (int *)-(int)piVar26;
    break;
  case (undefined *)0x89b7a40:
    break;
  case (undefined *)0x89b7a50:
    local_b0[0] = '+';
    pcVar17 = param_3 + 1;
    goto LAB_089b79bc;
  case (undefined *)0x89b7a60:
    iVar10 = (int)*param_3;
    pcVar19 = param_3 + 1;
    if (iVar10 == 0x2a) {
      pcVar17 = param_3 + 2;
      ppiVar14 = local_64 + 1;
      piVar24 = *local_64;
      local_64 = ppiVar14;
      if ((int)piVar24 < 0) {
        piVar24 = (int *)0xffffffff;
      }
      goto LAB_089b79bc;
    }
    piVar24 = (int *)0x0;
    param_3 = pcVar19;
    while (iVar10 - 0x30U < 10) {
      cVar9 = *param_3;
      param_3 = param_3 + 1;
      piVar24 = (int *)((int)piVar24 * 10 + iVar10 + -0x30);
      iVar10 = (int)cVar9;
    }
    uVar20 = iVar10 - 0x20;
    bVar3 = uVar20 < 0x59;
    if ((int)piVar24 < 0) {
      piVar24 = (int *)0xffffffff;
    }
    goto LAB_089b79cc;
  case (undefined *)0x89b7aec:
    uVar23 = uVar23 | 0x80;
    pcVar17 = param_3 + 1;
    goto LAB_089b79bc;
  case (undefined *)0x89b7af8:
    goto switchD_089b79e4_caseD_89b7af8;
  case (undefined *)0x89b7b38:
    bVar7 = true;
    pcVar17 = param_3 + 1;
    goto LAB_089b79bc;
  case (undefined *)0x89b7b44:
    if (*param_3 == 'l') {
      bVar6 = true;
      pcVar17 = param_3 + 2;
      pcVar19 = param_3 + 1;
    }
    else {
      bVar2 = true;
      pcVar17 = param_3 + 1;
    }
    goto LAB_089b79bc;
  case (undefined *)0x89b7b6c:
    goto switchD_089b79e4_caseD_89b7b6c;
  case (undefined *)0x89b7b78:
    piVar25 = (int *)&local_a8;
    local_a8 = SUB41(*local_64,0);
    uVar13 = *(ushort *)(param_2 + 3);
    local_b0[0] = '\0';
    local_ac = (int *)0x1;
    local_50 = uVar23 & 4;
    uVar15 = uVar13 & 0x200;
    bVar2 = false;
    local_64 = local_64 + 1;
    local_58 = uVar23;
    goto LAB_089b83c8;
  case (undefined *)0x89b7bc0:
    bVar2 = true;
    goto LAB_089b7be8;
  case (undefined *)0x89b7bd8:
LAB_089b7be8:
    if (bVar6) {
      ppiVar14 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar14 + 2;
      piVar12 = ppiVar14[1];
      piVar11 = *ppiVar14;
    }
    else {
      if (bVar2) {
        piVar11 = *local_64;
      }
      else if (bVar7) {
        piVar11 = (int *)(int)(short)*local_64;
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)((int)piVar11 >> 0x1f);
    }
    bVar2 = piVar11 != (int *)0x0;
    if ((int)piVar12 < 0) {
      piVar11 = (int *)-(int)piVar11;
      piVar12 = (int *)(-(uint)bVar2 - (int)piVar12);
      local_b0[0] = '-';
    }
    local_68 = 1;
LAB_089b80b0:
    uVar27 = CONCAT44(piVar12,piVar11);
    if (-1 < (int)piVar24) {
      uVar23 = uVar23 & 0xffffff7f;
    }
    local_50 = uVar23 & 4;
    piVar25 = (int *)(local_82 + 2);
    local_58 = uVar23;
    local_4c = piVar24;
    if (((piVar11 == (int *)0x0) && (piVar12 == (int *)0x0)) && (piVar24 == (int *)0x0))
    goto LAB_089b8328;
    if (local_68 == 0) {
      uVar23 = (uint)piVar11 & 7;
      do {
        do {
          piVar22 = piVar25;
          piVar25 = (int *)((int)piVar22 + -1);
          *(char *)piVar25 = (char)uVar23 + '0';
          uVar23 = (int)piVar12 << 0x1d;
          uVar20 = (uint)piVar11 >> 3;
          piVar12 = (int *)((uint)piVar12 >> 3);
          piVar11 = (int *)(uVar23 | uVar20);
          uVar23 = uVar20 & 7;
        } while (piVar11 != (int *)0x0);
        uVar23 = uVar20 & 7;
      } while (piVar12 != (int *)0x0);
      if ((bVar4) && (*(char *)piVar25 != '0')) {
        piVar25 = (int *)((int)piVar22 + -2);
        *(char *)piVar25 = '0';
      }
    }
    else if (local_68 < 2) {
      if (piVar12 != (int *)0x0 || (int *)0x9 < piVar11) {
        do {
          local_40._4_4_ = (undefined4)((ulonglong)uVar27 >> 0x20);
          local_34 = 0;
          local_38 = (int *)0xa;
          cVar9 = FUN_08a0dd64((int)uVar27,local_40._4_4_,10,0);
          local_40 = uVar27;
          piVar25 = (int *)((int)piVar25 + -1);
          *(char *)piVar25 = cVar9 + '0';
          uVar27 = FUN_08a0d7f0((undefined4)local_40,local_40._4_4_,10,0);
          uVar23 = (uint)((ulonglong)uVar27 >> 0x20);
          piVar11 = (int *)uVar27;
        } while ((uVar23 != local_34 || local_38 <= piVar11) && local_34 <= uVar23);
      }
      piVar25 = (int *)((int)piVar25 + -1);
      *(char *)piVar25 = (char)piVar11 + '0';
    }
    else {
      if (2 < local_68) {
        local_ac = (int *)strlen(local_78);
        uVar13 = *(ushort *)(param_2 + 3);
        uVar15 = uVar13 & 0x200;
        bVar2 = (int)local_ac < (int)piVar24;
        piVar25 = piVar22;
        goto LAB_089b83c8;
      }
      uVar23 = (uint)piVar11 & 0xf;
      do {
        do {
          piVar25 = (int *)((int)piVar25 + -1);
          *(char *)piVar25 = local_54[uVar23];
          uVar23 = (int)piVar12 << 0x1c;
          uVar20 = (uint)piVar11 >> 4;
          piVar12 = (int *)((uint)piVar12 >> 4);
          piVar11 = (int *)(uVar23 | uVar20);
          uVar23 = uVar20 & 0xf;
        } while (piVar11 != (int *)0x0);
        uVar23 = uVar20 & 0xf;
      } while (piVar12 != (int *)0x0);
    }
LAB_089b8328:
    if ((local_68 == 1) && (bVar5)) {
      piVar25 = (int *)FUN_089b74b4(&local_a8,piVar25,local_82 + 2,&local_ac);
      uVar13 = *(ushort *)(param_2 + 3);
      uVar15 = uVar13 & 0x200;
      bVar2 = (int)local_ac < (int)piVar24;
    }
    else {
      local_ac = (int *)(local_82 + 2 + -(int)piVar25);
      uVar13 = *(ushort *)(param_2 + 3);
      uVar15 = uVar13 & 0x200;
      bVar2 = (int)local_ac < (int)piVar24;
    }
LAB_089b83c8:
    pcVar19 = local_60;
    piVar22 = local_4c;
    if (!bVar2) {
      piVar22 = local_ac;
    }
    if (local_b0[0] == '\0') {
      if (bVar8) {
        piVar22 = (int *)((int)piVar22 + 2);
      }
    }
    else {
      piVar22 = (int *)((int)piVar22 + 1);
    }
    if ((local_58 == 0) && (iVar21 = (int)piVar26 - (int)piVar22, 0 < iVar21)) {
      for (; 0x10 < iVar21; iVar21 = iVar21 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
            }
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          else {
            sVar1 = *(short *)((int)param_2 + 0xe);
          }
          FUN_089b7680((int)sVar1,local_5c,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar15 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,local_5c,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar15 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,local_5c,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar13 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar16 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar16 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar16 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b7680(iVar16,local_5c,iVar21,0);
        uVar13 = *(ushort *)(param_2 + 3);
        uVar15 = uVar13 & 0x200;
      }
      else if (iVar21 < (int)param_2[2]) {
        memcpy_jak(*param_2,local_5c,iVar21);
        *param_2 = *param_2 + iVar21;
        uVar13 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -iVar21;
        uVar15 = uVar13 & 0x200;
      }
      else {
        memcpy_jak(*param_2,local_5c);
        uVar13 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + (int)param_2[2];
        param_2[2] = (char *)0x0;
        uVar15 = uVar13 & 0x200;
      }
    }
    if (local_b0[0] == '\0') {
      if (bVar8) {
        local_80._0_1_ = 0x30;
        local_80._1_1_ = (undefined)iVar10;
        if (uVar15 == 0) {
          iVar10 = (int)*(short *)((int)param_2 + 0xe);
          if ((iVar10 == 0) && (uVar13 == 0)) {
            *(undefined2 *)((int)param_2 + 0xe) = 1;
            iVar10 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b7680(iVar10,local_82 + 2,2,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar15 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 3) {
          memcpy_jak(*param_2,local_82 + 2);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar15 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,local_82 + 2,2);
          *param_2 = *param_2 + 2;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -2;
          uVar15 = uVar13 & 0x200;
        }
      }
    }
    else if (uVar15 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar13 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_089b7680(iVar10,local_b0,1,0);
      uVar13 = *(ushort *)(param_2 + 3);
      uVar15 = uVar13 & 0x200;
    }
    else if ((int)param_2[2] < 2) {
      memcpy_jak(*param_2,local_b0);
      uVar13 = *(ushort *)(param_2 + 3);
      *param_2 = *param_2 + (int)param_2[2];
      param_2[2] = (char *)0x0;
      uVar15 = uVar13 & 0x200;
    }
    else {
      memcpy_jak(*param_2,local_b0,1);
      *param_2 = *param_2 + 1;
      uVar13 = *(ushort *)(param_2 + 3);
      param_2[2] = param_2[2] + -1;
      uVar15 = uVar13 & 0x200;
    }
    iVar10 = (int)piVar26 - (int)piVar22;
    if ((local_58 == 0x80) && (0 < iVar10)) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar21 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b7680(iVar21,pcVar19,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar15 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,pcVar19,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar15 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,pcVar19,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar13 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar21 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar21 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b7680(iVar21,pcVar19,iVar10,0);
        uVar13 = *(ushort *)(param_2 + 3);
        uVar15 = uVar13 & 0x200;
      }
      else if (iVar10 < (int)param_2[2]) {
        memcpy_jak(*param_2,pcVar19,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar13 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -iVar10;
        uVar15 = uVar13 & 0x200;
      }
      else {
        memcpy_jak(*param_2,pcVar19);
        uVar13 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + (int)param_2[2];
        param_2[2] = (char *)0x0;
        uVar15 = uVar13 & 0x200;
      }
    }
    iVar10 = (int)local_4c - (int)local_ac;
    if (0 < iVar10) {
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar21 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b7680(iVar21,pcVar19,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar15 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,pcVar19,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar15 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,pcVar19,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar13 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar21 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar21 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b7680(iVar21,pcVar19,iVar10,0);
        uVar13 = *(ushort *)(param_2 + 3);
        uVar15 = uVar13 & 0x200;
      }
      else if (iVar10 < (int)param_2[2]) {
        memcpy_jak(*param_2,pcVar19,iVar10);
        *param_2 = *param_2 + iVar10;
        uVar13 = *(ushort *)(param_2 + 3);
        param_2[2] = param_2[2] + -iVar10;
        uVar15 = uVar13 & 0x200;
      }
      else {
        memcpy_jak(*param_2,pcVar19);
        uVar13 = *(ushort *)(param_2 + 3);
        *param_2 = *param_2 + (int)param_2[2];
        param_2[2] = (char *)0x0;
        uVar15 = uVar13 & 0x200;
      }
    }
    if (uVar15 == 0) {
      iVar10 = (int)*(short *)((int)param_2 + 0xe);
      if ((iVar10 == 0) && (uVar13 == 0)) {
        *(undefined2 *)((int)param_2 + 0xe) = 1;
        iVar10 = (int)*(short *)((int)param_2 + 0xe);
      }
      FUN_089b7680(iVar10,piVar25,local_ac,0);
    }
    else if ((int)local_ac < (int)param_2[2]) {
      memcpy_jak(*param_2,piVar25,local_ac);
      *param_2 = *param_2 + (int)local_ac;
      param_2[2] = param_2[2] + -(int)local_ac;
    }
    else {
      memcpy_jak(*param_2,piVar25,param_2[2]);
      pcVar19 = param_2[2];
      param_2[2] = (char *)0x0;
      *param_2 = *param_2 + (int)pcVar19;
    }
    pcVar19 = local_5c;
    if ((local_50 != 0) && (iVar10 = (int)piVar26 - (int)piVar22, 0 < iVar10)) {
      uVar13 = *(ushort *)(param_2 + 3);
      uVar15 = uVar13 & 0x200;
      for (; 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
        if (uVar15 == 0) {
          if (*(short *)((int)param_2 + 0xe) == 0) {
            if (uVar13 == 0) {
              *(undefined2 *)((int)param_2 + 0xe) = 1;
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
            else {
              iVar21 = (int)*(short *)((int)param_2 + 0xe);
            }
          }
          else {
            iVar21 = (int)*(short *)((int)param_2 + 0xe);
          }
          FUN_089b7680(iVar21,pcVar19,0x10,0);
          uVar13 = *(ushort *)(param_2 + 3);
          uVar15 = uVar13 & 0x200;
        }
        else if ((int)param_2[2] < 0x11) {
          memcpy_jak(*param_2,pcVar19,param_2[2]);
          uVar13 = *(ushort *)(param_2 + 3);
          *param_2 = *param_2 + (int)param_2[2];
          param_2[2] = (char *)0x0;
          uVar15 = uVar13 & 0x200;
        }
        else {
          memcpy_jak(*param_2,pcVar19,0x10);
          *param_2 = *param_2 + 0x10;
          uVar13 = *(ushort *)(param_2 + 3);
          param_2[2] = param_2[2] + -0x10;
          uVar15 = uVar13 & 0x200;
        }
      }
      if (uVar15 == 0) {
        iVar21 = (int)*(short *)((int)param_2 + 0xe);
        if ((iVar21 == 0) && (uVar13 == 0)) {
          *(undefined2 *)((int)param_2 + 0xe) = 1;
          iVar21 = (int)*(short *)((int)param_2 + 0xe);
        }
        FUN_089b7680(iVar21,pcVar19,iVar10,0);
      }
      else if (iVar10 < (int)param_2[2]) {
        memcpy_jak(*param_2,pcVar19,iVar10);
        *param_2 = *param_2 + iVar10;
        param_2[2] = param_2[2] + -iVar10;
      }
      else {
        memcpy_jak(*param_2,pcVar19,param_2[2]);
        pcVar19 = param_2[2];
        param_2[2] = (char *)0x0;
        *param_2 = *param_2 + (int)pcVar19;
      }
    }
    if ((int)piVar22 < (int)piVar26) {
      piVar22 = piVar26;
    }
    local_48 = local_48 + (int)piVar22;
    goto LAB_089b7868;
  case (undefined *)0x89b7cc0:
    goto switchD_089b79e4_caseD_89b7cc0;
  case (undefined *)0x89b7d48:
    bVar2 = true;
    goto LAB_089b7d70;
  case (undefined *)0x89b7d60:
LAB_089b7d70:
    if (bVar6) {
      ppiVar14 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar14 + 2;
      piVar12 = ppiVar14[1];
      piVar11 = *ppiVar14;
    }
    else {
      if (bVar2) {
        piVar11 = *local_64;
      }
      else if (bVar7) {
        piVar11 = (int *)((uint)*local_64 & 0xffff);
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)0x0;
    }
    local_68 = 0;
LAB_089b80ac:
    local_b0[0] = '\0';
    goto LAB_089b80b0;
  case (undefined *)0x89b7e04:
    piVar11 = *local_64;
    local_54 = local_6c;
    piVar12 = (int *)0x0;
    local_68 = 2;
    bVar8 = true;
    iVar10 = 0x78;
    local_64 = local_64 + 1;
    goto LAB_089b80ac;
  case (undefined *)0x89b7e3c:
    local_50 = uVar23 & 4;
    piVar25 = *local_64;
    if (*local_64 == (int *)0x0) {
      piVar25 = (int *)local_70;
    }
    if ((int)piVar24 < 0) {
      local_64 = local_64 + 1;
      local_58 = uVar23;
      local_ac = (int *)strlen(piVar25);
      uVar13 = *(ushort *)(param_2 + 3);
      uVar15 = uVar13 & 0x200;
      bVar2 = (int)local_ac < 0;
    }
    else {
      local_64 = local_64 + 1;
      local_58 = uVar23;
      iVar21 = memchr(piVar25,0,piVar24);
      uVar13 = *(ushort *)(param_2 + 3);
      uVar15 = uVar13 & 0x200;
      if (iVar21 == 0) {
        bVar2 = (int)piVar24 < 0;
        local_ac = piVar24;
      }
      else {
        if ((int)(int *)(iVar21 - (int)piVar25) <= (int)piVar24) {
          piVar24 = (int *)(iVar21 - (int)piVar25);
        }
        bVar2 = (int)piVar24 < 0;
        local_ac = piVar24;
      }
    }
    local_b0[0] = '\0';
    goto LAB_089b83c8;
  case (undefined *)0x89b7ef0:
    bVar2 = true;
    goto LAB_089b7f20;
  case (undefined *)0x89b7f0c:
LAB_089b7f20:
    if (bVar6) {
      ppiVar14 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar14 + 2;
      piVar12 = ppiVar14[1];
      piVar11 = *ppiVar14;
    }
    else {
      if (bVar2) {
        piVar11 = *local_64;
      }
      else if (bVar7) {
        piVar11 = (int *)((uint)*local_64 & 0xffff);
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)0x0;
    }
    local_68 = 1;
    goto LAB_089b80ac;
  case (undefined *)0x89b7fb8:
    local_54 = local_74;
    goto LAB_089b7fec;
  case (undefined *)0x89b7fd4:
    local_54 = local_6c;
LAB_089b7fec:
    if (bVar6) {
      ppiVar14 = (int **)((int)local_64 + ((uint)local_64 & 7));
      local_64 = ppiVar14 + 2;
      piVar12 = ppiVar14[1];
      piVar11 = *ppiVar14;
    }
    else {
      if (bVar2) {
        piVar11 = *local_64;
      }
      else if (bVar7) {
        piVar11 = (int *)((uint)*local_64 & 0xffff);
      }
      else {
        piVar11 = *local_64;
      }
      local_64 = local_64 + 1;
      piVar12 = (int *)0x0;
    }
    local_68 = 2;
    if ((bVar4) && ((piVar11 != (int *)0x0 || (piVar12 != (int *)0x0)))) {
      bVar8 = true;
    }
    goto LAB_089b80ac;
  case (undefined *)0x89b8390:
    goto switchD_089b79e4_caseD_89b8390;
  }
  pcVar17 = param_3 + 1;
  uVar23 = uVar23 | 4;
  goto LAB_089b79bc;
switchD_089b79e4_caseD_89b7b6c:
  bVar6 = true;
  pcVar17 = param_3 + 1;
  goto LAB_089b79bc;
switchD_089b79e4_caseD_89b7cc0:
  if (bVar6) {
    ppcVar18 = (char **)*local_64;
    ppcVar18[1] = (char *)((int)local_48 >> 0x1f);
    *ppcVar18 = local_48;
    local_64 = local_64 + 1;
  }
  else if (bVar2) {
    **local_64 = (int)local_48;
    local_64 = local_64 + 1;
  }
  else if (bVar7) {
    *(short *)*local_64 = (short)local_48;
    local_64 = local_64 + 1;
  }
  else {
    **local_64 = (int)local_48;
    local_64 = local_64 + 1;
  }
  goto LAB_089b7868;
switchD_089b79e4_caseD_89b7af8:
  piVar26 = (int *)0x0;
  do {
    iVar21 = (int)piVar26 * 10 + iVar10;
    iVar10 = (int)*param_3;
    param_3 = param_3 + 1;
    piVar26 = (int *)(iVar21 + -0x30);
  } while (iVar10 - 0x30U < 10);
  uVar20 = iVar10 - 0x20;
  bVar3 = uVar20 < 0x59;
  goto LAB_089b79cc;
switchD_089b79e4_caseD_89b79ec:
  pcVar17 = param_3 + 1;
  if (local_b0[0] == '\0') {
    local_b0[0] = ' ';
  }
  goto LAB_089b79bc;
}

