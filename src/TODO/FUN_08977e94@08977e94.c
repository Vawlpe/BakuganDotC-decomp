#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08977e94(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    iVar8 = FUN_0890a2c8(param_1,1);
    iVar7 = FUN_0890a310(param_1,1);
    if (iVar8 == iVar7) {
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x41700000,0,0,param_1,"main_light.fab",1,1);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      *(undefined4 *)(param_1 + 0x54c) = 0x41800000;
      FUN_089a4e08(0,**(undefined4 **)(param_1 + 0x1c));
      FUN_08974924(param_1,0);
      FUN_0897673c(param_1,0);
      FUN_08974dd4(param_1,0);
      FUN_089752b0(param_1,0);
      FUN_08976320(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 1:
    uVar6 = FUN_089a97ec(0);
    iVar8 = FUN_08974a50(param_1,0);
    iVar7 = FUN_08974b64(param_1,0);
    uVar6 = ((uVar6 & 0xff) + iVar8 & 0xff) + iVar7 & 0xff;
    iVar8 = FUN_08974ef8(param_1,0);
    iVar7 = FUN_089753fc(param_1,0);
    if (((uVar6 + iVar8 & 0xff) + iVar7 & 0xff) == 5) {
      FUN_08976558(param_1);
      FUN_08977154(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_089754e4(param_1);
    FUN_08975510(param_1);
    FUN_08975544(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),param_1 + 0x45c);
    cVar2 = FUN_089758d4(param_1);
    if (cVar2 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar8 = FUN_089757dc(param_1);
        if (iVar8 == 1) {
          iVar8 = DONE_NotZero_DAT_08AC5874();
          if (iVar8 != 0) {
            uVar9 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar9,1,0,0);
          }
          FUN_08977154(param_1);
        }
      }
      else {
        iVar8 = DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar9 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar9,2,0,0);
        }
        *(undefined *)(param_1 + 0x504) = 1;
        FUN_08976320(param_1,1);
        *(undefined *)(param_1 + 0x751) = 0x10;
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (cVar2 == '\x01') {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar9 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar9,0,0,0);
      }
      FUN_08977154(param_1);
      FUN_08975958(param_1);
      *(undefined *)(param_1 + 0x504) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    else {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar9 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar9,3,0,0);
      }
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x751) == '\0') {
      FUN_089754b4(param_1);
      FUN_089a4e08(1,**(undefined4 **)(param_1 + 0x1c));
      FUN_08974924(param_1,1);
      FUN_0897673c(param_1,1);
      FUN_08974dd4(param_1,1);
      FUN_089752b0(param_1,1);
      FUN_0890a274(param_1,1);
      FUN_0890a424(0x41700000,0,0,param_1,"main_finish.fab",1,0);
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      FUN_089f86e4(*(undefined4 *)(DAT_08ac0e60 + 4));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      *(char *)(param_1 + 0x751) = *(char *)(param_1 + 0x751) + -1;
    }
    break;
  case 4:
    uVar6 = FUN_089a97ec(1);
    iVar8 = FUN_08974a50(param_1,1);
    iVar7 = FUN_08974b64(param_1,1);
    uVar6 = ((uVar6 & 0xff) + iVar8 & 0xff) + iVar7 & 0xff;
    iVar8 = FUN_08974ef8(param_1,1);
    iVar7 = FUN_089753fc(param_1,1);
    if (((uVar6 + iVar8 & 0xff) + iVar7 & 0xff) == 5) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    break;
  case 5:
    iVar8 = FUN_0890a2c8(param_1,1);
    iVar7 = FUN_0890a310(param_1,1);
    if (iVar7 <= iVar8) {
      FUN_089c87e4(0);
      FUN_089c879c(0x3dcccccd,0);
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
      uVar9 = FUN_089edb80();
      FUN_089edf24(uVar9,0x10);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 6:
    uVar9 = FUN_089edb80();
    iVar8 = FUN_089edf70(uVar9);
    if (iVar8 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x12;
    }
    break;
  case 7:
    iVar8 = FUN_0897599c(param_1);
    if (iVar8 == 1) {
      FUN_089759d4(param_1);
    }
    break;
  case 8:
    FUN_0897673c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    cVar2 = FUN_08974b64(param_1,0);
    if (cVar2 == '\x01') {
      FUN_08977154(param_1);
      uVar9 = 10;
      if (*(char *)(param_1 + 0x503) == '\0') {
        uVar9 = 2;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar9;
    }
    break;
  case 10:
    FUN_089754e4(param_1);
    FUN_08975510(param_1);
    FUN_08975544(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),param_1 + 0x45c);
    cVar2 = FUN_089758d4(param_1);
    if (cVar2 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar8 = FUN_089757dc(param_1);
        if (iVar8 == 1) {
          FUN_08976364(param_1);
          iVar8 = DONE_NotZero_DAT_08AC5874();
          if (iVar8 != 0) {
            uVar9 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar9,1,0,0);
          }
          FUN_08977154(param_1);
        }
      }
      else {
        FUN_08976488(param_1,0);
        iVar8 = DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar9 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar9,2,0,0);
        }
        FUN_089754b4(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
      }
    }
    else if (cVar2 == '\x01') {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar9 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar9,0,0,0);
      }
      FUN_08977154(param_1);
      FUN_08975958(param_1);
      *(undefined *)(param_1 + 0x504) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    else {
      iVar8 = DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar9 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar9,3,0,0);
      }
    }
    break;
  case 0xb:
    FUN_0897673c(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xc:
    cVar2 = FUN_08974b64(param_1,1);
    if (cVar2 == '\x01') {
      *(byte *)(param_1 + 0x503) = *(byte *)(param_1 + 0x503) ^ 1;
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    break;
  case 0xd:
    FUN_089754b4(param_1);
    FUN_08975b70(param_1,1);
    FUN_08975df0(param_1,1);
    FUN_08977548(param_1,1);
    FUN_089752b0(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xe:
    cVar2 = FUN_08975d40(param_1,1);
    cVar3 = FUN_08975ef0(param_1,1);
    cVar4 = FUN_08975fa8(param_1,1);
    cVar5 = FUN_089753fc(param_1,1);
    if ((char)(cVar2 + cVar3 + cVar4 + cVar5) == '\x04') {
      FUN_08975b38(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0xf;
    }
    break;
  case 0xf:
    bVar1 = *(byte *)(param_1 + 0x500);
    if (bVar1 < 5) {
      if (bVar1 == 1) {
        *(undefined4 *)(param_1 + 0x28) = 4;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x28) = 5;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else if (bVar1 == 3) {
        *(undefined4 *)(param_1 + 0x28) = 6;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else if (bVar1 == 4) {
        *(undefined4 *)(param_1 + 0x28) = 7;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x28) = 3;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    break;
  case 0x10:
    FUN_08974068(param_1);
    FUN_08974350(param_1);
    FUN_08975b70(param_1,0);
    FUN_08975df0(param_1,0);
    FUN_08977548(param_1,0);
    FUN_089752b0(param_1,0);
    FUN_08976488(param_1,1);
    FUN_08976558(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x11:
    cVar2 = FUN_08975d40(param_1,0);
    cVar3 = FUN_08975ef0(param_1,0);
    cVar4 = FUN_08975fa8(param_1,0);
    cVar5 = FUN_089753fc(param_1,0);
    if ((char)(cVar2 + cVar3 + cVar4 + cVar5) == '\x04') {
      FUN_08977154(param_1);
      uVar9 = 10;
      if (*(char *)(param_1 + 0x503) == '\0') {
        uVar9 = 2;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar9;
    }
    break;
  default:
    FUN_08974908(param_1);
    FUN_08909a94(param_1);
    DAT_08ac0e70 = 0;
    *(undefined4 *)(param_1 + 0x28) = 8;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_08976598(param_1);
  return;
}

