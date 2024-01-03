#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891b474(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0891892c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar4 = FUN_08918b10(param_1,0);
    if (cVar4 == '\x01') {
      FUN_08918770(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_08918d4c(param_1,0);
    FUN_08919090(param_1,0);
    FUN_08919668(param_1,0);
    FUN_0891a2c4(param_1,1,0);
    FUN_0891a954(param_1,0);
    FUN_089184e4(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 3:
    cVar4 = FUN_08918f18(param_1,0);
    cVar1 = FUN_089191f4(param_1,0);
    cVar2 = FUN_0891978c(param_1,0);
    cVar3 = FUN_08919994(param_1,0);
    if ((char)(cVar4 + cVar1 + cVar2 + cVar3) == '\x04') {
      FUN_089192bc(param_1,1);
      FUN_08919404(param_1,1);
      FUN_0891954c(param_1,1);
      FUN_08919b04(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 4:
    iVar6 = FUN_08919b44(param_1);
    if (iVar6 == 1) {
      FUN_08919c84(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 5:
    FUN_08919f48(param_1);
    FUN_08919f74(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c),param_1 + 0x690);
    cVar4 = FUN_0891a790(param_1);
    if (cVar4 == '\0') {
      uVar7 = FUN_0891a1bc(param_1);
      if ((int)uVar7 == (int)((ulonglong)uVar7 >> 0x20)) {
        iVar6 = DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar5 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,1,0,0);
        }
        FUN_08919c84(param_1);
        FUN_0891a738(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    else if (cVar4 == '\x01') {
      iVar6 = DONE_NotZero_DAT_08AC5874();
      if (iVar6 != 0) {
        uVar5 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar5,0,0,0);
      }
      FUN_08919c84(param_1);
      FUN_0891a7d0(param_1);
      *(undefined *)(param_1 + 0x898) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
    }
    else {
      iVar6 = DONE_NotZero_DAT_08AC5874();
      if (iVar6 != 0) {
        uVar5 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar5,3,0,0);
      }
    }
    break;
  case 6:
    FUN_089184e4(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 5;
    break;
  case 7:
    FUN_08919f18(param_1);
    FUN_08918d4c(param_1,1);
    FUN_08919090(param_1,1);
    FUN_08919668(param_1,1);
    FUN_0891a2c4(param_1,1,1);
    FUN_0891a954(param_1,1);
    FUN_089192bc(param_1,0);
    FUN_08919404(param_1,0);
    FUN_0891954c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 8:
    cVar4 = FUN_08918f18(param_1,1);
    cVar1 = FUN_089191f4(param_1,1);
    cVar2 = FUN_0891978c(param_1,1);
    cVar3 = FUN_08919994(param_1,1);
    if ((char)(cVar4 + cVar1 + cVar2 + cVar3) == '\x04') {
      FUN_089188bc(param_1);
      FUN_089188f4(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 9:
    FUN_0891892c(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 10:
    cVar4 = FUN_08918b10(param_1,1);
    if (cVar4 == '\x01') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xb:
    FUN_089c87e4(0);
    FUN_089c879c(0x3dcccccd,0);
    iVar6 = FUN_089edb80();
    *(undefined4 *)(iVar6 + 0x30) = 0;
    *(undefined4 *)(iVar6 + 0x34) = 0;
    *(undefined4 *)(iVar6 + 0x38) = 0;
    *(undefined4 *)(iVar6 + 0x3c) = 0;
    iVar6 = FUN_089edb80();
    *(undefined4 *)(iVar6 + 0x40) = 0;
    *(undefined4 *)(iVar6 + 0x44) = 0;
    *(undefined4 *)(iVar6 + 0x48) = 0;
    *(undefined4 *)(iVar6 + 0x4c) = 0x3f800000;
    uVar5 = FUN_089edb80();
    FUN_089edf24(uVar5,0x10);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xc:
    uVar5 = FUN_089edb80();
    iVar6 = FUN_089edf70(uVar5);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  case 0xd:
    iVar6 = FUN_0891a848(param_1);
    if (iVar6 == 1) {
      FUN_08919b04(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 0xe;
    }
    break;
  case 0xe:
    iVar6 = FUN_08919b44(param_1);
    if (iVar6 == 1) {
      if (*(char *)(param_1 + 0x90a) == '\0') {
        FUN_0891a898(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    break;
  case 0xf:
    iVar6 = FUN_0891ad7c(param_1);
    if (iVar6 == 1) {
      FUN_0891a8bc(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    break;
  default:
    FUN_089184a8(param_1);
    FUN_08909a94(param_1);
    DAT_08ac0e70 = 0;
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_08919308(param_1);
  FUN_08919450(param_1);
  FUN_0891958c(param_1);
  FUN_0891b16c(param_1);
  return;
}

