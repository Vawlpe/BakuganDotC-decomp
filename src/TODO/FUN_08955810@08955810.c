#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08955810(int param_1)

{
  undefined uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined auStack_50 [4];
  uint local_4c;
  undefined local_48;
  undefined local_47;
  char local_46;
  undefined local_45;
  
  bVar2 = true;
  bVar3 = false;
  iVar7 = FUN_0880d354();
  if (iVar7 != 0) {
    bVar2 = false;
    switch(*(undefined4 *)(param_1 + 0x2c)) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
      bVar2 = true;
    }
    iVar7 = FUN_0881b22c();
    if ((iVar7 != 0) && (!bVar2)) {
      iVar7 = FUN_089cf8ec(0);
      uVar8 = DONE_GetPtr_DAT_08AB0300();
      uVar9 = FUN_0881b64c(uVar8);
      if (((uVar9 & 0x2000000) != 0) && (iVar10 = FUN_089d003c(), iVar10 != 0)) {
        bVar2 = true;
      }
      if ((!bVar2) && (iVar7 != 0)) {
        uVar8 = DONE_GetPtr_DAT_08AB0300();
        iVar10 = FUN_0881b654(uVar8);
        if (iVar10 != 0) {
          uVar9 = (uint)(*(int *)(param_1 + 0xa50) == 0);
          iVar10 = FUN_089d0bcc(iVar7,uVar9,auStack_50);
          if (iVar10 == 0) {
            uVar8 = *(undefined4 *)(param_1 + 0xa50);
          }
          else {
            bVar2 = true;
            if ((local_4c & 0x2000000) != 0) {
              iVar10 = param_1 + uVar9 * 4;
              *(undefined *)(iVar10 + 0xa45) = local_48;
              *(undefined *)(iVar10 + 0xa46) = local_47;
              *(char *)(iVar10 + 0xa47) = local_46;
              *(undefined *)(iVar10 + 0xa48) = local_45;
            }
            uVar8 = *(undefined4 *)(param_1 + 0xa50);
          }
          iVar10 = FUN_089d0bcc(iVar7,uVar8,auStack_50);
          if (((iVar10 != 0) && (*(char *)(param_1 + uVar9 * 4 + 0xa47) == '\x10')) &&
             (local_46 == '\x10')) {
            bVar3 = true;
          }
        }
        memset_jak(auStack_50,0,0x28);
        local_4c = 0x2000000;
        iVar10 = param_1 + *(int *)(param_1 + 0xa50) * 4;
        uVar1 = *(undefined *)(param_1 + 0xa44);
        *(undefined *)(iVar10 + 0xa45) = *(undefined *)(param_1 + 0x74);
        uVar8 = *(undefined4 *)(param_1 + 0x2c);
        *(undefined *)(iVar10 + 0xa46) = uVar1;
        uVar1 = *(undefined *)(param_1 + 0x5f8);
        *(char *)(iVar10 + 0xa47) = (char)uVar8;
        *(undefined *)(iVar10 + 0xa48) = uVar1;
        memcpy_jak(&local_48,iVar10 + 0xa45,4);
        FUN_089d0a74(iVar7,auStack_50);
      }
    }
    iVar7 = DONE_NotZero_DAT_08AAC9E0();
    if (iVar7 != 0) {
      uVar8 = DONE_Get_DAT_08AAC9E0();
      iVar7 = FUN_0880d7e0(uVar8,0x80);
      if ((iVar7 != 0) &&
         (((iVar7 = *(int *)(param_1 + 0x2c), iVar7 == 0x10 || (iVar7 == 10)) || (iVar7 == 3)))) {
        iVar7 = FUN_08816a90();
        if (iVar7 == 0) {
          FUN_08816868();
        }
        iVar7 = FUN_08816aac();
        *(undefined4 *)(iVar7 + 0x40) = 1;
        uVar8 = FUN_08816aac();
        FUN_08816c28(uVar8,0,0x1d);
        *(undefined4 *)(param_1 + 0x2c) = 0x11;
      }
    }
  }
  if (!bVar2) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0895433c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar4 = FUN_0895469c(param_1,0);
    if (cVar4 == '\x01') {
      FUN_08952df0(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    cVar4 = FUN_08954b60(param_1,0);
    if (cVar4 == '\x01') {
      FUN_08952fcc(param_1,1,*(undefined *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 3:
    FUN_089530dc(param_1,*(undefined *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0xa50) == 0) {
      cVar4 = FUN_08953668(param_1);
      if (cVar4 == '\0') {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
          iVar7 = FUN_089531f8(param_1);
          if (iVar7 == 1) {
            iVar7 = DONE_NotZero_DAT_08AC5874();
            if (iVar7 != 0) {
              uVar8 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar8,1,0,0);
            }
            FUN_0895348c(param_1);
            *(undefined4 *)(param_1 + 0x2c) = 4;
          }
        }
        else {
          iVar7 = FUN_0880d354();
          if (iVar7 == 0) {
            *(undefined *)(param_1 + 0x5f8) = 1;
            *(undefined4 *)(param_1 + 0x2c) = 0x10;
          }
          else {
            iVar7 = DONE_NotZero_DAT_08AC5874();
            if (iVar7 != 0) {
              uVar8 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar8,2,0,0);
            }
            iVar7 = FUN_08816a90();
            if (iVar7 == 0) {
              FUN_08816868();
            }
            iVar7 = FUN_08816aac();
            *(undefined4 *)(iVar7 + 0x40) = 0;
            uVar8 = FUN_08816aac();
            FUN_08816c28(uVar8,1,0x11);
            *(undefined4 *)(param_1 + 0x2c) = 0x12;
          }
        }
      }
      else {
        if (cVar4 == '\x01') {
          *(undefined *)(param_1 + 0x5f8) = 0;
          *(undefined4 *)(param_1 + 0x2c) = 0x10;
          return;
        }
        iVar7 = DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,3,0,0);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  case 4:
    iVar7 = FUN_08954e84(param_1);
    if (iVar7 == 1) {
      FUN_08952fcc(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 5:
    FUN_0895433c(param_1,1);
    FUN_08952df0(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 6:
    cVar4 = FUN_0895469c(param_1,1);
    cVar5 = FUN_08954b60(param_1,1);
    if ((char)(cVar4 + cVar5) == '\x02') {
      *(undefined4 *)(param_1 + 0x2c) = 0x13;
    }
    break;
  case 7:
    iVar7 = FUN_089536e4(param_1);
    if (iVar7 == 1) {
      uVar8 = 5;
      if (*(char *)(param_1 + 0x74) == '\x03') {
        uVar8 = 8;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar8;
    }
    break;
  case 8:
    FUN_08952fcc(param_1,0,*(undefined *)(param_1 + 0x74));
    FUN_0895371c(param_1,0);
    FUN_089539a0(param_1,0);
    FUN_08953c48(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    cVar4 = FUN_089537f0(param_1,0);
    cVar5 = FUN_08953afc(param_1,0);
    cVar6 = FUN_08953d18(param_1,0);
    if ((char)(cVar4 + cVar5 + cVar6) == '\x03') {
      *(undefined *)(param_1 + 0xa44) = 0;
      FUN_08953e30(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 10:
    FUN_0895402c(param_1);
    FUN_08954088(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70),param_1 + 0x4d8);
    cVar4 = FUN_08954300(param_1);
    if (cVar4 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
        iVar7 = DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,2,0,0);
        }
        FUN_08953e30(param_1);
        FUN_08954058(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0x10;
        return;
      }
      iVar7 = FUN_089541f4(param_1);
      if (iVar7 == 1) {
        iVar7 = DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,1,0,0);
        }
        FUN_08953e30(param_1);
      }
    }
    else if (cVar4 == '\x01') {
      iVar7 = DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar8 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar8,0,0,0);
      }
      FUN_08953e30(param_1);
      *(undefined *)(param_1 + 0x5f8) = 0;
      FUN_0895426c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
    }
    else {
      iVar7 = DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar8 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar8,3,0,0);
      }
    }
    break;
  case 0xb:
    FUN_0895371c(param_1,1);
    FUN_089539a0(param_1,1);
    FUN_08953c48(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xc:
    cVar4 = FUN_089537f0(param_1,1);
    cVar5 = FUN_08953afc(param_1,1);
    cVar6 = FUN_08953d18(param_1,1);
    if ((char)(cVar4 + cVar5 + cVar6) == '\x03') {
      FUN_08952fcc(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0xd:
    iVar7 = FUN_089542c8(param_1);
    if (iVar7 == 1) {
      FUN_08954058(param_1);
      FUN_0895371c(param_1,1);
      FUN_089539a0(param_1,1);
      FUN_08953c48(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xe:
    cVar4 = FUN_089537f0(param_1,1);
    cVar5 = FUN_08953afc(param_1,1);
    cVar6 = FUN_08953d18(param_1,1);
    if ((char)(cVar4 + cVar5 + cVar6) == '\x03') {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    break;
  case 0xf:
    iVar7 = FUN_089a59fc();
    if (iVar7 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0x10:
    if (*(char *)(param_1 + 0x74) == *(char *)(param_1 + 0xa45)) {
      if (bVar3) {
        if (*(char *)(param_1 + 0xa48) == '\0') {
          iVar7 = DONE_NotZero_DAT_08AC5874();
          if (iVar7 != 0) {
            uVar8 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar8,0,0,0);
          }
          FUN_089536a8(param_1);
          *(undefined *)(param_1 + 0x5f8) = 0;
          *(undefined4 *)(param_1 + 0x2c) = 7;
        }
        else {
          iVar7 = DONE_NotZero_DAT_08AC5874();
          if (iVar7 != 0) {
            uVar8 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar8,2,0,0);
          }
          *(undefined *)(param_1 + 0x5f8) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 5;
          if (*(int *)(param_1 + 0xa50) == 1) {
            iVar7 = FUN_08816a90();
            if (iVar7 == 0) {
              FUN_08816868();
            }
            iVar7 = FUN_08816aac();
            *(undefined4 *)(iVar7 + 0x40) = 1;
            uVar8 = FUN_08816aac();
            FUN_08816c28(uVar8,0,0x1e);
            *(undefined4 *)(param_1 + 0x2c) = 0x11;
          }
          iVar7 = FUN_0881b22c();
          if (iVar7 != 0) {
            uVar8 = DONE_GetPtr_DAT_08AB0300();
            FUN_0881bbd8(uVar8);
          }
        }
      }
    }
    else {
      *(char *)(param_1 + 0x75) = *(char *)(param_1 + 0x74);
      *(char *)(param_1 + 0x74) = *(char *)(param_1 + 0xa45);
      memset_jak((undefined *)(param_1 + 0xa34),0,0xc);
      *(undefined4 *)(param_1 + 0xa38) = 0x41000000;
      uVar9 = (int)*(char *)(param_1 + 0x75) + 1;
      if ((int)uVar9 < 0) {
        uVar9 = -(-uVar9 & 3);
      }
      else {
        uVar9 = uVar9 & 3;
      }
      *(bool *)(param_1 + 0xa34) = uVar9 != (int)*(char *)(param_1 + 0x74);
      iVar7 = DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar8 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar8,1,0,0);
      }
      FUN_0895348c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 0x11:
    bVar2 = true;
    iVar7 = FUN_08816a90();
    if (iVar7 != 0) {
      bVar2 = false;
      uVar8 = FUN_08816aac();
      iVar7 = FUN_08816e58(uVar8);
      if (iVar7 != 0) {
        bVar2 = true;
      }
    }
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    break;
  case 0x12:
    bVar2 = true;
    bVar3 = true;
    iVar7 = FUN_08816a90();
    if (iVar7 != 0) {
      bVar3 = false;
      uVar8 = FUN_08816aac();
      iVar7 = FUN_08816e58(uVar8);
      if (iVar7 == 0) {
        bVar2 = false;
        iVar7 = DONE_NotZero_DAT_08AAC9E0();
        if (iVar7 != 0) {
          uVar8 = DONE_Get_DAT_08AAC9E0();
          iVar7 = FUN_0880d7e0(uVar8,0x80);
          if (iVar7 != 0) {
            uVar8 = FUN_08816aac();
            FUN_08816e48(uVar8);
          }
        }
      }
      else {
        uVar8 = FUN_08816aac();
        iVar7 = FUN_08816eb0(uVar8);
        if (-2 < iVar7) {
          if (iVar7 < 1) {
            if (iVar7 < 0) goto LAB_08956364;
            bVar3 = true;
          }
          else if (iVar7 < 2) {
LAB_08956364:
            bVar3 = false;
          }
        }
      }
    }
    if (bVar2) {
      if (bVar3) {
        *(undefined *)(param_1 + 0x5f8) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    break;
  default:
    uVar8 = DONE_Get_DAT_08AAC9E0();
    iVar7 = FUN_0880d7e0(uVar8,0x80);
    if (iVar7 != 0) {
      *(undefined *)(param_1 + 0x5f8) = 1;
    }
    FUN_08952ae8(param_1);
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

