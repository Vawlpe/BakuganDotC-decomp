#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a2dfc(int param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined auStack_60 [4];
  uint local_5c;
  undefined auStack_58 [48];
  
  bVar2 = true;
  iVar5 = FUN_0880d354();
  if (iVar5 != 0) {
    iVar5 = FUN_0881b22c();
    if (iVar5 != 0) {
      bVar2 = false;
      iVar5 = FUN_0881b22c();
      if (iVar5 != 0) {
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
        case 0x1c:
        case 0x1e:
          bVar2 = true;
        }
        if (!bVar2) {
          iVar5 = FUN_089cf8ec(0);
          uVar6 = _DONE_GetPtr_DAT_08AB0300();
          uVar7 = FUN_0881b64c(uVar6);
          if (((uVar7 & 0x2000000) != 0) && (iVar8 = FUN_089d003c(), iVar8 != 0)) {
            bVar2 = true;
          }
          if ((!bVar2) && (iVar5 != 0)) {
            uVar6 = _DONE_GetPtr_DAT_08AB0300();
            iVar8 = FUN_0881b654(uVar6);
            if (iVar8 != 0) {
              bVar3 = *(int *)(param_1 + 0x2370) == 0;
              iVar8 = FUN_089d0bcc(iVar5,bVar3,auStack_60);
              if ((iVar8 != 0) && (bVar2 = true, (local_5c & 0x2000000) != 0)) {
                FUN_0899ef98(param_1,bVar3,auStack_58);
                bVar2 = true;
              }
            }
            memset_jak(auStack_60,0,0x28);
            local_5c = 0x2000000;
            bVar1 = *(byte *)(param_1 + 0x109f);
            iVar8 = param_1 + *(int *)(param_1 + 0x2370) * 0x10;
            *(short *)(iVar8 + 0x2332) = (short)*(undefined4 *)(param_1 + 0x2c);
            *(ushort *)(iVar8 + 0x2334) = (ushort)bVar1;
            memcpy_jak(auStack_58,iVar8 + 0x2330,0x10);
            FUN_089d0a74(iVar5,auStack_60);
          }
        }
      }
    }
    iVar5 = _DONE_NotZero_DAT_08AAC9E0();
    if (iVar5 != 0) {
      uVar6 = _DONE_Get_DAT_08AAC9E0();
      iVar5 = FUN_0880d7e0(uVar6,0x80);
      if (iVar5 != 0) {
        iVar5 = *(int *)(param_1 + 0x2c);
        if (iVar5 < 4) {
          if (iVar5 < 3) goto LAB_089a302c;
        }
        else if (iVar5 != 0x1d) goto LAB_089a302c;
        iVar5 = FUN_08816a90();
        if (iVar5 == 0) {
          FUN_08816868();
        }
        iVar5 = FUN_08816aac();
        *(undefined4 *)(iVar5 + 0x40) = 1;
        uVar6 = FUN_08816aac();
        FUN_08816c28(uVar6,0,0x1d);
        *(undefined4 *)(param_1 + 0x2c) = 0x1e;
      }
    }
  }
