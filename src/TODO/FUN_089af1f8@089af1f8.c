#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089af1f8(int param_1)

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
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    iVar21 = FUN_0890a2c8(param_1,1);
    iVar19 = FUN_0890a310(param_1,1);
    if (iVar21 == iVar19) {
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x44610000,0,0,param_1,"main_light.fab",1,1);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089a4e08(0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
      FUN_089ac304(param_1,0);
      FUN_089ac688(param_1,0);
      FUN_089ac78c(param_1,0);
      FUN_089ac914(param_1,0);
      FUN_089acc70(param_1,0);
      FUN_089acff4(param_1,0);
      FUN_089ac178(param_1,0);
      FUN_089ad984(param_1,0);
      FUN_089adbc4(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 1:
    uVar13 = FUN_089a97ec(0);
    iVar21 = FUN_089ac54c(param_1,0);
    iVar19 = FUN_089ac6d4(param_1,0);
    iVar14 = FUN_089ac83c(param_1,0);
    iVar15 = FUN_089acaa4(param_1,0);
    iVar16 = FUN_089acdac(param_1,0);
    iVar17 = FUN_089ad1a0(param_1,0);
    uVar13 = ((((((uVar13 & 0xff) + iVar21 & 0xff) + iVar19 & 0xff) + iVar14 & 0xff) + iVar15 & 0xff
              ) + iVar16 & 0xff) + iVar17 & 0xff;
    iVar21 = FUN_089ac1c4(param_1,0);
    iVar19 = FUN_089adad0(param_1,0);
    iVar14 = FUN_089add94(param_1,0);
    if ((((uVar13 + iVar21 & 0xff) + iVar19 & 0xff) + iVar14 & 0xff) == 10) {
      FUN_089ad93c(param_1);
      FUN_089ae1dc(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    cVar2 = FUN_089ae4e0(param_1,0);
    if (cVar2 == '\x01') {
      FUN_089ae7b8(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 3:
    FUN_089ad2d4(param_1);
    FUN_089ad578(param_1);
    FUN_089ad6e0(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xfc),param_1 + 0xa50);
    iVar21 = FUN_089ad4ac(param_1);
    if (iVar21 == 1) {
      iVar21 = DONE_NotZero_DAT_08AC5874();
      if (iVar21 != 0) {
        uVar20 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar20,0,0,0);
      }
      FUN_089ae7b8(param_1);
      FUN_089ad4e0(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    else {
      iVar21 = FUN_089ad554(param_1);
      if (iVar21 == 1) {
        iVar21 = DONE_NotZero_DAT_08AC5874();
        if (iVar21 != 0) {
          uVar20 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar20,2,0,0);
        }
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
      }
      else {
        iVar21 = FUN_089ad394(param_1);
        if (iVar21 == 1) {
          iVar21 = DONE_NotZero_DAT_08AC5874();
          if (iVar21 != 0) {
            uVar20 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar20,1,0,0);
          }
          FUN_089ae7b8(param_1);
        }
        else {
          iVar21 = FUN_089aeb5c(param_1);
          if (iVar21 == 1) {
            FUN_089ac0a4(param_1);
            FUN_089ad330(param_1);
            FUN_089adec8(param_1);
            *(undefined4 *)(param_1 + 0x2c) = 4;
          }
          else {
            iVar21 = FUN_089ad424(param_1);
            if (iVar21 == 1) {
              iVar21 = DONE_NotZero_DAT_08AC5874();
              if (iVar21 != 0) {
                uVar20 = DONE_Get_DAT_08AC5874();
                FUN_089c6350(uVar20,1,0,0);
              }
              FUN_089ae7b8(param_1);
            }
          }
        }
      }
    }
    break;
  case 4:
    FUN_089ad2d4(param_1);
    iVar21 = FUN_089aeecc(param_1);
    if (iVar21 == 1) {
      FUN_089ad7b4(param_1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 5:
    iVar21 = FUN_089ad51c(param_1);
    if (iVar21 == 1) {
      cVar2 = *(char *)(param_1 + 0x74);
      if (cVar2 < '\x05') {
        if ('\x03' < cVar2) {
          FUN_089ad784(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 6;
        }
      }
      else if (cVar2 < '\x06') {
        FUN_089ac020(param_1);
        uVar20 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90);
        uVar1 = FUN_089acf60(param_1,0);
        FUN_089acee0(param_1,uVar20,uVar1);
        uVar20 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x94);
        uVar1 = FUN_089acf60(param_1,1);
        FUN_089acee0(param_1,uVar20,uVar1);
        uVar20 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98);
        uVar1 = FUN_089acf60(param_1,2);
        FUN_089acee0(param_1,uVar20,uVar1);
        uVar20 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xf4);
        piVar18 = (int *)DONE_Get_DAT_08AAC9E0();
        FUN_089adb98(param_1,uVar20,*(undefined *)(*piVar18 + 0x6ab));
        FUN_089ad93c(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
      else if (cVar2 < '\a') {
        *(undefined4 *)(param_1 + 0x2c) = 10;
      }
    }
    break;
  case 6:
    FUN_089ac178(param_1,1);
    FUN_089a4e08(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
    FUN_089ac304(param_1,1);
    FUN_089ac688(param_1,1);
    FUN_089ac78c(param_1,1);
    FUN_089ac914(param_1,1);
    FUN_089acc70(param_1,1);
    FUN_089acff4(param_1,1);
    FUN_089ae1dc(param_1,1);
    FUN_089ad984(param_1,1);
    FUN_089adbc4(param_1,1);
    FUN_0890a274(param_1,1);
    FUN_0890a424(0x44610000,0,0,param_1,"main_finish.fab",1,0);
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    cVar2 = FUN_089ac1c4(param_1,1);
    cVar3 = FUN_089a97ec(1);
    cVar4 = FUN_089ac54c(param_1,1);
    cVar5 = FUN_089ac6d4(param_1,1);
    cVar6 = FUN_089ac83c(param_1,1);
    cVar7 = FUN_089acaa4(param_1,1);
    cVar8 = FUN_089acdac(param_1,1);
    cVar9 = FUN_089ad1a0(param_1,1);
    cVar10 = FUN_089ae4e0(param_1,1);
    cVar11 = FUN_089adad0(param_1,1);
    cVar12 = FUN_089add94(param_1,1);
    if ((char)(cVar2 + cVar3 + cVar4 + cVar5 + cVar6 + cVar7 + cVar8 + cVar9 + cVar10 + cVar11 +
              cVar12) == '\v') {
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    break;
  case 8:
    iVar21 = FUN_0890a2c8(param_1,1);
    iVar19 = FUN_0890a310(param_1,1);
    if (iVar21 == iVar19) {
      iVar21 = FUN_089edb80();
      *(undefined4 *)(iVar21 + 0x30) = 0;
      *(undefined4 *)(iVar21 + 0x34) = 0;
      *(undefined4 *)(iVar21 + 0x38) = 0;
      *(undefined4 *)(iVar21 + 0x3c) = 0;
      iVar21 = FUN_089edb80();
      *(undefined4 *)(iVar21 + 0x40) = 0;
      *(undefined4 *)(iVar21 + 0x44) = 0;
      *(undefined4 *)(iVar21 + 0x48) = 0;
      *(undefined4 *)(iVar21 + 0x4c) = 0x3f800000;
      uVar20 = FUN_089edb80();
      FUN_089edf24(uVar20,0x10);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 9:
    uVar20 = FUN_089edb80();
    iVar21 = FUN_089edf70(uVar20);
    if (iVar21 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  case 10:
    iVar21 = FUN_089edb80();
    *(undefined4 *)(iVar21 + 0x30) = 0;
    *(undefined4 *)(iVar21 + 0x34) = 0;
    *(undefined4 *)(iVar21 + 0x38) = 0;
    *(undefined4 *)(iVar21 + 0x3c) = 0;
    iVar21 = FUN_089edb80();
    *(undefined4 *)(iVar21 + 0x40) = 0x3e8888f8;
    *(undefined4 *)(iVar21 + 0x44) = 0x3f088851;
    *(undefined4 *)(iVar21 + 0x48) = 0x3e8888f8;
    *(undefined4 *)(iVar21 + 0x4c) = 0x3f4ccccd;
    uVar20 = FUN_089edb80();
    FUN_089ede1c(uVar20,3);
    uVar20 = FUN_089edb80();
    FUN_089edf24(uVar20,0xf);
    uVar20 = FUN_089c2b48(0);
    uVar20 = FUN_089c32e0(uVar20);
    *(undefined4 *)(param_1 + 0xbb4) = uVar20;
    FUN_089c87e4(0);
    FUN_089c879c(0x3dcccccd,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    uVar20 = FUN_089edb80();
    iVar21 = FUN_089edf70(uVar20);
    if (iVar21 != 0) {
      uVar20 = DONE_Get_DAT_08AC5874();
      FUN_089c69a4(uVar20);
      if (DAT_08abe8f5 != '\0') {
        FUN_088c29b8(0);
      }
      FUN_089a5c54(0,2);
      uVar20 = DONE_Get_DAT_08AAC9E0();
      FUN_0880d0e8(uVar20,0x40000000);
      FUN_089bf6e8(0x2724,100);
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    break;
  case 0xc:
    iVar21 = FUN_089bf93c(0x2724,1);
    if (iVar21 == 0) {
      uVar20 = DONE_Get_DAT_08AAC9E0();
      FUN_0880d808(uVar20,0x40000000);
      iVar21 = FUN_089edb80();
      *(undefined4 *)(iVar21 + 0x40) = 0;
      *(undefined4 *)(iVar21 + 0x44) = 0;
      *(undefined4 *)(iVar21 + 0x48) = 0;
      *(undefined4 *)(iVar21 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
    }
    break;
  case 0xd:
    FUN_089c8734(0,*(undefined4 *)(param_1 + 0xbb4),1,0);
    FUN_089ae7b8(param_1);
    iVar21 = FUN_089a5d34(2);
    if (iVar21 != 0) {
      FUN_089ab74c(param_1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 3;
    break;
  case 0xe:
    iVar21 = FUN_089adf4c(param_1);
    if (iVar21 == 1) {
      FUN_089adfe4(param_1,8);
      *(undefined4 *)(param_1 + 0x2c) = 0xf;
    }
    else {
      FUN_089ad784(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 6;
    }
    break;
  case 0xf:
    iVar21 = FUN_089ae024(param_1);
    if (iVar21 == 1) {
      if (*(char *)(param_1 + 0xbbe) == '\0') {
        FUN_089ae134(param_1);
        FUN_089ad784(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    break;
  default:
    FUN_089abf84(param_1);
    FUN_08909a94(param_1);
    DAT_08ac0e70 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

