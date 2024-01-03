#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898a60c(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_089883f0(param_1,0);
    FUN_0898a098(param_1,0);
    FUN_08988a3c(param_1,0);
    FUN_08988e78(param_1,0);
    FUN_089891cc(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar3 = FUN_08988558(param_1,0);
    cVar4 = FUN_08988718(param_1,0);
    cVar5 = FUN_08988c6c(param_1,0);
    cVar1 = FUN_08989038(param_1,0);
    cVar2 = FUN_089893f8(param_1,0);
    if ((char)(cVar3 + cVar4 + cVar5 + cVar1 + cVar2) == '\x05') {
      FUN_089894f8(param_1,1);
      FUN_0898961c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 2:
    FUN_08989970(param_1);
    FUN_0898999c(param_1);
    FUN_089899c8(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc0),param_1 + 0x7f4);
    cVar3 = FUN_08989fd0(param_1);
    if (cVar3 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar7 = FUN_08989b18(param_1);
        iVar8 = 1;
        if (iVar7 == 1) {
          iVar7 = DONE_NotZero_DAT_08AC5874();
          if (iVar7 != 0) {
            uVar6 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar6,1,0,0);
          }
          FUN_0898961c(param_1);
        }
        else {
          iVar7 = FUN_08989c00(param_1);
          if (iVar7 == iVar8) {
            iVar7 = DONE_NotZero_DAT_08AC5874();
            if (iVar7 != 0) {
              uVar6 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,1,0,0);
            }
            FUN_0898961c(param_1);
            FUN_08989940(param_1);
            FUN_089894f8(param_1,0);
            *(undefined4 *)(param_1 + 0x2c) = 6;
          }
        }
      }
      else {
        iVar7 = DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar6 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar6,2,0,0);
        }
        *(undefined *)(param_1 + 0x8e6) = 1;
        FUN_089894f8(param_1,0);
        FUN_08989940(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (cVar3 == '\x01') {
      iVar7 = DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar6 = DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar6,0,0,0);
      }
      FUN_089894f8(param_1,0);
      FUN_0898961c(param_1);
      FUN_08989940(param_1);
      FUN_089894f8(param_1,0);
      FUN_0898a024(param_1);
      *(undefined *)(param_1 + 0x8e6) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    else {
      iVar7 = DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar6 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar6,3,0,0);
      }
    }
    break;
  case 3:
    FUN_089883f0(param_1,1);
    FUN_0898a098(param_1,1);
    FUN_08988a3c(param_1,1);
    FUN_08988e78(param_1,1);
    FUN_089891cc(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 4:
    cVar3 = FUN_08988558(param_1,1);
    cVar4 = FUN_08988718(param_1,1);
    cVar5 = FUN_08988c6c(param_1,1);
    cVar1 = FUN_08989038(param_1,1);
    cVar2 = FUN_089893f8(param_1,1);
    if ((char)(cVar3 + cVar4 + cVar5 + cVar1 + cVar2) == '\x05') {
      *(undefined4 *)(param_1 + 0x2c) = 0xf;
    }
    break;
  case 5:
    iVar7 = FUN_0898a060(param_1);
    if (iVar7 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
    break;
  case 6:
    FUN_0898a098(param_1,1);
    FUN_089891cc(param_1,1);
    FUN_08989ca4(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    FUN_08989cf4(param_1);
    cVar3 = FUN_08988718(param_1,1);
    cVar4 = FUN_089893f8(param_1,1);
    if ((char)(cVar3 + cVar4) == '\x02') {
      *(undefined *)(param_1 + 0x8e1) = *(undefined *)(param_1 + 0x8e2);
      FUN_08988910(param_1);
      FUN_08989f7c(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 8:
    FUN_08989cf4(param_1);
    FUN_0898a098(param_1,0);
    FUN_089891cc(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    cVar3 = FUN_08989cf4(param_1);
    cVar4 = FUN_08988718(param_1,0);
    cVar5 = FUN_089893f8(param_1,0);
    if ((char)(cVar3 + cVar4 + cVar5) == '\x03') {
      *(undefined *)(param_1 + 0x8e3) = 0;
      FUN_0898961c(param_1);
      FUN_089894f8(param_1,1);
      FUN_08988ddc(0x3f800000,param_1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 10:
    FUN_089c87e4(0);
    FUN_089c879c(0x3dcccccd,0);
    iVar7 = FUN_089edb80();
    *(undefined4 *)(iVar7 + 0x30) = 0;
    *(undefined4 *)(iVar7 + 0x34) = 0;
    *(undefined4 *)(iVar7 + 0x38) = 0;
    *(undefined4 *)(iVar7 + 0x3c) = 0;
    iVar7 = FUN_089edb80();
    *(undefined4 *)(iVar7 + 0x40) = 0;
    *(undefined4 *)(iVar7 + 0x44) = 0;
    *(undefined4 *)(iVar7 + 0x48) = 0;
    *(undefined4 *)(iVar7 + 0x4c) = 0x3f800000;
    uVar6 = FUN_089edb80();
    FUN_089edf24(uVar6,0x10);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    uVar6 = FUN_089edb80();
    iVar7 = FUN_089edf70(uVar6);
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 0xd:
    FUN_089c8734(0,0x16,1,0);
    iVar7 = FUN_089edb80();
    *(undefined4 *)(iVar7 + 0x30) = 0;
    *(undefined4 *)(iVar7 + 0x34) = 0;
    *(undefined4 *)(iVar7 + 0x38) = 0;
    *(undefined4 *)(iVar7 + 0x3c) = 0x3f800000;
    iVar7 = FUN_089edb80();
    *(undefined4 *)(iVar7 + 0x40) = 0;
    *(undefined4 *)(iVar7 + 0x44) = 0;
    *(undefined4 *)(iVar7 + 0x48) = 0;
    *(undefined4 *)(iVar7 + 0x4c) = 0;
    uVar6 = FUN_089edb80();
    FUN_089edf24(uVar6,0x10);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xe:
    uVar6 = FUN_089edb80();
    iVar7 = FUN_089edf70(uVar6);
    if (iVar7 != 0) {
      FUN_0898961c(param_1);
      FUN_089894f8(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  default:
    FUN_089883d4(param_1);
    *(undefined4 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_08989538(param_1);
  return;
}

