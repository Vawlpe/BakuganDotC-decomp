#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089665d8(int param_1)

{
  undefined uVar1;
  char cVar2;
  char cVar3;
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
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  
  FUN_0895ac6c();
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    iVar17 = FUN_0890a2c8(param_1,1);
    iVar15 = FUN_0890a310(param_1,1);
    if (iVar17 == iVar15) {
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x43960000,0,0,param_1,"main_light.fab",1,1);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089a4e08(0,**(undefined4 **)(param_1 + 0x1c));
      FUN_0895cb5c(param_1);
      FUN_0895cce4(param_1,1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 1:
    cVar14 = FUN_089a97ec(0);
    cVar2 = FUN_0895cbd0(param_1);
    if ((char)(cVar14 + cVar2) == '\x02') {
      FUN_0895cc90(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    cVar14 = FUN_0895ccb0(param_1);
    if (cVar14 == '\x01') {
      FUN_0895cd84(param_1,0);
      FUN_0895cd18(param_1,0);
      FUN_0895cfe8(param_1,0);
      FUN_0895ead8(param_1,0);
      FUN_08962194(param_1,0);
      FUN_0895d248(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 3:
    FUN_0895d250(param_1);
    cVar14 = FUN_08962784(param_1,0);
    cVar2 = FUN_0895cea8(param_1,0);
    cVar3 = FUN_0895d108(param_1,0);
    cVar4 = FUN_0895ebf8(param_1,0);
    cVar5 = FUN_0896234c(param_1,0);
    if ((char)(cVar14 + cVar2 + cVar3 + cVar4 + cVar5) == '\x05') {
      FUN_0895d29c(param_1,0);
      FUN_0895d4c8(param_1,0);
      FUN_0895d6cc(param_1,0);
      FUN_0895d958(param_1,0);
      FUN_0895f050(param_1,0);
      FUN_08962a58(param_1,0);
      FUN_08961764(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 4:
    cVar14 = FUN_0895d384(param_1,0);
    cVar2 = FUN_0895d598(param_1,0);
    cVar3 = FUN_0895d7c0(param_1,0);
    cVar4 = FUN_0895de04(param_1,0);
    cVar5 = FUN_0895f150(param_1,0);
    cVar6 = FUN_0895f408(param_1,0);
    cVar7 = FUN_08961a68(param_1,0);
    if ((char)(cVar14 + cVar2 + cVar3 + cVar4 + cVar5 + cVar6 + cVar7) == '\a') {
      FUN_0895ee94(param_1,1);
      FUN_0895e238(param_1,0);
      FUN_0895cce4(param_1,1,4);
      if (*(char *)(param_1 + 0x4f80) == '\0') {
        FUN_0895ae70(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        FUN_0895ae70(param_1);
        *(char *)(param_1 + 0x4cdc) = *(char *)(param_1 + 0x4cdc) + -1;
        *(undefined *)(param_1 + 0x4f80) = 0;
        *(undefined *)(param_1 + 0x4cd8) = 0;
        FUN_08961574(param_1,*(undefined *)(param_1 + 0x4cdb));
        FUN_0895e314(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
      }
    }
    break;
  case 5:
    FUN_08962fa4(param_1);
    FUN_0895e844(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                 param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
    cVar14 = FUN_0895e740(param_1);
    if (cVar14 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar17 = FUN_0895e3bc(param_1);
        if (iVar17 == 1) {
          iVar17 = _DONE_NotZero_DAT_08AC5874();
          if (iVar17 != 0) {
            uVar16 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar16,1,0,0);
          }
          FUN_0895ae70(param_1);
          FUN_0895e550(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 6;
        }
        else {
          iVar17 = FUN_0895fef0(param_1,*(undefined *)(param_1 + 0x4cdb));
          if (iVar17 == 1) {
            iVar17 = _DONE_NotZero_DAT_08AC5874();
            if (iVar17 == 0) {
              uVar1 = *(undefined *)(param_1 + 0x4cdb);
            }
            else {
              uVar16 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar16,1,0,0);
              uVar1 = *(undefined *)(param_1 + 0x4cdb);
            }
            FUN_0895f9a8(param_1,uVar1);
          }
        }
      }
      else {
        iVar17 = _DONE_NotZero_DAT_08AC5874();
        if (iVar17 != 0) {
          uVar16 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar16,2,0,0);
        }
        FUN_0895ae70(param_1);
        if (*(char *)(param_1 + 0x4cdb) == '\0') {
          *(undefined *)(param_1 + 0x4cd8) = 1;
          FUN_0895e314(param_1);
          FUN_0895bcec(param_1,1);
          FUN_0895e1bc(param_1,*(undefined *)(param_1 + 0x4cdb),0);
          *(undefined4 *)(param_1 + 0x2c) = 7;
        }
        else {
          FUN_0895fb78(param_1,0,*(char *)(param_1 + 0x4cdb));
          FUN_0895ea2c(param_1);
          FUN_0895ae70(param_1);
          FUN_08961574(param_1,*(undefined *)(param_1 + 0x4cdb));
          FUN_0895fb78(param_1,1,*(undefined *)(param_1 + 0x4cdb));
        }
      }
    }
    else if (cVar14 == '\x01') {
      iVar17 = _DONE_NotZero_DAT_08AC5874();
      if (iVar17 != 0) {
        uVar16 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar16,0,0,0);
      }
      FUN_0895ae70(param_1);
      FUN_0895e8b4(param_1);
      *(undefined *)(param_1 + 0x4cd8) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0xb;
    }
    else {
      iVar17 = _DONE_NotZero_DAT_08AC5874();
      if (iVar17 != 0) {
        uVar16 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar16,3,0,0);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x4f78) == '\0') {
      FUN_0895e580(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    else {
      *(char *)(param_1 + 0x4f78) = *(char *)(param_1 + 0x4f78) + -1;
    }
    break;
  case 7:
    FUN_0895eec4(param_1);
    FUN_0895ee94(param_1,0);
    FUN_0895e238(param_1,1);
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
    cVar14 = FUN_089a97ec(1);
    cVar2 = FUN_08962784(param_1,1);
    cVar3 = FUN_0895cea8(param_1,1);
    cVar4 = FUN_0895d108(param_1,1);
    cVar5 = FUN_0895d384(param_1,1);
    cVar6 = FUN_0895d598(param_1,1);
    cVar7 = FUN_0895d7c0(param_1,1);
    cVar8 = FUN_0895de04(param_1,1);
    cVar9 = FUN_0895ebf8(param_1,1);
    cVar10 = FUN_0895f150(param_1,1);
    cVar11 = FUN_0895f408(param_1,1);
    cVar12 = FUN_08961a68(param_1,1);
    cVar13 = FUN_0896234c(param_1,1);
    if ((char)(cVar14 + cVar2 + cVar3 + cVar4 + cVar5 + cVar6 + cVar7 + cVar8 + cVar9 + cVar10 +
               cVar11 + cVar12 + cVar13) == '\r') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 9:
    iVar17 = FUN_0890a2c8(param_1,1);
    iVar15 = FUN_0890a310(param_1,1);
    if (iVar15 <= iVar17) {
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
      uVar16 = FUN_089edb80();
      FUN_089edf24(uVar16,8);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 10:
    uVar16 = FUN_089edb80();
    iVar17 = FUN_089edf70(uVar16);
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
      iVar17 = _DONE_NotZero_DAT_08AC5874();
      if (iVar17 != 0) {
        uVar16 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar16,0,0,0);
      }
      FUN_0895ae70(param_1);
      FUN_0895e8b4(param_1);
      *(undefined *)(param_1 + 0x4cd8) = 0;
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
    cVar14 = FUN_089641f4(param_1,0,*(undefined *)(param_1 + 0x4cdb));
    if (cVar14 == '\x01') {
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
    cVar14 = FUN_08960a50(param_1);
    if (cVar14 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar17 = FUN_08960610(param_1,*(undefined *)(param_1 + 0x4cdb));
        if (iVar17 == 1) {
          iVar17 = _DONE_NotZero_DAT_08AC5874();
          if (iVar17 == 0) {
            uVar1 = *(undefined *)(param_1 + 0x4cdb);
          }
          else {
            uVar16 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar16,1,0,0);
            uVar1 = *(undefined *)(param_1 + 0x4cdb);
          }
          FUN_08964af8(param_1,uVar1);
        }
        else {
          iVar17 = FUN_089606b4(param_1,*(undefined *)(param_1 + 0x4cdb));
          if (iVar17 == 1) {
            iVar17 = _DONE_NotZero_DAT_08AC5874();
            if (iVar17 == 0) {
              uVar1 = *(undefined *)(param_1 + 0x4cdb);
            }
            else {
              uVar16 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar16,1,0,0);
              uVar1 = *(undefined *)(param_1 + 0x4cdb);
            }
            FUN_08964af8(param_1,uVar1);
          }
          else {
            cVar14 = FUN_08962004(param_1);
            if (cVar14 != '\0') {
              if (cVar14 == '\x01') {
                iVar17 = _DONE_NotZero_DAT_08AC5874();
                if (iVar17 != 0) {
                  uVar16 = _DONE_Get_DAT_08AC5874();
                  FUN_089c6350(uVar16,0,0,0);
                }
                FUN_08961ff0(param_1);
                *(undefined4 *)(param_1 + 0x2c) = 0x16;
              }
              else {
                iVar17 = _DONE_NotZero_DAT_08AC5874();
                if (iVar17 != 0) {
                  uVar16 = _DONE_Get_DAT_08AC5874();
                  FUN_089c6350(uVar16,3,0,0);
                }
              }
            }
          }
        }
      }
      else {
        iVar17 = _DONE_NotZero_DAT_08AC5874();
        if (iVar17 != 0) {
          uVar16 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar16,2,0,0);
        }
        *(undefined *)(param_1 + 0x4cd9) = 1;
        FUN_0896043c(param_1,*(undefined *)(param_1 + 0x4cdb));
        *(undefined4 *)(param_1 + 0x2c) = 0x11;
      }
    }
    else if (cVar14 == '\x01') {
      iVar17 = _DONE_NotZero_DAT_08AC5874();
      if (iVar17 == 0) {
        uVar1 = *(undefined *)(param_1 + 0x4cdb);
      }
      else {
        uVar16 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar16,0,0,0);
        uVar1 = *(undefined *)(param_1 + 0x4cdb);
      }
      FUN_08964af8(param_1,uVar1);
      FUN_08960be8(param_1);
      *(undefined *)(param_1 + 0x4cd9) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x13;
    }
    else {
      iVar17 = _DONE_NotZero_DAT_08AC5874();
      if (iVar17 != 0) {
        uVar16 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar16,3,0,0);
      }
    }
    break;
  case 0x11:
    FUN_089637a4(param_1,1,*(undefined *)(param_1 + 0x4cdb));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x12:
    cVar14 = FUN_089641f4(param_1,1,*(undefined *)(param_1 + 0x4cdb));
    if (cVar14 == '\x01') {
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
      if (*(char *)(param_1 + 0x5025) == '\0') {
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
    FUN_08961198(param_1,*(undefined *)(param_1 + 0x4cdb));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x15:
    iVar17 = FUN_089613a4(param_1,*(undefined *)(param_1 + 0x4cdb));
    if (iVar17 == 1) {
      iVar17 = FUN_0895e9b8(param_1);
      if (iVar17 == 1) {
        FUN_0895bcec(param_1,1);
        *(undefined4 *)(param_1 + 0x2c) = 7;
      }
      else {
        FUN_0895ae70(param_1);
        FUN_0895e550(param_1);
        FUN_0895fb78(param_1,1,*(undefined *)(param_1 + 0x4cdb));
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    break;
  case 0x16:
    iVar17 = FUN_08965acc(param_1);
    if (iVar17 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  default:
    FUN_0895c9d4(param_1);
    FUN_08909a94(param_1);
    DAT_08ac0e70 = 0;
    *(undefined4 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_0895be84(param_1);
  FUN_0895c220(param_1);
  FUN_0895c44c(param_1);
  FUN_08965e60(param_1);
  return;
}

