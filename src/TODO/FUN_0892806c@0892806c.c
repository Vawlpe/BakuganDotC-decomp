#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892806c(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0892c130(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),param_1 + 0x2104);
    FUN_0892c25c(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),param_1 + 0x2114);
    FUN_0891f060(param_1,0);
    FUN_0891f5ec(param_1,0);
    FUN_089227dc(param_1,0);
    FUN_08922cd8(param_1,0);
    FUN_0891ffc8(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar6 = FUN_0891f158(param_1,0);
    cVar2 = FUN_0891f810(param_1,0);
    cVar3 = FUN_0891f9c4(param_1,0);
    cVar4 = FUN_08924124(param_1,0);
    cVar5 = FUN_0892030c(param_1,0);
    if ((char)(cVar6 + cVar2 + cVar3 + cVar4 + cVar5) == '\x05') {
      FUN_08920f6c(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    if (*(byte *)(param_1 + 0x224c) < 2) {
      iVar8 = FUN_089221fc(param_1,9);
      if (iVar8 == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0x1f;
      }
      else {
        iVar8 = FUN_089221fc(param_1,1);
        if (iVar8 == 1) {
          *(undefined4 *)(param_1 + 0x2c) = 0x1f;
        }
        else {
          iVar8 = FUN_089221fc(param_1,6);
          if (iVar8 == 1) {
            *(undefined4 *)(param_1 + 0x2c) = 0x1f;
          }
          else {
            FUN_0891d5fc(param_1);
            *(undefined4 *)(param_1 + 0x2c) = 3;
          }
        }
      }
    }
    else {
      FUN_08920c68(param_1,8,2,2);
      *(undefined *)(param_1 + 0x224c) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x22;
    }
    break;
  case 3:
    FUN_0892054c(param_1);
    FUN_08920648(param_1);
    FUN_089246a4(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
    cVar6 = FUN_089208bc(param_1);
    if (cVar6 == '\0') {
      cVar6 = FUN_0892170c(param_1);
      if (cVar6 == '\0') {
        iVar8 = FUN_08921754(param_1);
        if (iVar8 == 0) {
          iVar8 = FUN_08920708(param_1);
          if (iVar8 == 1) {
            iVar8 = DONE_NotZero_DAT_08AC5874();
            if (iVar8 != 0) {
              uVar7 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar7,1,0,0);
            }
            FUN_0891d5fc(param_1);
          }
        }
        else {
          iVar8 = DONE_NotZero_DAT_08AC5874();
          if (iVar8 != 0) {
            uVar7 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar7,0,0,0);
          }
          FUN_0891d5fc(param_1);
          *(undefined *)(param_1 + 0x20f8) = 1;
          FUN_08920c68(param_1,0xb,4,3);
          *(undefined4 *)(param_1 + 0x2c) = 0x22;
        }
      }
      else {
        iVar8 = DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar7 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,2,0,0);
        }
        FUN_0891d5fc(param_1);
        *(undefined *)(param_1 + 0x20f8) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    else if (cVar6 == '\x01') {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,0,0,0);
      }
      FUN_0891d5fc(param_1);
      FUN_08920a10(param_1);
      *(undefined *)(param_1 + 0x20f8) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    else {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,3,0,0);
      }
    }
    break;
  case 4:
    FUN_0892047c(param_1);
    FUN_0891f060(param_1,1);
    FUN_0891f5ec(param_1,1);
    FUN_089227dc(param_1,1);
    FUN_08922cd8(param_1,1);
    FUN_0891ffc8(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 5:
    cVar6 = FUN_0891f158(param_1,1);
    cVar2 = FUN_0891f810(param_1,1);
    cVar3 = FUN_0891f9c4(param_1,1);
    cVar4 = FUN_08924124(param_1,1);
    cVar5 = FUN_0892030c(param_1,1);
    if ((char)(cVar6 + cVar2 + cVar3 + cVar4 + cVar5) == '\x05') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x20f8) == '\0') {
      if (*(char *)(param_1 + 0x77) == '\x02') {
        FUN_089c87e4(0);
        FUN_089c879c(0x3dcccccd,0);
      }
    }
    else {
      FUN_089c87e4(0);
      FUN_089c879c(0x3dcccccd,0);
    }
    iVar8 = FUN_089edb80();
    *(undefined4 *)(iVar8 + 0x30) = 0;
    *(undefined4 *)(iVar8 + 0x34) = 0;
    *(undefined4 *)(iVar8 + 0x38) = 0;
    *(undefined4 *)(iVar8 + 0x3c) = 0;
    iVar8 = FUN_089edb80();
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    *(undefined4 *)(iVar8 + 0x48) = 0;
    *(undefined4 *)(iVar8 + 0x4c) = 0x3f800000;
    uVar7 = FUN_089edb80();
    FUN_089edf24(uVar7,0x10);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    uVar7 = FUN_089edb80();
    iVar8 = FUN_089edf70(uVar7);
    if (iVar8 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x23;
    }
    break;
  case 8:
    iVar8 = FUN_08920b90(param_1);
    if (iVar8 == 1) {
      FUN_08920d4c(param_1);
    }
    break;
  case 9:
    FUN_0892047c(param_1);
    FUN_08925004(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 10:
    cVar6 = FUN_08921008(param_1,1);
    if (cVar6 == '\x01') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xb:
    *(undefined *)(param_1 + 0x74) = 1;
    FUN_08921684(param_1);
    FUN_08925480(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xc:
    cVar6 = FUN_089211cc(param_1,0);
    if (cVar6 == '\x01') {
      FUN_08920c88(param_1,1);
      iVar8 = FUN_089221fc(param_1,2);
      if (iVar8 == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0x1f;
      }
      else {
        FUN_0891d5fc(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    break;
  case 0xd:
    FUN_0892054c(param_1);
    FUN_08920648(param_1);
    FUN_089246a4(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
    cVar6 = FUN_089208bc(param_1);
    if (cVar6 == '\0') {
      cVar6 = FUN_0892170c(param_1);
      if (cVar6 == '\0') {
        iVar8 = FUN_08920708(param_1);
        if (iVar8 == 1) {
          iVar8 = DONE_NotZero_DAT_08AC5874();
          if (iVar8 != 0) {
            uVar7 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar7,1,0,0);
          }
          FUN_0891d5fc(param_1);
          FUN_08920c88(param_1,1);
        }
      }
      else {
        iVar8 = DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar7 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,2,0,0);
        }
        FUN_0891d5fc(param_1);
        *(undefined *)(param_1 + 0x20f8) = 1;
        FUN_08920c88(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
      }
    }
    else if (cVar6 == '\x01') {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,0,0,0);
      }
      FUN_0891d5fc(param_1);
      FUN_08920a10(param_1);
      *(undefined *)(param_1 + 0x20f8) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    else {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,3,0,0);
      }
    }
    break;
  case 0xe:
    FUN_0892047c(param_1);
    FUN_08925480(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xf:
    cVar6 = FUN_089211cc(param_1,1);
    if (cVar6 == '\x01') {
      uVar7 = 0x12;
      if (*(char *)(param_1 + 0x20f8) == '\0') {
        uVar7 = 0x14;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
    }
    break;
  case 0x10:
    iVar8 = DONE_NotZero_DAT_08AC5874();
    if (iVar8 != 0) {
      uVar7 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar7,2,0,0);
    }
    FUN_0892047c(param_1);
    FUN_08921f88(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x11:
    iVar8 = FUN_08926530(param_1);
    if (iVar8 == 1) {
      FUN_0891d5fc(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
    }
    break;
  case 0x12:
    *(undefined *)(param_1 + 0x74) = 0;
    FUN_08921684(param_1);
    FUN_08925004(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x13:
    cVar6 = FUN_08921008(param_1,0);
    if (cVar6 == '\x01') {
      FUN_0891d5fc(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0x14:
    FUN_089217c4(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x15:
    cVar6 = FUN_08921898(param_1,1);
    if (cVar6 == '\x01') {
      *(undefined4 *)(param_1 + 0x2c) = 0x18;
    }
    break;
  case 0x16:
    FUN_089217c4(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x17:
    cVar6 = FUN_08921898(param_1,0);
    if (cVar6 == '\x01') {
      *(undefined4 *)(param_1 + 0x2c) = 0xb;
    }
    break;
  case 0x18:
    *(undefined *)(param_1 + 0x74) = 2;
    FUN_08921684(param_1);
    FUN_08926bcc(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x19:
    cVar6 = FUN_08921978(param_1,0);
    if (cVar6 == '\x01') {
      FUN_08921e84(param_1,1);
      iVar8 = FUN_089221fc(param_1,3);
      if (iVar8 == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0x1f;
      }
      else {
        iVar8 = FUN_089221fc(param_1,7);
        if (iVar8 == 1) {
          *(undefined4 *)(param_1 + 0x2c) = 0x1f;
        }
        else {
          FUN_0891d5fc(param_1);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        }
      }
    }
    break;
  case 0x1a:
    FUN_0892054c(param_1);
    FUN_08920648(param_1);
    FUN_089246a4(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
    cVar6 = FUN_089208bc(param_1);
    if (cVar6 == '\0') {
      cVar6 = FUN_0892170c(param_1);
      if (cVar6 == '\0') {
        iVar8 = FUN_08921f24(param_1);
        iVar9 = 1;
        if (iVar8 == 1) {
          iVar8 = DONE_NotZero_DAT_08AC5874();
          if (iVar8 != 0) {
            uVar7 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar7,1,0,0);
          }
          FUN_0891d5fc(param_1);
        }
        else {
          iVar8 = FUN_08920708(param_1);
          if (iVar8 == iVar9) {
            iVar8 = DONE_NotZero_DAT_08AC5874();
            if (iVar8 != 0) {
              uVar7 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar7,1,0,0);
            }
            FUN_0891d5fc(param_1);
          }
        }
      }
      else {
        iVar8 = DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar7 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,2,0,0);
        }
        FUN_0891d5fc(param_1);
        *(undefined *)(param_1 + 0x20f8) = 1;
        FUN_08921e84(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 0x1b;
      }
    }
    else if (cVar6 == '\x01') {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,10,0,0);
      }
      FUN_0891d5fc(param_1);
      FUN_08920a10(param_1);
      *(undefined *)(param_1 + 0x20f8) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    else {
      FUN_08920c68(param_1,6,0x1a,0x1a);
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,3,0,0);
      }
      *(undefined4 *)(param_1 + 0x2c) = 0x22;
    }
    break;
  case 0x1b:
    FUN_0892047c(param_1);
    FUN_08926bcc(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x1c:
    cVar6 = FUN_08921978(param_1,1);
    if (cVar6 == '\x01') {
      *(undefined4 *)(param_1 + 0x2c) = 0x16;
    }
    break;
  case 0x1d:
    FUN_0892047c(param_1);
    FUN_08921e84(param_1,0);
    FUN_08921f88(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x1e:
    iVar8 = FUN_089278f0(param_1);
    if (iVar8 == 1) {
      iVar8 = FUN_089221fc(param_1,4);
      if (iVar8 == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0x1f;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 0x1b;
      }
    }
    break;
  case 0x1f:
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 0x20:
    FUN_08922438(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x21:
    iVar8 = FUN_08922470(param_1);
    if (iVar8 == 1) {
      FUN_0891d5fc(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0x22:
    iVar8 = FUN_089225d0(param_1);
    if (iVar8 == 1) {
      if (*(char *)(param_1 + 0x22a2) == '\0') {
        bVar1 = *(byte *)(param_1 + 0x22a3);
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x22a4);
      }
      *(uint *)(param_1 + 0x2c) = (uint)bVar1;
    }
    break;
  default:
    FUN_0891eec8(param_1);
    *(undefined4 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_0892c180(param_1 + 0x2104);
  FUN_0892c2d8(param_1 + 0x2114);
  FUN_0891e7b8(param_1);
  FUN_0891e88c(param_1);
  FUN_0891e964(param_1);
  return;
}

