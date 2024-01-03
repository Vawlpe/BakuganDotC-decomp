#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08987070(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_08982fa4(param_1,0);
    FUN_089832cc(param_1,0);
    FUN_08983a60(param_1,0);
    FUN_08983e9c(param_1,0);
    FUN_08984188(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar3 = FUN_0898310c(param_1,0);
    cVar4 = FUN_08983720(param_1,0);
    cVar5 = FUN_08983c90(param_1,0);
    cVar1 = FUN_0898405c(param_1,0);
    cVar2 = FUN_08984370(param_1,0);
    if ((char)(cVar3 + cVar4 + cVar5 + cVar1 + cVar2) == '\x05') {
      FUN_08984494(param_1,1);
      FUN_0898604c(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_089845e0(param_1);
    FUN_0898460c(param_1);
    FUN_08984638(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x104),param_1 + 0xa9c);
    FUN_08985520(param_1);
    uVar9 = FUN_08984c38(param_1);
    uVar9 = uVar9 & 0xff;
    if (uVar9 == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar10 = FUN_08984788(param_1);
        iVar11 = 1;
        if (iVar10 == 1) {
          iVar10 = DONE_NotZero_DAT_08AC5874();
          if (iVar10 != 0) {
            uVar8 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar8,1,0,0);
          }
          FUN_0898604c(param_1);
          FUN_08984854(param_1);
        }
        else {
          iVar10 = FUN_08984868(param_1);
          if (iVar10 == iVar11) {
            iVar10 = DONE_NotZero_DAT_08AC5874();
            if (iVar10 != 0) {
              uVar8 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar8,1,0,0);
            }
            FUN_0898604c(param_1);
            FUN_089845b0(param_1);
            FUN_08984494(param_1,0);
            FUN_0898555c(param_1);
            *(undefined4 *)(param_1 + 0x2c) = 6;
          }
        }
      }
      else {
        iVar10 = DONE_NotZero_DAT_08AC5874();
        if (iVar10 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,2,0,0);
        }
        *(undefined *)(param_1 + 0xbd2) = 1;
        FUN_08984494(param_1,0);
        FUN_089845b0(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else {
      FUN_08984854(param_1);
      if (uVar9 == 1) {
        iVar10 = DONE_NotZero_DAT_08AC5874();
        if (iVar10 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874(param_1);
          FUN_089c6350(uVar8,0,0,0);
        }
        FUN_08984494(param_1,0);
        FUN_0898604c(param_1);
        FUN_089845b0(param_1);
        FUN_08984494(param_1,0);
        FUN_08984c84(param_1);
        *(undefined *)(param_1 + 0xbd2) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
      else {
        iVar10 = DONE_NotZero_DAT_08AC5874();
        if (iVar10 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,3,0,0);
        }
      }
    }
    break;
  case 3:
    FUN_08982fa4(param_1,1);
    FUN_089832cc(param_1,1);
    FUN_08983a60(param_1,1);
    FUN_08983e9c(param_1,1);
    FUN_08984188(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 4:
    cVar3 = FUN_0898310c(param_1,1);
    cVar4 = FUN_08983720(param_1,1);
    cVar5 = FUN_08983c90(param_1,1);
    cVar1 = FUN_0898405c(param_1,1);
    cVar2 = FUN_08984370(param_1,1);
    if ((char)(cVar3 + cVar4 + cVar5 + cVar1 + cVar2) == '\x05') {
      *(undefined4 *)(param_1 + 0x2c) = 0x14;
    }
    break;
  case 5:
    iVar10 = FUN_08984cc0(param_1);
    if (iVar10 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
    break;
  case 6:
    FUN_089832cc(param_1,1);
    FUN_08984188(param_1,1);
    FUN_08984960(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    FUN_089849b0(param_1);
    cVar3 = FUN_08983720(param_1,1);
    cVar4 = FUN_08984370(param_1,1);
    if ((char)(cVar3 + cVar4) == '\x02') {
      *(undefined *)(param_1 + 0xbcd) = *(undefined *)(param_1 + 0xbce);
      FUN_08983934(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 8:
    FUN_089849b0(param_1);
    FUN_089832cc(param_1,0);
    FUN_08984188(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    cVar3 = FUN_089849b0(param_1);
    cVar4 = FUN_08983720(param_1,0);
    cVar5 = FUN_08984370(param_1,0);
    if ((char)(cVar3 + cVar4 + cVar5) == '\x03') {
      *(undefined *)(param_1 + 0xbcf) = 0;
      FUN_0898604c(param_1);
      FUN_08984494(param_1,1);
      FUN_08983e00(0x3f800000,param_1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 10:
    FUN_08985588(param_1);
    FUN_08986368(param_1,0);
    FUN_08984db8(param_1,0,0);
    FUN_08984ed4(param_1,0);
    FUN_08985208(param_1,0);
    FUN_08985750(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    uVar9 = FUN_089864cc(param_1,0);
    uVar9 = uVar9 & 0xff;
    iVar10 = FUN_08984e30(param_1,0,0);
    iVar11 = FUN_089850ec(param_1,0);
    iVar6 = FUN_08985404(param_1,0);
    iVar7 = FUN_08985780(param_1,0);
    if (((((uVar9 + iVar10 & 0xff) + iVar11 & 0xff) + iVar6 & 0xff) + iVar7 & 0xff) == 5) {
      FUN_08986004(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xc:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
        iVar10 = DONE_NotZero_DAT_08AC5874();
        if (iVar10 != 0) {
          uVar8 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,2,0,0);
        }
        FUN_08984cf8(param_1);
        FUN_08985d54(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
    }
    else {
      iVar10 = DONE_NotZero_DAT_08AC5874();
      if (iVar10 != 0) {
        uVar8 = DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar8,0,0,0);
      }
      FUN_08985d54(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0xf;
    }
    break;
  case 0xd:
    FUN_08986368(param_1,1);
    FUN_08984db8(param_1,1,0);
    FUN_08984ed4(param_1,1);
    FUN_08985208(param_1,1);
    FUN_08985750(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xe:
    uVar9 = FUN_089864cc(param_1,1);
    uVar9 = uVar9 & 0xff;
    iVar10 = FUN_08984e30(param_1,1,0);
    iVar11 = FUN_089850ec(param_1,1);
    iVar6 = FUN_08985404(param_1,1);
    iVar7 = FUN_08985780(param_1,1);
    if (((((uVar9 + iVar10 & 0xff) + iVar11 & 0xff) + iVar6 & 0xff) + iVar7 & 0xff) == 5) {
      FUN_0898604c(param_1);
      FUN_08984494(param_1,1);
      FUN_08986004(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0xf:
    FUN_08986910(param_1,0);
    FUN_08984db8(param_1,0,1);
    FUN_08985830(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x10:
    uVar9 = FUN_08986a54(param_1,0);
    uVar9 = uVar9 & 0xff;
    iVar10 = FUN_08984e30(param_1,0,1);
    iVar11 = FUN_08985a6c(param_1,0);
    if (((uVar9 + iVar10 & 0xff) + iVar11 & 0xff) == 3) {
      FUN_08985b88(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0x11:
    FUN_08986e7c(param_1);
    FUN_08985f1c(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
      iVar10 = DONE_NotZero_DAT_08AC5874();
      if (iVar10 != 0) {
        uVar8 = DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar8,2,0,0);
      }
      FUN_08985d54(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0x12;
    }
    break;
  case 0x12:
    FUN_08986910(param_1,1);
    FUN_08984db8(param_1,1,1);
    FUN_08985830(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x13:
    uVar9 = FUN_08986a54(param_1,1);
    uVar9 = uVar9 & 0xff;
    iVar10 = FUN_08984e30(param_1,1,1);
    iVar11 = FUN_08985a6c(param_1,1);
    if (((uVar9 + iVar10 & 0xff) + iVar11 & 0xff) == 3) {
      FUN_08985b88(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    break;
  default:
    FUN_08982f88(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  FUN_089844d4(param_1);
  FUN_08985dac(param_1);
  return;
}

