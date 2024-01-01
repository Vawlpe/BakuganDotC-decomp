#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886bfa0(int param_1)

{
  char cVar1;
  short sVar2;
  undefined auVar3 [16];
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  char *pcVar17;
  undefined4 in_V7C;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined auStack_60 [24];
  int local_48;
  int local_44;
  undefined local_40;
  int local_3c;
  int local_38;
  
  iVar16 = *(int *)(*(int *)(param_1 + 0x5ac) + *(int *)(param_1 + 0x5b4) * 4);
  local_40 = *(undefined *)(param_1 + 0x5e3);
  if (*(int *)(param_1 + 0x5b8) != -1) {
    iVar16 = FUN_0886ac78(param_1);
  }
  iVar7 = FUN_0884b248();
  if (iVar7 != 0) {
    FUN_0884b268();
    uVar8 = _DONE_Get_DAT_08AAC9E0();
    iVar7 = FUN_0880d0ac(uVar8,2);
    if (iVar7 == 0) {
      return 0;
    }
  }
  if (iVar16 == 0) {
    return 0;
  }
  local_48 = *(int *)(param_1 + 0x5c8);
  pcVar17 = (char *)(iVar16 + 0xc);
  iVar16 = FUN_089df4b8(param_1);
  cVar6 = *pcVar17;
  if (*(char *)(param_1 + 0x5e0) != '\0') {
    iVar16 = iVar16 + -2;
  }
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  uVar8 = 0;
  if (cVar6 != '\0') {
    local_44 = param_1 + 0x250;
    do {
      uVar13 = (uint)(byte)pcVar17[1];
      uVar14 = (uint)(byte)pcVar17[2];
      uVar12 = *(uint *)(param_1 + 0x144);
      if (*(char *)(param_1 + 0x458) == '\0') {
LAB_0886c14c:
        cVar1 = *(char *)(param_1 + 0x45e);
      }
      else {
        if ((uVar12 & 0x100) == 0) {
          uVar13 = (uint)((float)uVar13 * 0.7142857);
          uVar14 = (uint)((float)uVar14 * 0.7142857);
          goto LAB_0886c14c;
        }
        cVar1 = *(char *)(param_1 + 0x45e);
      }
      if ((cVar1 != '\0') && ((uVar12 & 0x100) == 0)) {
        uVar13 = (uint)((float)uVar13 * 1.538462);
        uVar14 = (uint)((float)uVar14 * 1.538462);
      }
      if ((int)uVar13 < 1) {
        uVar13 = 1;
      }
      if ((int)uVar14 < 1) {
        uVar14 = 1;
      }
      bVar15 = (int)uVar13 <= local_48 && local_48 <= (int)uVar14;
      bVar4 = false;
      if (((cVar6 == '\x03') || (cVar6 == '\x06')) || (cVar6 == '\v')) {
        bVar4 = true;
      }
      if ((uVar12 & 0x2000000) == 0) {
        bVar11 = false;
        bVar5 = bVar15;
        if ((int)uVar13 <= iVar16) {
          if ((int)uVar14 < iVar16) {
            bVar11 = false;
          }
          else {
            if (*(char *)(param_1 + 0x5e0) == '\0') {
              iVar7 = *(int *)(param_1 + 0x5bc);
            }
            else {
              if (bVar4) {
                bVar11 = true;
                goto LAB_0886c250;
              }
              iVar7 = *(int *)(param_1 + 0x5bc);
            }
            if (iVar7 == 2) {
              bVar11 = true;
            }
            else {
              bVar11 = false;
              if (iVar7 == 1) {
                bVar11 = true;
              }
            }
          }
        }
      }
      else {
        bVar11 = false;
        bVar5 = false;
      }
LAB_0886c250:
      switch(cVar6) {
      case '\x01':
        if (bVar11) {
          uVar8 = FUN_0886ae80(param_1,pcVar17);
        }
        break;
      case '\x02':
        if (bVar5) {
          uVar8 = FUN_0886ae80(param_1,pcVar17);
        }
        break;
      case '\x03':
        if ((*(char *)(param_1 + 0x5e0) != '\0') &&
           ((bVar11 || (*(char *)(param_1 + 0x5e1) != '\0')))) {
          uVar8 = FUN_0886ae80(param_1,pcVar17);
        }
        break;
      case '\x04':
        if (((int)uVar13 <= *(int *)(param_1 + 0x5cc)) && (*(int *)(param_1 + 0x5cc) <= (int)uVar14)
           ) {
          uVar8 = FUN_0886ae80(param_1,pcVar17);
        }
        break;
      case '\x05':
switchD_0886c270_caseD_5:
        if ((bVar15) &&
           (((iVar7 = *(int *)(param_1 + 0x140), iVar7 == 0xb || (iVar7 == 9)) || (iVar7 == 7)))) {
          FUN_089c1f8c(*(undefined4 *)(param_1 + 300),*(undefined4 *)(pcVar17 + 4),0,0);
        }
        break;
      case '\x06':
        bVar15 = true;
        if (*(char *)(param_1 + 0x5e0) != '\0') goto switchD_0886c270_caseD_5;
        break;
      case '\a':
        if (((int)uVar13 <= *(int *)(param_1 + 0x5cc)) && (*(int *)(param_1 + 0x5cc) <= (int)uVar14)
           ) {
          FUN_089c1f8c(*(undefined4 *)(param_1 + 300),*(undefined4 *)(pcVar17 + 4),0,0);
        }
        break;
      case '\b':
        if (bVar15) {
          uVar9 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
          auVar3 = vrot_q(uVar9,1,0,2,0);
          local_70 = auVar3._0_4_;
          uStack_6c = auVar3._4_4_;
          uStack_68 = auVar3._8_4_;
          uStack_64 = auVar3._12_4_;
          iVar7 = (int)*(short *)(pcVar17 + 4);
          if (iVar7 == 0x8e) {
            iVar7 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
            iVar7 = iVar7 + 0x8e;
            sVar2 = *(short *)(pcVar17 + 6);
          }
          else {
            sVar2 = *(short *)(pcVar17 + 6);
          }
          uVar9 = DAT_08ac5c70;
          if (sVar2 == 0x7f) {
            iVar7 = FUN_088244ac(DAT_08ac5c70,iVar7,local_44,&local_70);
            *(int *)(iVar7 + 0x1fc) = param_1;
            if (param_1 != 0) {
              *(undefined4 *)(iVar7 + 0x200) = *(undefined4 *)(param_1 + 0xc);
            }
          }
          else {
            FUN_089deeb0(param_1,auStack_60,(int)sVar2);
            iVar7 = FUN_08824024(uVar9,iVar7,auStack_60,&local_70);
            *(int *)(iVar7 + 0x1fc) = param_1;
            if (param_1 != 0) {
              *(undefined4 *)(iVar7 + 0x200) = *(undefined4 *)(param_1 + 0xc);
            }
          }
        }
        break;
      case '\t':
        if (bVar15) {
          (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                    (*(undefined4 *)(pcVar17 + 8),
                     param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
        }
        break;
      case '\n':
switchD_0886c270_caseD_a:
        if ((bVar5) && (*(char *)(param_1 + 0x5e3) == '\0')) {
          local_38 = (int)*(short *)(pcVar17 + 4);
          local_40 = 0;
          if ((*(char *)(param_1 + 0x464) != '\0') && (local_38 == 1)) {
            local_38 = 0xb;
          }
          local_3c = 0;
          FUN_089d8634();
          uVar9 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar10 = FUN_089d7d74(0x160,0,0);
          FUN_089d816c(uVar9);
          FUN_089d866c();
          iVar7 = local_3c;
          if (iVar10 != 0) {
            FUN_08876d00(iVar10,param_1,local_38);
            iVar7 = iVar10;
          }
          iVar10 = FUN_08860344(param_1);
          if (iVar10 == 0) {
            uVar9 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
            auVar3 = vrot_q(uVar9,1,0,2,0);
            local_80 = auVar3._0_4_;
            uStack_7c = auVar3._4_4_;
            uStack_78 = auVar3._8_4_;
            uStack_74 = auVar3._12_4_;
            FUN_08877904(iVar7,0,&local_80,pcVar17);
          }
          else {
            FUN_08877904(iVar7,0,0,pcVar17);
          }
        }
        break;
      case '\v':
        bVar5 = true;
        if (*(char *)(param_1 + 0x5e0) != '\0') goto switchD_0886c270_caseD_a;
        break;
      case '\f':
        if (((int)uVar13 <= *(int *)(param_1 + 0x5cc)) && (*(int *)(param_1 + 0x5cc) <= (int)uVar14)
           ) {
          *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(pcVar17 + 8);
        }
      }
      pcVar17 = pcVar17 + 0x14;
      cVar6 = *pcVar17;
    } while (cVar6 != '\0');
  }
  *(undefined *)(param_1 + 0x5e3) = local_40;
  return uVar8;
}

