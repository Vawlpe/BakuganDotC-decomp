#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08805138(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_70;
  undefined auStack_6f [63];
  int local_30;
  int local_2c;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c) = 1;
    iVar3 = *(int *)(param_1 + 0x6c);
    goto LAB_088051b4;
  case 1:
    iVar3 = *(int *)(param_1 + 0x6c);
LAB_088051b4:
    if (iVar3 == 0) {
      local_2c = 0;
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar1 = FUN_089d7d74(0x44,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      iVar3 = local_2c;
      if (iVar1 != 0) {
        FUN_089bd9b4(iVar1);
        iVar3 = iVar1;
      }
      *(int *)(param_1 + 0x6c) = iVar3;
    }
    local_70 = 0;
    memset_jak(auStack_6f,0,0x3f);
    FUN_0880cc48();
    uVar2 = FUN_0880dc94();
    FUN_089b4c84(&local_70,"data/2d/%s/name.lzs",uVar2);
    iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x6c),&local_70,10,1,1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 2:
    iVar3 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x6c),1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x70) == 0) {
      local_30 = 0;
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar1 = FUN_089d7d74(0x44,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      iVar3 = local_30;
      if (iVar1 != 0) {
        FUN_089bd9b4(iVar1);
        iVar3 = iVar1;
      }
      *(int *)(param_1 + 0x70) = iVar3;
    }
    iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x70),"data/name_common.lzs",10,1,1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 4:
    iVar3 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x70),1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x2c) = 6;
    goto LAB_08805370;
  case 6:
LAB_08805370:
    iVar3 = FUN_089edb80();
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
    iVar3 = FUN_089edb80();
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    uVar2 = FUN_089edb80();
    FUN_089edf24(uVar2,0x14);
    iVar3 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x2c) = 7;
LAB_088053c8:
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    (**(code **)(iVar3 + 0x14))(param_1 + *(short *)(iVar3 + 0x10));
    break;
  case 7:
    iVar3 = *(int *)(param_1 + 0xc);
    goto LAB_088053c8;
  default:
    return;
  }
  return;
}

