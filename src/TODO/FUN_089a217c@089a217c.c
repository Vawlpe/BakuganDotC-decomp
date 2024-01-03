#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a217c(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    iVar5 = FUN_0890a2c8(param_1,1);
    iVar6 = FUN_0890a310(param_1,1);
    if (iVar5 == iVar6) {
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
    uVar4 = FUN_089a97ec(0);
    iVar5 = FUN_0899b1c8(param_1,0);
    iVar6 = FUN_0899b740(param_1,0);
    uVar4 = ((uVar4 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff;
    iVar5 = FUN_0899bc54(param_1,0);
    iVar6 = FUN_0899f82c(param_1,0);
    if (((uVar4 + iVar5 & 0xff) + iVar6 & 0xff) == 5) {
      FUN_08999400(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_08998fdc(param_1);
    *(undefined *)(param_1 + 0x226b) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 3:
    FUN_0899b800(param_1);
    FUN_0899b82c(param_1);
    FUN_0899b858(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174),param_1 + 0xefc);
    cVar1 = FUN_0899bac0(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar5 = FUN_0899eca4(param_1);
        if (iVar5 == 0) {
          cVar1 = FUN_0899d614(param_1);
          if (cVar1 == '\0') {
            iVar5 = FUN_0899b9ec(param_1);
            if (iVar5 == 1) {
              iVar5 = DONE_NotZero_DAT_08AC5874();
              if (iVar5 != 0) {
                uVar3 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar3,1,0,0);
              }
              FUN_08998fdc(param_1);
            }
          }
          else if (cVar1 == '\x01') {
            FUN_08998fdc(param_1);
            *(undefined *)(param_1 + 0x109f) = 0;
            *(undefined4 *)(param_1 + 0x2c) = 0xc;
          }
          else {
            iVar5 = DONE_NotZero_DAT_08AC5874();
            if (iVar5 != 0) {
              uVar3 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar3,3,0,0);
            }
          }
        }
        else {
          iVar5 = DONE_NotZero_DAT_08AC5874();
          if (iVar5 != 0) {
            uVar3 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar3,0,0,0);
          }
          FUN_08998fdc(param_1);
          FUN_0899b7d0(param_1);
          FUN_08999400(param_1,0);
          *(undefined4 *)(param_1 + 0x28) = 5;
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
      }
      else {
        iVar5 = DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,2,0,0);
        }
        FUN_08998fdc(param_1);
        *(undefined *)(param_1 + 0x109f) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    else if (cVar1 == '\x01') {
      iVar5 = DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar3 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,0,0,0);
      }
      FUN_08998fdc(param_1);
      FUN_0899bb14(param_1);
      *(undefined *)(param_1 + 0x109f) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
    else {
      iVar5 = DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar3 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,3,0,0);
      }
    }
    break;
  case 4:
    FUN_08999400(param_1,0);
    FUN_0899b7d0(param_1);
    *(undefined *)(param_1 + 0x226b) = 0;
    *(undefined *)(param_1 + 0x226a) = 1;
    FUN_0899c28c(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 5:
    cVar1 = FUN_0899f82c(param_1,1);
    if (cVar1 == '\x01') {
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
    uVar4 = FUN_089a97ec(1);
    iVar5 = FUN_0899b1c8(param_1,1);
    iVar6 = FUN_0899b740(param_1,1);
    uVar4 = ((uVar4 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff;
    iVar5 = FUN_0899bc54(param_1,1);
    if ((uVar4 + iVar5 & 0xff) == 4) {
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    break;
  case 8:
    iVar5 = FUN_0890a2c8(param_1,1);
    iVar6 = FUN_0890a310(param_1,1);
    if (iVar6 <= iVar5) {
      if ((*(char *)(param_1 + 0x109f) == '\0') || (iVar5 = FUN_08996448(param_1), iVar5 == 1)) {
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
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,0x10);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 9:
    uVar3 = FUN_089edb80();
    iVar5 = FUN_089edf70(uVar3);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x1c;
    }
    break;
  case 10:
    iVar5 = FUN_0899bb50(param_1);
    if (iVar5 == 1) {
      iVar5 = FUN_08996448(param_1);
      if (iVar5 == 0) {
        FUN_0899be38(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 0x11;
      }
    }
    break;
  case 0xb:
    iVar5 = FUN_0899be7c(param_1);
    if (iVar5 == 1) {
      if (*(char *)(param_1 + 0x10d0) == '\0') {
        FUN_0899ec54(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 4;
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
      iVar5 = DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar3 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,0,0,0);
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
    if (((int)*(char *)(*(int *)(param_1 + 0x20) + 9) & 0x80U) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0x11:
    FUN_0899b7d0(param_1);
    FUN_0899c54c(param_1);
    FUN_0899c880(param_1,1);
    FUN_089a1060(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x12:
    cVar1 = FUN_0899cd98(param_1,1);
    cVar2 = FUN_0899c71c(param_1,0);
    if ((char)(cVar1 + cVar2) == '\x02') {
      FUN_0899d530(param_1);
      FUN_0899d894(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0x13;
    }
    break;
  case 0x13:
    FUN_0899d5e8(param_1);
    FUN_0899e134(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174),param_1 + 0xefc);
    cVar1 = FUN_0899d72c(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        cVar1 = FUN_0899ece4(param_1);
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x10) != 0) {
              FUN_0899d894(param_1);
              *(undefined *)(param_1 + 0x109f) = 0;
              *(undefined4 *)(param_1 + 0x2c) = 0x18;
              break;
            }
          }
          else {
            iVar5 = DONE_NotZero_DAT_08AC5874();
            if (iVar5 != 0) {
              uVar3 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar3,3,0,0);
            }
          }
        }
        iVar5 = FUN_0899d670(param_1);
        if (iVar5 == 1) {
          iVar5 = DONE_NotZero_DAT_08AC5874();
          if (iVar5 != 0) {
            uVar3 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar3,1,0,0);
          }
          FUN_0899d894(param_1);
        }
      }
      else {
        iVar5 = DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,2,0,0);
        }
        FUN_0899d894(param_1);
        FUN_0899d5b8(param_1);
        *(undefined *)(param_1 + 0x109f) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 0x14;
      }
    }
    else if (cVar1 == '\x01') {
      iVar5 = DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar3 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,0,0,0);
      }
      FUN_0899d894(param_1);
      FUN_0899d778(param_1);
      *(undefined *)(param_1 + 0x109f) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x16;
    }
    else {
      iVar5 = DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar3 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,3,0,0);
      }
    }
    break;
  case 0x14:
    FUN_0899c880(param_1,0);
    FUN_089a1060(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x15:
    cVar1 = FUN_0899cd98(param_1,0);
    cVar2 = FUN_0899c71c(param_1,1);
    if ((char)(cVar1 + cVar2) == '\x02') {
      FUN_08998fdc(param_1);
      *(undefined *)(param_1 + 0x109e) = 0;
      FUN_0899d7b4(param_1,*(undefined *)(param_1 + 0x109e));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0x16:
    iVar5 = FUN_0899bb50(param_1);
    if (iVar5 == 1) {
      FUN_0899be38(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0x17;
    }
    break;
  case 0x17:
    iVar5 = FUN_0899be7c(param_1);
    if (iVar5 == 1) {
      uVar3 = 0x13;
      if (*(char *)(param_1 + 0x10d0) == '\0') {
        uVar3 = 0x1a;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
    }
    break;
  case 0x18:
    FUN_0899c528(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x19:
    iVar5 = FUN_0899e9d0(param_1);
    if (iVar5 == 1) {
      iVar5 = DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar3 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,0,0,0);
      }
      FUN_0899d894(param_1);
      FUN_0899d778(param_1);
      *(undefined *)(param_1 + 0x109f) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x16;
    }
    break;
  case 0x1a:
    FUN_08999400(param_1,0);
    FUN_0899d5b8(param_1);
    FUN_089a4e08(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
    FUN_0899b310(param_1,1);
    FUN_0899bb88(param_1,1);
    FUN_089a1060(param_1,1);
    FUN_0890a274(param_1,1);
    FUN_0890a424(0x42c80000,0,0,param_1,"main_finish.fab",1,0);
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x1b:
    uVar4 = FUN_089a97ec(1);
    iVar5 = FUN_0899b740(param_1,1);
    uVar4 = (uVar4 & 0xff) + iVar5 & 0xff;
    iVar5 = FUN_0899bc54(param_1,1);
    iVar6 = FUN_0899c71c(param_1,1);
    if (((uVar4 + iVar5 & 0xff) + iVar6 & 0xff) == 4) {
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    break;
  default:
    FUN_0899ad20(param_1);
    FUN_08909a94(param_1);
    DAT_08ac0e70 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  FUN_08999e9c(param_1);
  FUN_0899a560(param_1);
  FUN_0899a7a8(param_1);
  return;
}

