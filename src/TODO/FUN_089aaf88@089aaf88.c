#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089aaf88(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  FUN_089a7358();
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    iVar6 = FUN_0890a2c8(param_1,1);
    iVar5 = FUN_0890a310(param_1,1);
    if (iVar5 <= iVar6) {
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x42c80000,0,0,param_1,"main_light.fab",1,1);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089a4e08(0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    FUN_089a9e68(param_1,0);
    break;
  case 1:
    cVar2 = FUN_089a97ec(0);
    cVar1 = FUN_089a9e68(param_1,0);
    if ((char)(cVar2 + cVar1) == '\x02') {
      FUN_089a8774(param_1,0);
      FUN_089a8ac0(param_1,0);
      FUN_089a8e38(param_1,0);
      FUN_089a9054(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    uVar4 = FUN_089aa334(param_1,0);
    uVar4 = uVar4 & 0xff;
    iVar6 = FUN_089a8b0c(param_1,0);
    uVar4 = uVar4 + iVar6 & 0xff;
    iVar6 = FUN_089a8ebc(param_1,0);
    iVar5 = FUN_089a94dc(param_1,0);
    if (((uVar4 + iVar6 & 0xff) + iVar5 & 0xff) == 4) {
      FUN_089a75c0(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined *)(param_1 + 0x9c0) = 1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
      if ((*(ushort *)(*piVar3 + 0x6a6) & 1) == 0) {
        piVar3 = (int *)_DONE_Get_DAT_08AAC9E0(param_1);
        if ((*(ushort *)(*piVar3 + 0x6a6) & 2) != 0) {
          FUN_089a95a4(param_1,7);
          *(undefined4 *)(param_1 + 0x2c) = 0xc;
        }
      }
      else {
        FUN_089a95a4(param_1,4);
        *(undefined4 *)(param_1 + 0x2c) = 0xc;
      }
    }
    break;
  case 3:
    FUN_089a899c(param_1,*(undefined *)(param_1 + 0x74));
    cVar2 = FUN_089a85ac(param_1);
    if (cVar2 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 0x20) != 0) {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,2,0,0);
        }
        *(undefined *)(param_1 + 0x672) = 1;
        FUN_089a95a4(param_1,3);
        *(undefined4 *)(param_1 + 0x2c) = 0xc;
        return;
      }
      iVar6 = FUN_089a8bf4(param_1);
      if (iVar6 == 1) {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,1,0,0);
        }
        FUN_089aa658(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 4;
        return;
      }
    }
    else {
      if (cVar2 == '\x01') {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,0,0,0);
        }
        FUN_089a8dc4(param_1);
        *(undefined *)(param_1 + 0x672) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 5;
        return;
      }
      iVar6 = _DONE_NotZero_DAT_08AC5874();
      if (iVar6 != 0) {
        uVar7 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,3,0,0);
      }
    }
    break;
  case 4:
    iVar6 = FUN_089aa93c(param_1);
    if (iVar6 == 1) {
      FUN_089a75c0(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 5:
    iVar6 = FUN_089a8e00(param_1);
    if (iVar6 != 0) {
      uVar7 = 6;
      if (*(char *)(param_1 + 0x74) == '\x01') {
        uVar7 = 10;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
    }
    break;
  case 6:
    FUN_089a6e78(param_1,1);
    FUN_089a4e08(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    FUN_089a8774(param_1,1);
    FUN_089a8ac0(param_1,1);
    FUN_089a8e38(param_1,1);
    FUN_089a9054(param_1,1);
    FUN_0890a274(param_1,1);
    FUN_0890a424(0x42c80000,0,0,param_1,"main_finish.fab",1,0);
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    uVar4 = FUN_089a97ec(1);
    iVar6 = FUN_089a9e68(param_1,1);
    iVar5 = FUN_089aa334(param_1,1);
    uVar4 = ((uVar4 & 0xff) + iVar6 & 0xff) + iVar5 & 0xff;
    iVar6 = FUN_089a8b0c(param_1,1);
    uVar4 = uVar4 + iVar6 & 0xff;
    iVar6 = FUN_089a8ebc(param_1,1);
    iVar5 = FUN_089a94dc(param_1,1);
    if (((uVar4 + iVar6 & 0xff) + iVar5 & 0xff) == 6) {
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    break;
  case 8:
    iVar6 = FUN_0890a2c8(param_1,1);
    iVar5 = FUN_0890a310(param_1,1);
    if (iVar5 <= iVar6) {
      if (*(char *)(param_1 + 0x672) == '\0') {
        cVar2 = *(char *)(param_1 + 0x74);
        if (((cVar2 == '\0') || (cVar2 == '\x04')) || (cVar2 == '\x03')) {
          FUN_089c87e4(0);
          FUN_089c879c(0x3dcccccd,0);
        }
      }
      else {
        FUN_089c87e4(0);
        FUN_089c879c(0x3dcccccd,0);
      }
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
      uVar7 = FUN_089edb80();
      FUN_089edf24(uVar7,8);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 9:
    uVar7 = FUN_089edb80();
    iVar6 = FUN_089edf70(uVar7);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
    }
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 0xb:
    iVar6 = FUN_089a59fc();
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0xc:
    iVar6 = FUN_089a95e4(param_1);
    if (iVar6 == 1) {
      uVar7 = 3;
      if (*(char *)(param_1 + 0xe3e) == '\0') {
        uVar7 = 6;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
    }
    break;
  default:
    FUN_089a85f4(param_1);
    iVar6 = FUN_089a8714(param_1);
    if (iVar6 != 0) {
      FUN_08909a94(param_1);
    }
    DAT_08ac0e70 = (uint)(iVar6 == 0);
    *(undefined4 *)(param_1 + 0x28) = 6;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

