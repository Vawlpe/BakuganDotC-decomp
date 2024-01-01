#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08944a30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined local_60;
  undefined auStack_5f [63];
  int local_20;
  int local_1c;
  
  uVar5 = *(uint *)(param_1 + 0x2c);
  if (uVar5 < 5) {
    if (uVar5 == 1) {
      iVar3 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x6c),1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
    }
    else if (uVar5 == 2) {
      if (*(int *)(param_1 + 0x70) == 0) {
        local_20 = 0;
        FUN_089d8634();
        uVar1 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar2 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar1);
        FUN_089d866c();
        iVar3 = local_20;
        if (iVar2 != 0) {
          FUN_089bd9b4(iVar2);
          iVar3 = iVar2;
        }
        *(int *)(param_1 + 0x70) = iVar3;
      }
      iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x70),"data/credit_common.lzs",10,1,1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (uVar5 == 3) {
      iVar3 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x70),1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    else if (uVar5 == 4) {
      FUN_08944558(0x469c4000);
      FUN_08944590(0x41800000,&DAT_08ac33c0,&DAT_08ac33d0);
      iVar3 = FUN_089eac08();
      if (iVar3 == 0) {
        FUN_089eaa70();
        puVar4 = (undefined4 *)FUN_089eac30();
        *puVar4 = 0x44fa0000;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    else {
      if (*(int *)(param_1 + 0x6c) == 0) {
        local_1c = 0;
        FUN_089d8634();
        uVar1 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar2 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar1);
        FUN_089d866c();
        iVar3 = local_1c;
        if (iVar2 != 0) {
          FUN_089bd9b4(iVar2);
          iVar3 = iVar2;
        }
        *(int *)(param_1 + 0x6c) = iVar3;
      }
      local_60 = 0;
      memset_jak(auStack_5f,0,0x3f);
      _DONE_Get_DAT_08AAC9E0();
      uVar1 = FUN_0880dc94();
      FUN_089b4c84(&local_60,"data/2d/%s/credit.lzs",uVar1);
      iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x6c),&local_60,10,1,1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 1;
      }
    }
  }
  return;
}

