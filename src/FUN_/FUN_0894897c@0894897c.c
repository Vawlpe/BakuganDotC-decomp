#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894897c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined local_60;
  undefined auStack_5f [63];
  int local_20;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 < 2) {
    if (-1 < iVar3) {
      if (iVar3 < 1) {
        FUN_0890a424(0x40000000,0,0,param_1,"main_bg.fab",0,0);
        *(undefined4 *)(param_1 + 0x2c) = 1;
      }
      else {
        FUN_08948340(0x469c4000);
        FUN_08948378(0x41400000,&DAT_08ac33f0,&DAT_08ac3400);
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
    }
  }
  else if (iVar3 < 3) {
    if (*(int *)(param_1 + 0x6c) == 0) {
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
      *(int *)(param_1 + 0x6c) = iVar3;
    }
    local_60 = 0;
    memset_jak(auStack_5f,0,0x3f);
    FUN_0880cc48();
    uVar1 = FUN_0880dc94();
    FUN_089b4c84(&local_60,"data/2d/%s/record.lzs",uVar1);
    iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x6c),&local_60,10,1,1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
  }
  else if ((iVar3 < 4) && (iVar3 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x6c),1), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