LAB_089a302c:
  if (bVar2) {
    switch(*(undefined4 *)(param_1 + 0x2c)) {
    case 0:
      iVar5 = FUN_0890a1c8(param_1,1,0);
      if (iVar5 != 0) {
        FUN_0890a274(param_1,1);
        FUN_0890a424(0x42c80000,0,0,param_1,"main_light.fab",1,1);
        FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
        FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
        FUN_089a4e08(0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
        FUN_0899f024(param_1,0);
        FUN_0899bb88(param_1,0);
        FUN_0899b310(param_1,0);
        FUN_0899c28c(param_1,0);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      break;
    case 1:
      uVar7 = FUN_089a97ec(0);
      iVar5 = FUN_0899b1c8(param_1,0);
      iVar8 = FUN_0899b740(param_1,0);
      uVar7 = ((uVar7 & 0xff) + iVar5 & 0xff) + iVar8 & 0xff;
      iVar5 = FUN_0899bc54(param_1,0);
      iVar8 = FUN_0899f82c(param_1,0);
      if (((uVar7 + iVar5 & 0xff) + iVar8 & 0xff) == 5) {
        FUN_08999400(param_1,1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      break;
    case 2:
      FUN_08998fdc(param_1);
      *(undefined *)(param_1 + 0x226b) = 1;
      uVar6 = 0x1d;
      if (*(int *)(param_1 + 0x2370) == 0) {
        uVar6 = 3;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      break;
    case 3:
      FUN_0899b800(param_1);
      FUN_0899b82c(param_1);
      FUN_0899b858(param_1);
      FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174),param_1 + 0xefc);
      cVar4 = FUN_0899bac0(param_1);
      if (cVar4 == '\0') {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
          iVar5 = FUN_0899eca4(param_1);
          if (iVar5 == 0) {
            cVar4 = FUN_0899d614(param_1);
            iVar5 = 1;
            if (cVar4 == '\0') {
              iVar8 = FUN_0899b9ec(param_1);
              if (iVar8 == iVar5) {
                iVar5 = _DONE_NotZero_DAT_08AC5874();
                if (iVar5 != 0) {
                  uVar6 = _DONE_Get_DAT_08AC5874();
                  FUN_089c6350(uVar6,1,0,0);
                }
                FUN_08998fdc(param_1);
                FUN_0899ed34(param_1,*(undefined4 *)(param_1 + 0x2370),
                             (int)*(char *)(param_1 + 0x109c));
              }
            }
            else if (cVar4 == '\x01') {
              FUN_08998fdc(param_1);
              *(undefined *)(param_1 + 0x109f) = 0;
              *(undefined4 *)(param_1 + 0x2c) = 0xc;
            }
            else {
              iVar5 = _DONE_NotZero_DAT_08AC5874();
              if (iVar5 != 0) {
                uVar6 = _DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar6,3,0,0);
              }
            }
          }
          else {
            iVar5 = _DONE_NotZero_DAT_08AC5874();
            if (iVar5 != 0) {
              uVar6 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,0,0,0);
            }
            FUN_08998fdc(param_1);
            FUN_0899b7d0(param_1);
            FUN_08999400(param_1,0);
            *(undefined4 *)(param_1 + 0x2c) = 0x1f;
          }
        }
        else {
          iVar5 = _DONE_NotZero_DAT_08AC5874();
          if (iVar5 != 0) {
            uVar6 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar6,2,0,0);
          }
          FUN_08998fdc(param_1);
          *(undefined *)(param_1 + 0x109f) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 0x1d;
        }
      }
      else if (cVar4 == '\x01') {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar6 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar6,0,0,0);
        }
        FUN_08998fdc(param_1);
        FUN_0899bb14(param_1);
        *(undefined *)(param_1 + 0x109f) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 10;
      }
      else {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar6 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar6,3,0,0);
        }
      }
      break;
    case 4:
      iVar5 = FUN_0881b22c();
      if ((iVar5 != 0) && (*(char *)(param_1 + 0x109f) == '\0')) {
        uVar6 = _DONE_GetPtr_DAT_08AB0300(param_1);
        uVar7 = FUN_0881b64c(uVar6);
        uVar6 = _DONE_GetPtr_DAT_08AB0300();
        FUN_0881b620(uVar6,uVar7 | 0x1000000);
      }
      FUN_08999400(param_1,0);
      FUN_0899b7d0(param_1);
      *(undefined *)(param_1 + 0x226b) = 0;
      *(undefined *)(param_1 + 0x226a) = 1;
      FUN_0899c28c(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 5:
      cVar4 = FUN_0899f82c(param_1,1);
      if (cVar4 == '\x01') {
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
      break;
    case 6:
      FUN_0899b7d0(param_1);
      FUN_089a4e08(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
      FUN_0899f024(param_1,1);
      FUN_0899b310(param_1,1);
      FUN_0899bb88(param_1,1);
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x42c80000,0,0,param_1,"main_finish.fab",1,0);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 7:
      uVar7 = FUN_089a97ec(1);
      iVar5 = FUN_0899b1c8(param_1,1);
      iVar8 = FUN_0899b740(param_1,1);
      uVar7 = ((uVar7 & 0xff) + iVar5 & 0xff) + iVar8 & 0xff;
      iVar5 = FUN_0899bc54(param_1,1);
      if ((uVar7 + iVar5 & 0xff) == 4) {
        *(undefined4 *)(param_1 + 0x2c) = 8;
      }
      break;
    case 8:
      iVar5 = FUN_0890a1c8(param_1,1,0);
      if (iVar5 != 0) {
        if (*(char *)(param_1 + 0x109f) == '\0') {
          FUN_089c87e4(0);
          FUN_089c879c(0x3f800000,0);
        }
        iVar5 = FUN_089edb80();
        *(undefined4 *)(iVar5 + 0x30) = 0;
        *(undefined4 *)(iVar5 + 0x34) = 0;
        *(undefined4 *)(iVar5 + 0x38) = 0;
        *(undefined4 *)(iVar5 + 0x3c) = 0;
        iVar5 = FUN_089edb80();
        *(undefined4 *)(iVar5 + 0x40) = 0;
        *(undefined4 *)(iVar5 + 0x44) = 0;
        *(undefined4 *)(iVar5 + 0x48) = 0;
        *(undefined4 *)(iVar5 + 0x4c) = 0x3f800000;
        uVar6 = FUN_089edb80();
        FUN_089edf24(uVar6,0x10);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      break;
    case 9:
      uVar6 = FUN_089edb80();
      iVar5 = FUN_089edf70(uVar6);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0x1c;
      }
      break;
    case 10:
      iVar5 = FUN_0899bb50(param_1);
      if (iVar5 == 1) {
        FUN_0899be38(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
      }
      break;
    case 0xb:
      iVar5 = FUN_0899be7c(param_1);
      if (iVar5 == 1) {
        if (*(char *)(param_1 + 0x10d0) == '\0') {
          FUN_0899ec54(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 0x1d;
        }
        else {
          *(undefined4 *)(param_1 + 0x2c) = 3;
        }
      }
      break;
    case 0xc:
      FUN_0899c528(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 0xd:
      iVar5 = FUN_089a0dc0(param_1);
      if (iVar5 == 1) {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar6 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar6,0,0,0);
        }
        FUN_08998fdc(param_1);
        FUN_0899bb14(param_1);
        *(undefined *)(param_1 + 0x109f) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 10;
      }
      break;
    case 0xe:
      iVar5 = FUN_08999794(param_1);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0xf;
      }
      break;
    case 0xf:
      FUN_0899c054(param_1);
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 4) & 8) != 0) {
        *(undefined *)(param_1 + 0x109d) = 0xff;
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
      break;
    case 0x10:
      FUN_0899c170(param_1);
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 9) & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
      break;
    default:
      FUN_0899ad20(param_1);
      FUN_08909a94(param_1);
      DAT_08ac0e70 = 0;
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      break;
    case 0x1d:
      if ((*(int *)(param_1 + 0x2370) == 0) || (*(short *)(param_1 + 0x2332) != 0x1f)) {
        if ((*(short *)(param_1 + 0x2332) == 0x1d) && (*(short *)(param_1 + 0x2342) == 0x1d)) {
          *(undefined4 *)(param_1 + 0x2c) = 4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 0x1f;
      }
      break;
    case 0x1e:
      bVar2 = true;
      iVar5 = FUN_08816a90();
      if (iVar5 != 0) {
        bVar2 = false;
        uVar6 = FUN_08816aac();
        iVar5 = FUN_08816e58(uVar6);
        if (iVar5 != 0) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
      break;
    case 0x1f:
      if ((*(short *)(param_1 + 0x2332) == 0x1f) && (*(short *)(param_1 + 0x2342) == 0x1f)) {
        FUN_08999400(param_1,0);
        *(undefined4 *)(param_1 + 0x28) = 5;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
  }
  FUN_08999e9c(param_1);
  FUN_0899a560(param_1);
  FUN_0899a7a8(param_1);
  if (*(int *)(param_1 + 0x2c) != DAT_08ac3d58) {
    DAT_08ac3d58 = *(int *)(param_1 + 0x2c);
  }
  iVar5 = 1;
  do {
    bVar2 = iVar5 < 2;
    iVar5 = iVar5 + 1;
  } while (bVar2);
  return;
}

