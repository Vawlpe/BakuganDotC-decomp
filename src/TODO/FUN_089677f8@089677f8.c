#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089677f8(int param_1)

{
  undefined uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  undefined auStack_60 [4];
  uint local_5c;
  undefined auStack_58 [32];
  uint local_38 [6];
  
  FUN_0895ac6c();
  bVar23 = true;
  iVar17 = FUN_0881b22c();
  if (iVar17 == 0) {
LAB_0896795c:
    if (!bVar23) {
      return;
    }
  }
  else {
    bVar23 = false;
    iVar17 = FUN_0881b22c();
    if (iVar17 == 0) goto LAB_0896795c;
    switch(*(undefined4 *)(param_1 + 0x2c)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x17:
    case 0x19:
      bVar23 = true;
    }
    if (!bVar23) {
      iVar17 = FUN_089cf8ec(0);
      iVar18 = FUN_089d003c();
      if (iVar18 != 0) {
        bVar23 = true;
      }
      if (!bVar23) {
        if (iVar17 != 0) {
          uVar19 = DONE_GetPtr_DAT_08AB0300();
          iVar18 = FUN_0881b654(uVar19);
          if (iVar18 != 0) {
            bVar3 = *(int *)(param_1 + 0x52a0) == 0;
            iVar18 = FUN_089d0bcc(iVar17,bVar3,auStack_60);
            if ((iVar18 != 0) && (bVar23 = true, (local_5c & 0x2000000) != 0)) {
              FUN_089626cc(param_1,bVar3,auStack_58);
              bVar23 = true;
            }
          }
          memset_jak(auStack_60,0,0x28);
          local_5c = 0x2000000;
          iVar18 = param_1 + *(int *)(param_1 + 0x52a0) * 0x28;
          bVar2 = *(byte *)(param_1 + 0x4cd8);
          *(undefined4 *)(iVar18 + 0x5210) = *(undefined4 *)(param_1 + 0x2c);
          *(uint *)(iVar18 + 0x5214) = (uint)bVar2;
          memcpy_jak(auStack_58,iVar18 + 0x5200,0x18);
          FUN_089d0a74(iVar17,auStack_60);
        }
        goto LAB_0896795c;
      }
    }
  }
  iVar17 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar17 == 0) {
    uVar19 = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    uVar19 = DONE_Get_DAT_08AAC9E0();
    iVar17 = FUN_0880d7e0(uVar19,0x80);
    if (iVar17 == 0) {
      uVar19 = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      iVar17 = *(int *)(param_1 + 0x2c);
      if (((iVar17 == 0x18) || (iVar17 == 0x10)) || (iVar17 == 5)) {
        iVar17 = FUN_08816a90();
        if (iVar17 == 0) {
          FUN_08816868();
        }
        iVar17 = FUN_08816aac();
        *(undefined4 *)(iVar17 + 0x40) = 1;
        uVar19 = FUN_08816aac();
        FUN_08816c28(uVar19,0,0x1d);
        *(undefined4 *)(param_1 + 0x2c) = 0x19;
        uVar19 = *(undefined4 *)(param_1 + 0x2c);
      }
      else {
        uVar19 = *(undefined4 *)(param_1 + 0x2c);
      }
    }
  }
  switch(uVar19) {
  case 0:
    iVar17 = FUN_0890a1c8(param_1,0xffffffff,1);
    if (iVar17 != 0) {
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x43960000,0,0,param_1,"main_light.fab",1,1);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089a4e08(0,**(undefined4 **)(param_1 + 0x1c));
      FUN_0895cb5c(param_1);
      FUN_0895cce4(param_1,1,1);
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    break;
  case 1:
    cVar4 = FUN_089a97ec(0);
    cVar5 = FUN_0895cbd0(param_1);
    uVar19 = 2;
    if ((char)(cVar4 + cVar5) == '\x02') {
      FUN_0895cc90(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar19;
    }
    break;
  case 2:
    cVar4 = FUN_0895ccb0(param_1);
    if (cVar4 == '\x01') {
      FUN_0895cd84(param_1,0);
      FUN_0895cd18(param_1,0);
      FUN_0895cfe8(param_1,0);
      FUN_0895e238(param_1,0);
      FUN_0895ead8(param_1,0);
      FUN_08962194(param_1,0);
      FUN_0895d248(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 3:
    cVar4 = FUN_08962784(param_1,0);
    cVar5 = FUN_0895cea8(param_1,0);
    cVar6 = FUN_0895d108(param_1,0);
    cVar7 = FUN_0895ebf8(param_1,0);
    cVar8 = FUN_0896234c(param_1,0);
    if ((char)(cVar4 + cVar5 + cVar6 + cVar7 + cVar8) == '\x05') {
      FUN_0895d29c(param_1,0);
      FUN_0895d4c8(param_1,0);
      FUN_0895d6cc(param_1,0);
      FUN_0895d958(param_1,0);
      FUN_08962a58(param_1,0);
      uVar21 = 0;
      if ('\0' < *(char *)(param_1 + 0x4cda)) {
        uVar22 = 0;
        do {
          FUN_0895fb78(param_1,1,uVar22);
          if (uVar21 != *(uint *)(param_1 + 0x52a0)) {
            FUN_0895ff58(param_1,uVar22,0);
          }
          FUN_089625d8(param_1,uVar21,100);
          iVar17 = *(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x5174) + uVar21) * 4)
          ;
          uVar21 = uVar21 + 1;
          *(uint *)(iVar17 + 0xd0) = *(uint *)(iVar17 + 0xd0) & 0xfffffffe;
          uVar22 = uVar21 & 0xff;
        } while ((int)uVar21 < (int)*(char *)(param_1 + 0x4cda));
      }
      FUN_0895ff58(param_1,*(uint *)(param_1 + 0x52a0) & 0xff,1);
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 4:
    cVar4 = FUN_0895d384(param_1,0);
    cVar5 = FUN_0895d598(param_1,0);
    cVar6 = FUN_0895d7c0(param_1,0);
    cVar7 = FUN_0895de04(param_1,0);
    cVar8 = FUN_0895f408(param_1,0);
    if ((char)(cVar4 + cVar5 + cVar6 + cVar7 + cVar8) == '\x05') {
      FUN_0895ee94(param_1,1);
      FUN_0895730c(param_1,0);
      *(undefined *)(param_1 + 0x75) = 0;
      *(char *)(param_1 + 0x4cdb) = (char)*(undefined4 *)(param_1 + 0x52a0);
      FUN_0895e1bc(param_1,0,0);
      FUN_0895e1bc(param_1,1,0);
      FUN_0895ae70(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 5;
      *(undefined *)(param_1 + 0x4cd8) = 0;
    }
    break;
  case 5:
    FUN_08962fa4(param_1);
    FUN_0895e844(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                 param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
    if (*(char *)(param_1 + 0x4cd8) == '\x01') {
      iVar17 = DONE_NotZero_DAT_08AC5874();
      if (iVar17 != 0) {
        uVar19 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar19,2,0,0);
      }
      FUN_0895ae70(param_1);
      FUN_0895e314(param_1);
      FUN_0895bcec(param_1,1);
      FUN_0895e1bc(param_1,0,0);
      FUN_0895e1bc(param_1,1,0);
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    else if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
      if (*(int *)(param_1 + (1 - *(int *)(param_1 + 0x52a0)) * 0x28 + 0x5214) == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0x19;
        iVar17 = FUN_08816a90();
        if (iVar17 == 0) {
          FUN_08816868();
        }
        iVar17 = FUN_08816aac();
        *(undefined4 *)(iVar17 + 0x40) = 1;
        uVar19 = FUN_08816aac();
        FUN_08816c28(uVar19,0,0x1e);
        iVar17 = FUN_0881b22c();
        if (iVar17 != 0) {
          uVar19 = DONE_GetPtr_DAT_08AB0300();
          FUN_0881bbd8(uVar19);
        }
      }
      else {
        iVar17 = FUN_0895e740(param_1);
        if (iVar17 == 0) {
          local_38[0] = *(uint *)(param_1 + 0x5200);
          local_38[1] = *(undefined4 *)(param_1 + 0x5228);
          local_38[2] = local_38[0];
          local_38[3] = local_38[1];
          iVar17 = FUN_0895e3bc(param_1);
          if (iVar17 == 0) {
            cVar4 = *(char *)(param_1 + 0x75);
          }
          else {
            iVar17 = DONE_NotZero_DAT_08AC5874();
            if (iVar17 != 0) {
              uVar19 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar19,1,0,0);
            }
            FUN_0895ae70(param_1);
            cVar4 = *(char *)(param_1 + 0x75);
          }
          if (cVar4 == '\0') {
            uVar21 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
            local_38[*(int *)(param_1 + 0x52a0)] = uVar21;
            piVar20 = (int *)DONE_Get_DAT_08AAC9E0();
            uVar21 = *(uint *)(param_1 + 0x52a0);
            uVar24 = local_38[uVar21];
            uVar22 = uVar21 & 0xff;
            if ((int)uVar24 < 0) {
              uVar25 = -(-uVar24 & 7) & 0x1f;
            }
            else {
              uVar25 = uVar24 & 7;
            }
            if (((uint)*(byte *)(*piVar20 +
                                 ((int)(uVar24 + ((uint)((int)uVar24 >> 3) >> 0x1d)) >> 3) + 0x5be)
                & 1 << uVar25) == 0) {
              local_38[uVar21] = 0;
            }
          }
          else {
            uVar22 = *(uint *)(param_1 + 0x52a0);
            local_38[uVar22] = 0;
            uVar22 = uVar22 & 0xff;
          }
          iVar17 = FUN_0895fef0(param_1,uVar22);
          if (iVar17 == 0) {
            iVar17 = *(int *)(param_1 + 0x52a0);
          }
          else {
            iVar17 = DONE_NotZero_DAT_08AC5874();
            if (iVar17 == 0) {
              iVar17 = *(int *)(param_1 + 0x52a0);
            }
            else {
              uVar19 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar19,1,0,0);
              iVar17 = *(int *)(param_1 + 0x52a0);
            }
            FUN_089625d8(param_1,iVar17,*(undefined *)(param_1 + iVar17 + 0x5020));
            iVar17 = *(int *)(param_1 + 0x52a0);
          }
          if (local_38[iVar17 + 2] != local_38[iVar17]) {
            FUN_0896254c(param_1,iVar17,local_38[iVar17]);
          }
        }
        else {
          bVar23 = true;
          if ((*(char *)(param_1 + 0x75) == '\0') &&
             (bVar23 = false, *(int *)(param_1 + *(int *)(param_1 + 0x52a0) * 0x28 + 0x5200) != 0))
          {
            bVar23 = true;
          }
          if (bVar23) {
            if (iVar17 == 1) {
              iVar17 = DONE_NotZero_DAT_08AC5874();
              if (iVar17 != 0) {
                uVar19 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar19,0,0,0);
              }
              FUN_0895ae70(param_1);
              FUN_0895e8b4(param_1);
              *(undefined *)(param_1 + 0x4cd8) = 0;
              *(undefined4 *)(param_1 + 0x2c) = 0xb;
            }
            else {
              iVar17 = DONE_NotZero_DAT_08AC5874();
              if (iVar17 != 0) {
                uVar19 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar19,3,0,0);
              }
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 0x1a;
      iVar17 = FUN_08816a90();
      if (iVar17 == 0) {
        FUN_08816868();
      }
      iVar17 = FUN_08816aac();
      *(undefined4 *)(iVar17 + 0x40) = 0;
      uVar19 = FUN_08816aac();
      FUN_08816c28(uVar19,1,0x1a);
    }
    break;
  default:
    FUN_0895c9d4(param_1);
    FUN_08909a94(param_1);
    DAT_08ac0e70 = 0;
    *(undefined4 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 7:
    iVar17 = FUN_0881b22c();
    if ((iVar17 != 0) && (*(char *)(param_1 + 0x4cd8) == '\0')) {
      uVar19 = DONE_GetPtr_DAT_08AB0300();
      uVar21 = FUN_0881b64c(uVar19);
      uVar19 = DONE_GetPtr_DAT_08AB0300();
      FUN_0881b620(uVar19,uVar21 | 0x1000000);
    }
    FUN_0895eec4(param_1);
    FUN_0895ee94(param_1,0);
    FUN_0895e1bc(param_1,0,0);
    FUN_0895e1bc(param_1,1,0);
    FUN_089a4e08(1,**(undefined4 **)(param_1 + 0x1c));
    FUN_0895cd18(param_1,1);
    FUN_0895cd84(param_1,1);
    FUN_0895cfe8(param_1,1);
    FUN_0895d29c(param_1,1);
    FUN_0895d4c8(param_1,1);
    FUN_0895d6cc(param_1,1);
    FUN_0895d958(param_1,1);
    FUN_0895ead8(param_1,1);
    FUN_0895f050(param_1,1);
    FUN_08962a58(param_1,1);
    FUN_08961764(param_1,1);
    FUN_08962194(param_1,1);
    FUN_0890a274(param_1,1);
    FUN_0890a424(0x43960000,0,0,param_1,"main_finish.fab",1,0);
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 8:
    cVar4 = FUN_089a97ec(1);
    cVar5 = FUN_08962784(param_1,1);
    cVar6 = FUN_0895cea8(param_1,1);
    cVar7 = FUN_0895d108(param_1,1);
    cVar8 = FUN_0895d384(param_1,1);
    cVar9 = FUN_0895d598(param_1,1);
    cVar10 = FUN_0895d7c0(param_1,1);
    cVar11 = FUN_0895de04(param_1,1);
    cVar12 = FUN_0895ebf8(param_1,1);
    cVar13 = FUN_0895f150(param_1,1);
    cVar14 = FUN_0895f408(param_1,1);
    cVar15 = FUN_08961a68(param_1,1);
    cVar16 = FUN_0896234c(param_1,1);
    if ((char)(cVar4 + cVar5 + cVar6 + cVar7 + cVar8 + cVar9 + cVar10 + cVar11 + cVar12 + cVar13 +
               cVar14 + cVar15 + cVar16) == '\r') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 9:
    iVar17 = FUN_0890a1c8(param_1,0xffffffff,1);
    if (iVar17 != 0) {
      iVar17 = FUN_089edb80();
      *(undefined4 *)(iVar17 + 0x30) = 0;
      *(undefined4 *)(iVar17 + 0x34) = 0;
      *(undefined4 *)(iVar17 + 0x38) = 0;
      *(undefined4 *)(iVar17 + 0x3c) = 0;
      iVar17 = FUN_089edb80();
      *(undefined4 *)(iVar17 + 0x40) = 0;
      *(undefined4 *)(iVar17 + 0x44) = 0;
      *(undefined4 *)(iVar17 + 0x48) = 0;
      *(undefined4 *)(iVar17 + 0x4c) = 0x3f800000;
      uVar19 = FUN_089edb80();
      FUN_089edf24(uVar19,8);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 10:
    uVar19 = FUN_089edb80();
    iVar17 = FUN_089edf70(uVar19);
    if (iVar17 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x17;
    }
    break;
  case 0xb:
    iVar17 = FUN_0895e96c(param_1);
    if (iVar17 == 1) {
      if (*(char *)(param_1 + 0x75) == '\0') {
        FUN_0895e314(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
      }
      else {
        FUN_0895ff58(param_1,*(undefined *)(param_1 + 0x4cdb),0);
        FUN_0895eea0(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xc;
      }
    }
    break;
  case 0xc:
    iVar17 = FUN_08963444(param_1);
    if (iVar17 == 1) {
      iVar17 = DONE_NotZero_DAT_08AC5874();
      if (iVar17 != 0) {
        uVar19 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar19,0,0,0);
      }
      FUN_0895ae70(param_1);
      FUN_0895e8b4(param_1);
      *(undefined *)(param_1 + 0x4cd8) = 0;
      uVar19 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
      FUN_0896254c(param_1,*(undefined4 *)(param_1 + 0x52a0),uVar19);
      *(undefined4 *)(param_1 + 0x2c) = 0xb;
    }
    break;
  case 0xd:
    iVar17 = FUN_0895e96c(param_1);
    if (iVar17 == 1) {
      FUN_0895e314(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0x14;
    }
    break;
  case 0xe:
    FUN_08960424(param_1);
    FUN_0895ff58(param_1,*(undefined *)(param_1 + 0x4cdb),0);
    FUN_089637a4(param_1,0,*(undefined *)(param_1 + 0x4cdb));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xf:
    cVar4 = FUN_089641f4(param_1,0,*(undefined *)(param_1 + 0x4cdb));
    if (cVar4 == '\x01') {
      FUN_08964af8(param_1,*(undefined *)(param_1 + 0x4cdb));
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  case 0x10:
    FUN_089604b0(param_1,*(undefined *)(param_1 + 0x4cdb));
    FUN_08960598(param_1,*(undefined *)(param_1 + 0x4cdb));
    FUN_089655e0(param_1,*(undefined *)(param_1 + 0x4cdb));
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                 param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
    cVar4 = FUN_08960b18(param_1);
    if (cVar4 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        if (*(int *)(param_1 + (1 - *(int *)(param_1 + 0x52a0)) * 0x28 + 0x5214) == 1) {
          *(undefined4 *)(param_1 + 0x2c) = 0x19;
          iVar17 = FUN_08816a90();
          if (iVar17 == 0) {
            FUN_08816868();
          }
          iVar17 = FUN_08816aac();
          *(undefined4 *)(iVar17 + 0x40) = 1;
          uVar19 = FUN_08816aac();
          FUN_08816c28(uVar19,0,0x1b);
          iVar17 = FUN_0881b22c();
          if (iVar17 != 0) {
            uVar19 = DONE_GetPtr_DAT_08AB0300();
            FUN_0881bbd8(uVar19);
          }
        }
        else {
          iVar17 = FUN_0896065c(param_1,*(undefined *)(param_1 + 0x4cdb));
          if (iVar17 == 1) {
            iVar17 = DONE_NotZero_DAT_08AC5874();
            if (iVar17 == 0) {
              uVar1 = *(undefined *)(param_1 + 0x4cdb);
            }
            else {
              uVar19 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar19,1,0,0);
              uVar1 = *(undefined *)(param_1 + 0x4cdb);
            }
            FUN_08964af8(param_1,uVar1);
          }
          else {
            iVar17 = FUN_089606b4(param_1,*(undefined *)(param_1 + 0x4cdb));
            if (iVar17 == 1) {
              iVar17 = DONE_NotZero_DAT_08AC5874();
              if (iVar17 == 0) {
                uVar1 = *(undefined *)(param_1 + 0x4cdb);
              }
              else {
                uVar19 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar19,1,0,0);
                uVar1 = *(undefined *)(param_1 + 0x4cdb);
              }
              FUN_08964af8(param_1,uVar1);
            }
            else {
              cVar4 = FUN_08962004(param_1);
              if (cVar4 != '\0') {
                if (cVar4 == '\x01') {
                  iVar17 = DONE_NotZero_DAT_08AC5874();
                  if (iVar17 != 0) {
                    uVar19 = DONE_Get_DAT_08AC5874();
                    FUN_089c6350(uVar19,0,0,0);
                  }
                  FUN_08961ff0(param_1);
                  *(undefined4 *)(param_1 + 0x2c) = 0x16;
                }
                else {
                  iVar17 = DONE_NotZero_DAT_08AC5874();
                  if (iVar17 != 0) {
                    uVar19 = DONE_Get_DAT_08AC5874();
                    FUN_089c6350(uVar19,3,0,0);
                  }
                }
              }
            }
          }
        }
      }
      else {
        iVar17 = DONE_NotZero_DAT_08AC5874();
        if (iVar17 != 0) {
          uVar19 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar19,2,0,0);
        }
        *(undefined *)(param_1 + 0x4cd9) = 1;
        FUN_0896043c(param_1,*(undefined *)(param_1 + 0x4cdb));
        *(undefined4 *)(param_1 + 0x2c) = 0x11;
      }
    }
    else if (cVar4 == '\x01') {
      iVar17 = DONE_NotZero_DAT_08AC5874();
      if (iVar17 == 0) {
        uVar1 = *(undefined *)(param_1 + 0x4cdb);
      }
      else {
        uVar19 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar19,0,0,0);
        uVar1 = *(undefined *)(param_1 + 0x4cdb);
      }
      FUN_08964af8(param_1,uVar1);
      FUN_08960be8(param_1);
      *(undefined *)(param_1 + 0x4cd9) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x13;
    }
    else {
      iVar17 = DONE_NotZero_DAT_08AC5874();
      if (iVar17 != 0) {
        uVar19 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar19,3,0,0);
      }
    }
    break;
  case 0x11:
    FUN_089637a4(param_1,1,*(undefined *)(param_1 + 0x4cdb));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x12:
    cVar4 = FUN_089641f4(param_1,1,*(undefined *)(param_1 + 0x4cdb));
    if (cVar4 == '\x01') {
      if (*(char *)(param_1 + 0x4cd9) == '\0') {
        *(undefined4 *)(param_1 + 0x2c) = 0x14;
      }
      else {
        FUN_0895ae70(param_1);
        FUN_0895ff58(param_1,*(undefined *)(param_1 + 0x4cdb),1);
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    break;
  case 0x13:
    iVar17 = FUN_08960cfc(param_1);
    if (iVar17 == 1) {
      if (*(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026) == '\0') {
        FUN_08960e38(param_1,*(undefined *)(param_1 + 0x4cdb));
        *(undefined4 *)(param_1 + 0x2c) = 0x10;
      }
      else {
        FUN_0896043c(param_1,*(undefined *)(param_1 + 0x4cdb));
        *(undefined4 *)(param_1 + 0x2c) = 0x11;
      }
    }
    break;
  case 0x14:
    iVar17 = param_1 + *(char *)(param_1 + 0x4cdb) * 2;
    FUN_0896263c(param_1,(int)*(char *)(param_1 + 0x4cdb),*(undefined *)(iVar17 + 0x4fd8),
                 *(undefined *)(iVar17 + 0x4fd9));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x2c) = 0x18;
    break;
  case 0x16:
    iVar17 = FUN_08965acc(param_1);
    if (iVar17 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  case 0x18:
    if (*(int *)(param_1 + (1 - *(int *)(param_1 + 0x52a0)) * 0x28 + 0x5210) == 0x18) {
      FUN_0895edd0(param_1,1,0);
      FUN_0895edd0(param_1,1,1);
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    if (*(char *)(param_1 + 0x4cd8) == '\x01') {
      iVar17 = *(int *)(param_1 + 0x52a0);
    }
    else if (*(int *)(param_1 + 0x2c) == 0x18) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar17 = *(int *)(param_1 + 0x52a0);
      }
      else {
        FUN_0895e314(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
        iVar17 = *(int *)(param_1 + 0x52a0);
      }
    }
    else {
      iVar17 = *(int *)(param_1 + 0x52a0);
    }
    if (*(int *)(param_1 + (1 - iVar17) * 0x28 + 0x5214) == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x19;
      iVar17 = FUN_08816a90();
      if (iVar17 == 0) {
        FUN_08816868();
      }
      iVar17 = FUN_08816aac();
      *(undefined4 *)(iVar17 + 0x40) = 1;
      uVar19 = FUN_08816aac();
      FUN_08816c28(uVar19,0,0x1b);
      iVar17 = FUN_0881b22c();
      if (iVar17 != 0) {
        uVar19 = DONE_GetPtr_DAT_08AB0300();
        FUN_0881bbd8(uVar19);
      }
    }
    break;
  case 0x19:
    bVar23 = true;
    iVar17 = FUN_08816a90();
    if (iVar17 != 0) {
      bVar23 = false;
      uVar19 = FUN_08816aac();
      iVar17 = FUN_08816e58(uVar19);
      if (iVar17 != 0) {
        bVar23 = true;
      }
    }
    if (bVar23) {
      *(undefined *)(param_1 + 0x4cd8) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    break;
  case 0x1a:
    bVar23 = true;
    bVar3 = true;
    iVar17 = FUN_08816a90();
    if (iVar17 != 0) {
      bVar3 = false;
      uVar19 = FUN_08816aac();
      iVar17 = FUN_08816e58(uVar19);
      if (iVar17 == 0) {
        bVar23 = false;
        iVar17 = DONE_NotZero_DAT_08AAC9E0();
        if (iVar17 == 0) {
LAB_08968c7c:
          iVar17 = *(int *)(param_1 + 0x52a0);
        }
        else {
          uVar19 = DONE_Get_DAT_08AAC9E0();
          iVar17 = FUN_0880d7e0(uVar19,0x80);
          if (iVar17 != 0) {
            uVar19 = FUN_08816aac();
            FUN_08816e48(uVar19);
            goto LAB_08968c7c;
          }
          iVar17 = *(int *)(param_1 + 0x52a0);
        }
        if (*(int *)(param_1 + (1 - iVar17) * 0x28 + 0x5214) == 1) {
          uVar19 = FUN_08816aac();
          FUN_08816e48(uVar19);
          *(undefined4 *)(param_1 + 0x2c) = 0x19;
          iVar17 = FUN_08816a90();
          if (iVar17 == 0) {
            FUN_08816868();
          }
          iVar17 = FUN_08816aac();
          *(undefined4 *)(iVar17 + 0x40) = 1;
          uVar19 = FUN_08816aac();
          FUN_08816c28(uVar19,0,0x1b);
          iVar17 = FUN_0881b22c();
          if (iVar17 != 0) {
            uVar19 = DONE_GetPtr_DAT_08AB0300();
            FUN_0881bbd8(uVar19);
          }
          break;
        }
      }
      else {
        uVar19 = FUN_08816aac();
        iVar17 = FUN_08816eb0(uVar19);
        if (-2 < iVar17) {
          if (iVar17 < 1) {
            if (iVar17 < 0) goto LAB_08968c20;
            bVar3 = true;
          }
          else if (iVar17 < 2) {
LAB_08968c20:
            bVar3 = false;
          }
        }
      }
    }
    if (bVar23) {
      if (bVar3) {
        *(undefined4 *)(param_1 + 0x2c) = 5;
        *(undefined *)(param_1 + 0x4cd8) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
  }
  FUN_0895be84(param_1);
  FUN_0895c220(param_1);
  FUN_0895c44c(param_1);
  FUN_08965e60(param_1);
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 5:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
    FUN_089674b0(param_1);
  }
  return;
}

